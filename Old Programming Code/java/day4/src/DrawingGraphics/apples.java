package DrawingGraphics;

import javax.swing.*;

public class apples {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		JFrame f = new JFrame("Title ");
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		peach p = new peach();
		f.add(p);
		f.setSize(400, 250);
		f.setVisible(true); 
	}

}
