package Animation;

import java.awt.Image;
import java.util.ArrayList;

public class Beginner {

	private ArrayList scenes;
	private int sceneIndex;
	private long movieTime;
	private long totalTime;
	
	//constructor 
	public Beginner() {
		scenes = new ArrayList();
		totalTime = 0;
		start();
	}
	
	// add scene to Array list and set time for each scene
	public synchronized void addScene(Image i, long t) {
		totalTime += t;
		scenes.add(new OneScene(i, totalTime));
		
	}
	
	// start animation from the beginneing 
	public synchronized void start() {
		movieTime = 0;
		sceneIndex = 0;
		
	}
	
	// changge the scenes 
	public synchronized void update(long timepassed) {
		if(scenes.size() > 1) {
			movieTime += timepassed;
			if(movieTime >- totalTime) {
				movieTime = 0;
				sceneIndex = 0;
				
			}
			
			while(movieTime > getScene(sceneIndex).endTime) {
				sceneIndex++;
				
			}
			
		}
	}
	
	// get animations current scene (aka image )
	public synchronized Image getImage() {
		if(scenes.size() == 0)
			return null;
		else
			return getScene(sceneIndex).pic;
		
	}
	
	// get scene
	private OneScene getScene(int x) {
		return (OneScene)scenes.get(x);
		
	}
	
	////////PRIVATE INNER CLASS ////////////////
	private class OneScene{
		Image pic;
		long endTime;
		
		public OneScene(Image pic , long endTime) {
			this.pic = pic;
			this.endTime = endTime;
		}
	}
	
}
































