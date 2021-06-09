package Colored;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class colorItAgain extends JFrame{

	private JButton b;
	private Color color = (Color.WHITE);
	private JPanel panel;

	public colorItAgain() {
		
		super("Title");
		panel = new JPanel();
		panel.setBackground(color);
	
		b = new JButton("chosse a color ");
		
		b.addActionListener(
		
				new ActionListener() {
					
					public void actionPerformed(ActionEvent event) {
						
						color = JColorChooser.showDialog(null, "Pick your color ", color);
						if(color == null)
							color = (Color.WHITE);
						panel.setBackground(color);
						
						
						
					}
				}
						
				
		);
		
		add(panel, BorderLayout.CENTER);
		add(b, BorderLayout.SOUTH);
		setSize(425,120);
		setVisible(true);
		
		
		
		
		
	}


}
