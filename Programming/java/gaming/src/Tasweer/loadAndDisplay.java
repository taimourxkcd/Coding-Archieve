package Tasweer;

import java.applet.Applet;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Image;
import java.awt.Toolkit;
import java.net.*;

// I STOPPED DOING THIS PRROGRAM BECAUSE IT WAS JUST TOO MUCH WORK AND WAS NOT WORKING 
// https://www.youtube.com/watch?v=oXmUp4ZTW2Q 
// Can contiune to learn from this website if you want 

public class loadAndDisplay extends Applet {

	public void paint(Graphics g) {
		
		if(spiral == null)
			spiral = getImage("spiral.png");
		
	}

	private Image spiral = null;
	
	public void paintComponents(Graphics g) {
		
		Graphics g2 = (Graphics2D)g;
		g2.drawImage(spiral, 25, 50, 25, 25, null);
	}
	
	public Image getImage(String path) {
		Image tempImage = null;
		
		try {
			
			URL imageURL = loadAndDisplay.class.getResource(path);
			tempImage = Toolkit.getDefaultToolkit().getImage(imageURL);
		}catch(Exception e) {
			
		//	System.out.println("An error occured - +"  e.getMessage()); 
		}
		return tempImage;
	}
}
