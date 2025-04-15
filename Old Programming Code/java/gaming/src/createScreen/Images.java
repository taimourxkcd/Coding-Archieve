package createScreen;

import java.awt.Image;
import java.awt.*;
import javax.swing.ImageIcon;
import javax.swing.JFrame;

public class Images extends JFrame {

	public static void main(String[] args) {
		
		DisplayMode dm = new DisplayMode(800,600,16, DisplayMode.REFRESH_RATE_UNKNOWN); // first 2 = resolution , colors, refresh rate
		Images i = new Images();
		i.run(dm); // takes your display mode as your parameter
	}

	private Screen s;
	private Image bg;
	private Image pic;
	private boolean loaded;
	
	
	
	// run method
	public void run(DisplayMode dm) {
		getContentPane().setBackground(Color.BLUE);
		getContentPane().setForeground(Color.BLACK);	
		setFont(new Font("Ariel", Font.PLAIN, 24));
		loaded = false;
		
		s = new Screen();
		try {
			s.setFullScreen(dm, this); // this refers to the object that you are working on 
			loadpics();
			try {
				Thread.sleep(5000);
			}catch(Exception ex) {}
			 
			
		}finally {
			s.restoreScreen();
		}
	}
	
	// loads pictures
	public void loadpics() {
		bg = new ImageIcon("/Images/back.png").getImage();
		pic = new ImageIcon("/Images/front.png").getImage();
		loaded = true;
		repaint();
		
	}
	
	public void paint(Graphics g) { // Graphics2D is a subclass of Graphics 
		
		if(g instanceof Graphics2D) {
			
			Graphics2D g2 = ( Graphics2D) g; //typecasting done here|| no matter what it is but as of right now it is graphics 2d object
			g2.setRenderingHint(RenderingHints.KEY_TEXT_ANTIALIASING,  RenderingHints.VALUE_TEXT_ANTIALIAS_ON); // key (what do you want to change) and value (how to change it i.e make it smooth)
			
		}
		if(loaded) {
			g.drawImage(bg,0,0,null);
			g.drawImage(pic , 170 , 180, null );
		}
		
		
		super.paint(g); 
		g.drawString( "This is gonna be awesome", 200, 200); // 200 200 set it to the middle of the screen 
		
	}
	 
}
























