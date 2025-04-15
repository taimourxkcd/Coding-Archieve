package WriteFiles;

import java.io.*;
import java.lang.*;
import java.util.*;


public class work {

	private Formatter x;
	
	public void openFile() {
		
		try {
			x = new Formatter("Chinafile.txt");
			
		}
		catch(Exception e) {
			System.out.println("You have an error !!");
		}
	}
		
		public void addRecords() {
			x.format("%s%s%s","20 ","bucky ", "roberts");
		}
		
		public void closeFile() {
			x.close(); 
		} 
		
		
		
	
	}

