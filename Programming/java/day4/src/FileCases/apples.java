package FileCases;

import java.io.File;


public class apples {

	public static void main(String[] args) {
	
		File x = new File("C:\\programming\\udsfbkj.txt");

		if(x.exists())
			System.out.println(x.getName() + " Exists ");
		else
			System.out.println(x.getName() + " does not  Exists ");
	}
	

}
