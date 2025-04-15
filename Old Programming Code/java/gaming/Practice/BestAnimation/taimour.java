package BestAnimation;


import java.awt.*;
import javax.swing.*;

public class taimour {

	public static void main(String[] args) {
		taimour t = new taimour();
		t.run();
	}

	// create three objects 
	private animate a; 
	private BetterManager s;
	private Image bg;
	private static final DisplayMode modes1[] = {
			new DisplayMode(800,600,32,0),
			new DisplayMode(800,600,24,0),
			new DisplayMode(800,600,16,0),
			new DisplayMode(640,480,32,0),
			new DisplayMode(640,480,24,0),
			new DisplayMode(640,480,32,0)
			
	};
	
	// load images and add scenes 
	public void loadImages() {
		bg = new ImageIcon("C:\\Users\\Abdul Basit\\eclipse-workspace\\gaming\\bg.png").getImage();
		Image face1 = new ImageIcon("C:\\Users\\Abdul Basit\\eclipse-workspace\\gaming\\sad.png").getImage();
		Image face2 = new ImageIcon("C:\\Users\\Abdul Basit\\eclipse-workspace\\gaming\\smile.png").getImage();
		
		a = new animate();
		a.addScene(face1,250);
		a.addScene(face2,250);
	}
	
	// main method called form main
	public void run() {
		s = new BetterManager();
		try {
			DisplayMode dm = s.findFirstCompatibleMode(modes1);
			s.setFullScreeen(dm);
			loadImages();
			movieLoop();
		}finally {
			s.restoreScreen();
		}
	}
	
	// play movie now
	public void movieLoop() {
		long startingTime = System.currentTimeMillis();
		long cumTime = startingTime;
		while(cumTime - startingTime < 6000) {
			long timePassed = System.currentTimeMillis() - cumTime;
			cumTime += timePassed;
			a.update(timePassed);
			
			// draw and update the screen 
			Graphics2D g = s.getGraphics();
			draw(g);
			g.dispose();
			s.update();
			
			try {
				Thread.sleep(20);
				
			}catch(Exception ex) {}
		}
	}
	
	// draws graphics 
	public void draw(Graphics g) {
		g.drawImage(bg,0,0,null);
		g.drawImage(a.getImage(),0,0,null);
	}
	
}
























