package Animation;

import java.awt.*;
import javax.swing.JFrame;

public class Screen {

	private GraphicsDevice vc;  // gives an interface to the video cards , by using vc variable we can access GraphicsCard or video card
	
	public Screen() {
		// in order use vc variable, we need to go through the graphics environment
		GraphicsEnvironment env = GraphicsEnvironment.getLocalGraphicsEnvironment();
		vc = env.getDefaultScreenDevice(); // we now have access to our computer screen 
		
		
	}
	
	public void setFullScreen(DisplayMode dm, JFrame window) {
		// building a window and convert it into full screen 
		window.setUndecorated(true); // we donot want anu title bar scroll bar etc on top side or bootiin
		window.setResizable(false);  // full screen will be full screen you will not be able to change the size
		vc.setFullScreenWindow(window); // whatever is passed as the object will be set to full screen 
		
		if(dm != null && vc.isDisplayChangeSupported()) // check if it can even do it or not 
			
			try {
				vc.setDisplayMode(dm);  // resolution or display mode 
			}catch(Exception ex) {}
	}
	
	public Window getFullScreenWindow() {
		return vc.getFullScreenWindow(); 
	}
	
	public void restoreScreen() { // will restore the screen back to normal 
		Window w = vc.getFullScreenWindow();
		
		if(w != null) {
			w.dispose(); // garbe collection type thing || always a good practice to do so 
		}
		
		vc.setFullScreenWindow(null); // make sure whatever you have is not in the full screen 
		   
	}
	
	 
}







