package gaming;

//import javax.swing.*;
//import java.util.Random;


public class apple {

	public static void main(String[] args) {
		
		Thread t1 = new Thread(new threads("one"));
		Thread t2 = new Thread(new threads("two"));
		Thread t3 = new Thread(new threads("three"));

		t1.start();
		t2.start();
		t3.start();

		
		
	}

}
