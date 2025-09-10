import java.awt.*;

public class score {
    public int value = 0;

    public void increase() {
        value++;
    }

    public void draw(Graphics g) {
        g.setColor(Color.BLACK);
        g.setFont(new Font("Arial", Font.BOLD, 24));
        g.drawString("Score: " + value, 20, 30);
    }
}

