package DrawGraphics;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class lemon extends JPanel {

	public void paintComponent(Graphics g) {
		super.paintComponent(g);
		
		this.setBackground(Color.WHITE);
		
		g.setColor(Color.BLUE);
		
		g.fillRect(25,25,100,30);
		
		g.setColor(new Color(90,81,215));
		
		g.fillRect(25,65,600,30);
		
		g.setColor(Color.RED);
		
		g.drawString(" this is some text", 25, 120);
		
		
	}
}
