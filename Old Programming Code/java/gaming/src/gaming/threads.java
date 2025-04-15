package gaming;

import java.util.Random;

public class threads implements Runnable {   //Runnable takes a run method 

	String name;
	int time;
	Random r = new Random();
	
	public threads(String s) {
		name = s;
		time = r.nextInt(999);
		
	}
	
	public void run() {
		try {
			System.out.printf("%s is sleeping for %d \n", name , time);
			Thread.sleep(time);
			System.out.printf("%s is done \n", name);
			
		}catch(Exception e) {
			
		}
	}
	 
}
