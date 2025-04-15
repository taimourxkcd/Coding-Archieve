package createScreen;

import java.awt.*;
import javax.swing.JFrame;

public class taimour extends JFrame {

	public static void main(String[] args) {
		
		DisplayMode dm = new DisplayMode(800,600,16, DisplayMode.REFRESH_RATE_UNKNOWN); // first 2 = resolution , colors, refresh rate
		taimour t = new taimour();
		t.run(dm); // takes your display mode as your parameter
	}

	public void run(DisplayMode dm) {
		getContentPane().setBackground(Color.BLUE);
		getContentPane().setForeground(Color.BLACK);
		setFont(new Font("Ariel", Font.PLAIN, 24));
		
		Screen s = new Screen();
		try {
			s.setFullScreen(dm, this); // this refers to the object that you are working on 
			
			try {
				Thread.sleep(5000);
			}catch(Exception ex) {}
			 
			
		}finally {
			s.restoreScreen();
		}
	}
	
	public void paint(Graphics g) { // Graphics2D is a subclass of Graphics 
		
		if(g instanceof Graphics2D) {
			
			Graphics2D g2 = ( Graphics2D) g; //typecasting done here|| no matter what it is but as of right now it is graphics 2d object
			g2.setRenderingHint(RenderingHints.KEY_TEXT_ANTIALIASING,  RenderingHints.VALUE_TEXT_ANTIALIAS_ON); // key (what do you want to change) and value (how to change it i.e make it smooth)
			
		}
		
		
		
		super.paint(g); 
		g.drawString( "This is gonna be awesome", 200, 200); // 200 200 set it to the middle of the screen 
		
	}
	 
}
























