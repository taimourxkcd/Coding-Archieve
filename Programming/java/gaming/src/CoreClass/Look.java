package CoreClass;

import java.awt.*;
import java.awt.event.*;
import javax.swing.ImageIcon;
import javax.swing.SwingUtilities;


public class Look extends Core implements MouseMotionListener, KeyListener{

	public static void main(String[] args) {
		new Look().run();

	}
	
	private Image bg;
	private Robot robot;
	private Point mouse;    
	private Point center;    
	private Point image;     
	private boolean centering;
	
	// init
	public void init() {
		super.init();
		mouse = new Point();
		center = new Point();
		image = new Point();
		centering = false;
		
		try {
			robot = new Robot();
			recentermouse();
			mouse.x = center.x;
			mouse.y = center.y;
			
			
		}catch(Exception ex) {
			System.out.println("Exception 1");
			     
		}
		
		Window w = s.getFullScreenWindow();
		w.addMouseMotionListener(this);
		w.addKeyListener(this);
		bg = new ImageIcon("C:\\Users\\Abdul Basit\\eclipse-workspace\\gaming\\back.png").getImage();
		
	}
	 
	// draw
	public synchronized void draw(Graphics2D g) {
		int w = s.getWidth();
		int h = s.getHeight();
		
		image.x %= w;
		image.y %= h;
		
 
		if(image.x < 0) {
			image.x += w;	
		}
		
		if(image.y < 0) {
			image.x += h;	
		}
		
		int x = image.x;
		int y = image.y;
		
		g.drawImage(bg,x,y,null);
		g.drawImage(bg,x-w,y,null);
		g.drawImage(bg,x-h,y,null);
		g.drawImage(bg,x-w,y-h,null);

	}
	
	//recenter the mouse using the robot 
	private synchronized void recentermouse() {
		
		Window w = s.getFullScreenWindow();
		if(robot != null && w.isShowing()) {
			center.x = w.getWidth() / 2;
			center.y = w.getHeight() /2;
			SwingUtilities.convertPointToScreen(center, w);
			centering = true;
			robot.mouseMove(center.x, center.y);
			
		}
	}
	
	// mouse motuon listener method 
	public void mouseDragged(MouseEvent e) {
		mouseMoved(e);
		
	}

	public synchronized void mouseMoved(MouseEvent e) {
		if(centering && center.x == e.getX() && center.y == e.getY()) {
			centering = false;
			
		}else {
			int dx = e.getX() - mouse.x;
			int dy = e.getY() - mouse.y;
			
			image.y += dy;
			recentermouse();
			mouse.y = e.getY();
			
			
			
		}
	}
	// key listener interface 
	public void keyPressed(KeyEvent e) {
		if(e.getKeyCode() == KeyEvent.VK_ESCAPE) {
			stop();
		}
	}
	public void keyReleased(KeyEvent e) {}
	public void keyTyped(KeyEvent e) {}
}





















































 
