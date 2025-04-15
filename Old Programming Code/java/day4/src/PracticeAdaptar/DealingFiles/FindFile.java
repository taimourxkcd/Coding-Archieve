package DealingFiles;

import java.io.File;

public class FindFile {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		File x = new File("C:\\programming\\java\\test.java");
		
		if(x.exists())
			System.out.println("Yup file is present ");
		else
			System.out.println("Nopi ");
	}

}
