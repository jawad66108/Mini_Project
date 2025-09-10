import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.ArrayList;

public class GamePlane extends JPanel implements ActionListener, KeyListener {

    Timer timer;
    Bird bird;
    ArrayList<pipe> pipes;
    score score;

    boolean gameOver = false;
    int panelWidth = 500;
    int panelHeight = 600;

    public GamePlane() {
        setPreferredSize(new Dimension(panelWidth, panelHeight));
        setBackground(Color.CYAN);

        bird = new Bird(100, panelHeight / 2, 30, 30);
        pipes = new ArrayList<>();
        score = new score();

        addKeyListener(this);
        setFocusable(true);

        timer = new Timer(20, this); // 50 FPS
        timer.start();

        // add first pipe
        pipes.add(new pipe(panelWidth, 60, 150, panelHeight));
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (!gameOver) {
            bird.update();

            // update pipes
            ArrayList<pipe> toRemove = new ArrayList<>();
            for (pipe pipe : pipes) {
                pipe.update();

                // check collision
                if (bird.getBounds().intersects(pipe.getTopBounds()) ||
                    bird.getBounds().intersects(pipe.getBottomBounds(panelHeight)) ||
                    bird.y + bird.height >= panelHeight) {
                    gameOver = true;
                }

                // check if bird passed pipe (scoring)
                if (pipe.x + pipe.width == bird.x) {
                    score.increase();
                }

                // remove pipes out of screen
                if (pipe.x + pipe.width < 0) {
                    toRemove.add(pipe);
                }
            }
            pipes.removeAll(toRemove);

            // add new pipe every 120 frames (approx 2 seconds)
            if (pipes.size() < 3) {
                pipe lastPipe = pipes.get(pipes.size() - 1);
                if (lastPipe.x < panelWidth - 200) {
                    pipes.add(new pipe(panelWidth, 60, 150, panelHeight));
                }
            }
        }
        repaint();
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);

        bird.draw(g);
        for (pipe pipe : pipes) {
            pipe.draw(g, panelHeight);
        }
        score.draw(g);

        if (gameOver) {
            g.setColor(Color.RED);
            g.setFont(new Font("Arial", Font.BOLD, 36));
            g.drawString("Game Over!", panelWidth / 2 - 100, panelHeight / 2);
            g.setFont(new Font("Arial", Font.PLAIN, 20));
            g.drawString("Press SPACE to Restart", panelWidth / 2 - 110, panelHeight / 2 + 40);
        }
    }

    @Override
    public void keyPressed(KeyEvent e) {
        if (e.getKeyCode() == KeyEvent.VK_SPACE) {
            if (!gameOver) {
                bird.jump();
            } else {
                restartGame();
            }
        }
    }

    public void restartGame() {
        bird = new Bird(100, panelHeight / 2, 30, 30);
        pipes.clear();
        pipes.add(new pipe(panelWidth, 60, 150, panelHeight));
        score = new score();
        gameOver = false;
    }

    @Override public void keyReleased(KeyEvent e) {}
    @Override public void keyTyped(KeyEvent e) {}

    // Run the game
    public static void main(String[] args) {
        JFrame frame = new JFrame("Flappy Bird - Java Swing");
        GamePlane gamePanel = new GamePlane();
        frame.add(gamePanel);
        frame.pack();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
        frame.setLocationRelativeTo(null);
    }
}
