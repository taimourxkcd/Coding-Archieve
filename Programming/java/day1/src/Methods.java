import java.util.Scanner;

class Methods {
	public static void main(String args[]) {
		
	Scanner input = new Scanner(System.in);
	MethodsSlave SlaveObject = new MethodsSlave();
	
	System.out.println(" Enter Your name here ");
	String name = input.nextLine();
	
    SlaveObject.SimpleText(name);
	}

}
