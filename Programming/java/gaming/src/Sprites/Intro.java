package Sprites;

import java.awt.Image;

public class Intro {

	private Animation a;
	private float x; // when you are wotking with pixels sometimes you do not want to  move an entire pixel
	private float y; 
	private float vx; // velocity of x and and y
	private float vy; 
	
	//CONSTUCTOR 
	public Intro(Animation a) {
		this.a = a;  
	}
	
	// change position 
	public void update(long timePassed) { // it will change its position based on the time that has passed 
		x += vx * timePassed;             //  
		y += vy * timePassed;             //  
		a.update(timePassed);              // determine where should be the image on your screen TOP LEFT, BOTTOM RIGHT ETC
		
	}
	
	// get the x postion 
	public float getX() {
		return x;
	}
	
	// get the x postion 
		public float getY() {
			return y;
		}
		
		
	// set sprite x positon 	
	public void setX(float x) {
		this.x = x;
	}
	
	// set sprite y positon 	
		public void setY(float y) {
			this.y = y;
		}

		// get sprite width
		public int getWidth() {	
			return a.getImage().getWidth(null); // gives you the return pixels of how tall your image is 
		} 
		
		// get sprite height
				public int getHeight() {
					return a.getImage().getHeight(null); // gives you the return pixels of how tall your image is 
				} 

		// get horizontal velocity 
				public float getVelocityX() {
					return vx;
				}

				// get veritcal velocity 
				public float getVelocityY() {
					return vy;
				}

		//set horizontal velocity
		public void setVelocityX(float vx) {
			this.vx = vx;
		}
		
		//set verical velocity
		public void setVelocityY(float vy) {
				this.vy = vy;
			}

		// get sprite / Image 
		public Image getImage() {
			return a.getImage();
		}
}



















































