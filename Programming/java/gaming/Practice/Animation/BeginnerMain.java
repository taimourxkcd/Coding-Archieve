package Animation;

import java.awt.*;
import javax.swing.JFrame;
import javax.swing.ImageIcon;

public class BeginnerMain {

	public static void main(String[] args) {
		
		DisplayMode dm = new DisplayMode(800,600,16,DisplayMode.REFRESH_RATE_UNKNOWN);
		BeginnerMain bm = new BeginnerMain();
		bm.run(dm);

	}
	
	private Screen screen;
	private Image bg;
	private Beginner a;
	
	// loads pics from computer to java and add scenes 
	public void loadPics() {
		bg = new ImageIcon("C:\\Users\\Abdul Basit\\eclipse-workspace\\gaming\\back.png").getImage();
		Image face1 = new ImageIcon("C:\\Users\\Abdul Basit\\eclipse-workspace\\gaming\\smile.png").getImage();
		Image face2 = new ImageIcon("C:\\Users\\Abdul Basit\\eclipse-workspace\\gaming\\sad.png").getImage();
		a = new Beginner();
		a.addScene(face1, 250);
		a.addScene(face2, 250);
	}
	
	// main engin to run the program 
	public void run(DisplayMode dm) {
		screen = new Screen();
		try {
			screen.setFullScreen(dm, new JFrame());
			loadPics();
			movieLoop();
			
		}finally {
			screen.restoreScreen();
		}
		
	}
	
	// maain movue loop
	public void movieLoop() {
		long StartingTime = System.currentTimeMillis();
		long cumTime = StartingTime;
	
		while(cumTime - StartingTime < 5000) {
			long timePassed = System.currentTimeMillis() - cumTime;
			cumTime += timePassed;
			a.update(timePassed);
			
			Graphics g = screen.getFullScreenWindow().getGraphics();
			draw(g);
			g.dispose();
			
		}

		try {
			Thread.sleep(20);
		}catch(Exception ex) {
			
		}
		
	}
	

	// draw method
	public void draw(Graphics g) {
		g.drawImage(bg, 0, 0, null);
		g.drawImage(a.getImage(), 0, 0 , null);
	}

}





















