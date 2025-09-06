import java.io.*;
import java.util.*;

class Room {
    int roomNumber;
    String category; // Standard, Deluxe, Suite
    double price;
    boolean isBooked;

    Room(int roomNumber, String category, double price) {
        this.roomNumber = roomNumber;
        this.category = category;
        this.price = price;
        this.isBooked = false;
    }
}

class Reservation {
    int reservationId;
    String customerName;
    Room room;
    boolean isPaid;

    Reservation(int reservationId, String customerName, Room room) {
        this.reservationId = reservationId;
        this.customerName = customerName;
        this.room = room;
        this.isPaid = false;
    }
}

class Hotel {
    List<Room> rooms = new ArrayList<>();
    Map<Integer, Reservation> reservations = new HashMap<>();
    static final String FILE_NAME = "reservations.csv";
    int nextReservationId = 1;

    Hotel() {
        // Add some sample rooms
        rooms.add(new Room(101, "Standard", 50));
        rooms.add(new Room(102, "Standard", 50));
        rooms.add(new Room(201, "Deluxe", 100));
        rooms.add(new Room(202, "Deluxe", 100));
        rooms.add(new Room(301, "Suite", 200));
        loadReservations();
    }

    void searchRooms() {
        System.out.println("\n--- Available Rooms ---");
        for (Room r : rooms) {
            if (!r.isBooked) {
                System.out.printf("Room %d (%s) - $%.2f%n", r.roomNumber, r.category, r.price);
            }
        }
    }

    void makeReservation(String customerName, int roomNumber) {
        Room selected = null;
        for (Room r : rooms) {
            if (r.roomNumber == roomNumber && !r.isBooked) {
                selected = r;
                break;
            }
        }
        if (selected == null) {
            System.out.println("Room not available!");
            return;
        }
        selected.isBooked = true;
        Reservation res = new Reservation(nextReservationId++, customerName, selected);
        reservations.put(res.reservationId, res);
        saveReservations();
        System.out.println("Reservation successful! Your ID: " + res.reservationId);
    }

    void cancelReservation(int reservationId) {
        Reservation res = reservations.get(reservationId);
        if (res == null) {
            System.out.println("Reservation not found.");
            return;
        }
        res.room.isBooked = false;
        reservations.remove(reservationId);
        saveReservations();
        System.out.println("Reservation cancelled successfully.");
    }

    void viewReservation(int reservationId) {
        Reservation res = reservations.get(reservationId);
        if (res == null) {
            System.out.println("Reservation not found.");
            return;
        }
        System.out.println("\n--- Reservation Details ---");
        System.out.printf("ID: %d%nCustomer: %s%nRoom: %d (%s)%nPrice: $%.2f%nPaid: %s%n",
                res.reservationId, res.customerName,
                res.room.roomNumber, res.room.category,
                res.room.price, res.isPaid ? "Yes" : "No");
    }

    void makePayment(int reservationId) {
        Reservation res = reservations.get(reservationId);
        if (res == null) {
            System.out.println("Reservation not found.");
            return;
        }
        if (res.isPaid) {
            System.out.println("Already paid.");
            return;
        }
        res.isPaid = true;
        saveReservations();
        System.out.println("Payment successful for $" + res.room.price);
    }

    void saveReservations() {
        try (PrintWriter out = new PrintWriter(new FileWriter(FILE_NAME))) {
            out.println("id,name,room,category,price,paid");
            for (Reservation r : reservations.values()) {
                out.printf("%d,%s,%d,%s,%.2f,%b%n",
                        r.reservationId, r.customerName, r.room.roomNumber,
                        r.room.category, r.room.price, r.isPaid);
            }
        } catch (IOException e) {
            System.out.println("Error saving reservations: " + e.getMessage());
        }
    }

    void loadReservations() {
        try (BufferedReader br = new BufferedReader(new FileReader(FILE_NAME))) {
            String line = br.readLine(); // header
            while ((line = br.readLine()) != null) {
                String[] p = line.split(",");
                int id = Integer.parseInt(p[0]);
                String name = p[1];
                int roomNum = Integer.parseInt(p[2]);
                String cat = p[3];
                double price = Double.parseDouble(p[4]);
                boolean paid = Boolean.parseBoolean(p[5]);

                Room room = null;
                for (Room r : rooms) {
                    if (r.roomNumber == roomNum) {
                        room = r;
                        break;
                    }
                }
                if (room != null) {
                    room.isBooked = true;
                    Reservation res = new Reservation(id, name, room);
                    res.isPaid = paid;
                    reservations.put(id, res);
                    nextReservationId = Math.max(nextReservationId, id + 1);
                }
            }
        } catch (IOException e) {
        }
    }
}

public class AlphaTasks {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Hotel hotel = new Hotel();

        while (true) {
            System.out.println("\n===== Hotel Reservation System =====");
            System.out.println("1) Search Available Rooms");
            System.out.println("2) Make Reservation");
            System.out.println("3) Cancel Reservation");
            System.out.println("4) View Reservation");
            System.out.println("5) Make Payment");
            System.out.println("0) Exit");
            System.out.print("Choose: ");
            int choice = sc.nextInt();

            switch (choice) {
                case 1: hotel.searchRooms(); break;
                case 2:
                    System.out.print("Enter your name: ");
                    String name = sc.next();
                    System.out.print("Enter room number: ");
                    int roomNo = sc.nextInt();
                    hotel.makeReservation(name, roomNo);
                    break;
                case 3:
                    System.out.print("Enter reservation ID: ");
                    int cancelId = sc.nextInt();
                    hotel.cancelReservation(cancelId);
                    break;
                case 4:
                    System.out.print("Enter reservation ID: ");
                    int viewId = sc.nextInt();
                    hotel.viewReservation(viewId);
                    break;
                case 5:
                    System.out.print("Enter reservation ID: ");
                    int payId = sc.nextInt();
                    hotel.makePayment(payId);
                    break;
                case 0:
                    System.out.println("Goodbye!");
                    sc.close();
                    return;
                default:
                    System.out.println("Invalid choice.");
            }
        }
    }
}
