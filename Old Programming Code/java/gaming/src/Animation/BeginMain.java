package Animation;

import java.awt.*;
import javax.swing.JFrame;
import javax.swing.ImageIcon;
 

public class BeginMain{

	public static void main(String[] args) {
		DisplayMode displayMode = new DisplayMode(800,600,16,DisplayMode.REFRESH_RATE_UNKNOWN);
		BeginMain bm = new BeginMain();
		bm.run(displayMode);

	}
	
	private Screen screen;
	private Image bg;
	private Begin a;          // Animation class in case of bucky tutorials
	
	
	// loads pics from computer to java and adds scene 
	public void loadPics() {
	
		bg = new ImageIcon("C:\\Users\\Abdul Basit\\eclipse-workspace\\gaming\\back.png").getImage();
		Image face1 = new ImageIcon("C:\\Users\\Abdul Basit\\eclipse-workspace\\gaming\\smile.png").getImage();
		Image face2 = new ImageIcon("C:\\Users\\Abdul Basit\\eclipse-workspace\\gaming\\sad.png").getImage();
		a= new Begin();   /// ANIMATION CLASS IN CASE OF BUCKY TUTORIALS 
		a.addScene(face1, 250);
		a.addScene(face2, 250);
	}
	
	// main engin to run
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

	// main movie loop 
	public void movieLoop() {
		long StartingTime = System.currentTimeMillis(); // Now we have a starting time 
		long cumTime = StartingTime ;
		
		while(cumTime - StartingTime < 5000) {
			long timePassed = System.currentTimeMillis() - cumTime; 
			cumTime += timePassed;
			a.update(timePassed);
			
			Graphics g = screen.getFullScreenWindow().getGraphics();
			draw(g);
			g.dispose();
			
			try {
				
				Thread.sleep(20);
			}catch(Exception ex) {}
		}
		
	}
	
	// draw methoid 
	public void draw(Graphics g) {
		g.drawImage(bg , 0 ,0, null);
		g.drawImage(a.getImage(), 0,0,null);
	}
	
	
	
	
}





































