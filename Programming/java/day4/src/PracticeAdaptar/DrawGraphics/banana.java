package DrawGraphics;

import javax.swing.*;

public class banana {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		JFrame f = new JFrame("Title");
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		lemon l = new lemon();
		f.add(l);
		
		f.setSize(400,250);
	
		f.setVisible(true);
	}

}
