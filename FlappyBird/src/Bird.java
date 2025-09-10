import java.awt.*;

public class Bird {
    public int x, y, width, height;
    public int velocityY = 0;
    public int gravity = 1;
    public int jumpStrength = -10;

    public Bird(int x, int y, int width, int height) {
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }

    public void update() {
        velocityY += gravity;
        y += velocityY;

        if (y < 0) y = 0; // prevent bird from going off top
    }

    public void jump() {
        velocityY = jumpStrength;
    }

    public void draw(Graphics g) {
        g.setColor(Color.YELLOW);
        g.fillOval(x, y, width, height);
    }

    public Rectangle getBounds() {
        return new Rectangle(x, y, width, height);
    }
}
