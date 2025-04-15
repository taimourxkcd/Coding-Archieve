package Applets;

import java.awt.*;
import javax.swing.*;

// THIS works perfectly but on older version of JAVA 


public class initMethod extends JApplet {

	private double sum;
	
	public void init() {
		String fn = JOptionPane.showInputDialog("Enter the first number ");
		String sn = JOptionPane.showInputDialog("Enter the second number ");
		
		double n1= Double.parseDouble(fn);
		double n2= Double.parseDouble(fn);
		
		sum = n1 + n2;
		
	 	
		
	}
	
	public void paint(Graphics g) {
		super.paint(g);
		g.drawString("The sum is " + sum , 25 , 30);
	}
}
