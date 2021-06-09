package Animation;

import java.awt.Image;
import java.util.ArrayList;

public class Begin {

	private ArrayList scenes; // eyes open one scene eyes closed other scene 
	private int sceneIndex;   // elements in the array list 
	private long movieTime;  // time of animation 
	private long totalTime; // total amount of time  if total > movie -> restart animation
	
	//CONSTRUCTOR
	public Begin() {
		scenes = new ArrayList();
		totalTime = 0;
		start();  // will start our animation 
	}

	// add scene to array list and set time for each scene 
	public synchronized void addScene(Image i, long t) {                                       // when useing threads only this one will run 

		totalTime += t;
		scenes.add(new OneScene(i,totalTime));  // We will make this class later on; 
	}
	
	// start animation from the beginning 
	public synchronized void start() {
		movieTime = 0;
		sceneIndex = 0;
		
	}
	
	// change scenes 
	public synchronized void update(long timepassed) {
		if(scenes.size()>1) {
			movieTime += timepassed;
			if(movieTime >= totalTime) {
				movieTime = 0;
				sceneIndex = 0;
			}
		
			while(movieTime > getScene(sceneIndex).endTime) {
				sceneIndex++;
			}
		}
	}
	
	//get animations current scene(aka image)

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

	/// PRIVATE INNER CLASS ///////////////
	private class OneScene{
		Image pic;
		long endTime;
		
		public OneScene(Image pic, long endTime) {
			this.pic =pic;
			this.endTime = endTime;
		}
	}



}






















