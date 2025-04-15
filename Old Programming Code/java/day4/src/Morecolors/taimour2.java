package Morecolors;

import javax.swing.*;
import java.awt.*;

public class taimour2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		JFrame f = new JFrame("Title ");
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		color2 c = new color2();
		
		c.setBackground(Color.WHITE);
		
		f.add(c);
		f.setSize(500,270);
		f.setVisible(true);
		
 
	}

}
