import java.awt.*;
import java.util.Random;

public class pipe {
    public int x, width, gapY, gapHeight;
    public int speed = 2;
    Random rand = new Random();

    public pipe(int x, int width, int gapHeight, int panelHeight) {
        this.x = x;
        this.width = width;
        this.gapHeight = gapHeight;
        this.gapY = rand.nextInt(panelHeight - gapHeight - 50) + 25;
    }

    public void update() {
        x -= speed;
    }

    public void draw(Graphics g, int panelHeight) {
        g.setColor(Color.GREEN);

        // top pipe
        g.fillRect(x, 0, width, gapY);

        // bottom pipe
        g.fillRect(x, gapY + gapHeight, width, panelHeight - gapY - gapHeight);
    }

    public Rectangle getTopBounds() {
        return new Rectangle(x, 0, width, gapY);
    }

    public Rectangle getBottomBounds(int panelHeight) {
        return new Rectangle(x, gapY + gapHeight, width, panelHeight - gapY - gapHeight);
    }
}

