package Sprites;


import java.awt.*;
import javax.swing.*;
import javax.swing.ImageIcon;

public class taimour2 {

	public static void main(String[] args) {
		taimour2 t = new taimour2();
		t.run();
	}

	// create three objects 
	private Intro sprite;  // Sprite class in case if bucky
	private Animation a; 
	private ScreenManager s;
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
		
		a = new Animation();
		a.addScene(face1,250);
		a.addScene(face2,250);
		
		sprite = new Intro(a);	
		sprite.setVelocityX(0.3f);
		sprite.setVelocityY(0.3f);

	}
	
	// main method called form main
	public void run() {
		s = new ScreenManager();
		try {
			DisplayMode dm = s.findFirstCompatibleMode(modes1);
			s.setFullScreen(dm);
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
			update(timePassed);
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
		g.drawImage(sprite.getImage(), Math.round(sprite.getX()), Math.round(sprite.getY()), null);
	}
	
	// update sprite 
	public void update(long timePassed) {
		if(sprite.getX() < 0 ) {
			sprite.setVelocityX(Math.abs(sprite.getVelocityX()));
		}else if(sprite.getX() + sprite.getWidth() >= s.getWidth()) {      /// this check if it goes left and right off the screen 
			sprite.setVelocityX(-Math.abs(sprite.getVelocityX()));

		}
		
		
		
		if(sprite.getY() < 0 ) {
			sprite.setVelocityY(Math.abs(sprite.getVelocityY()));
		}else if(sprite.getY() + sprite.getHeight() >= s.getHeight()) {   // same thing but for top and bottom
			sprite.setVelocityY(-Math.abs(sprite.getVelocityY()));

		}
		
		sprite.update(timePassed);
		
	}
	
	
}
























