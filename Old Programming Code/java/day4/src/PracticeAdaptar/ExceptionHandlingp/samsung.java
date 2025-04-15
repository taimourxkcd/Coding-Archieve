package ExceptionHandlingp;

import java.util.*;


public class samsung {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int x = 1;
		
	
		do {
			Scanner input = new Scanner(System.in);
			
			try {
				System.out.println("Please enter the number 1");
				int n1 = input.nextInt();
				
				System.out.println("Please enter the number 2");
				int n2 = input.nextInt();
				
				int sum = n1/n2;
				System.out.printf("ans = %d ", sum );
				
				x=2;
				
			}
			catch(Exception e) {
				System.out.println("An error has occured during the processing please try agian ");
				
			}
			
		}while(x == 1);

	}

}
