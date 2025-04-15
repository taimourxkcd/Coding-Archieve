package FlowLayoutp;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Purple extends JFrame {

	private JButton lb;
	private JButton cb;
	private JButton rb;
	
	private FlowLayout layout;
	private Container container;
	
	public Purple() {
		super("Title");
		
		layout = new FlowLayout();
		
		container = getContentPane();
		
		setLayout(layout);
		
		// Left button stuff is here 
		lb = new JButton("left");
		add(lb);
		
		lb.addActionListener(
	
				new ActionListener() {
					
					public void actionPerformed(ActionEvent event) {
						layout.setAlignment(FlowLayout.LEFT);
						layout.layoutContainer(container);
					}
					
				}
				
				
				
			
		);
		
		// center stuff is here 
		cb = new JButton("center");
		add(cb);
		
		cb.addActionListener(
	
				new ActionListener() {
					
					public void actionPerformed(ActionEvent event) {
						layout.setAlignment(FlowLayout.CENTER);
						layout.layoutContainer(container);
					}
					
				}
				
				
				
			
		);
		//right stuff is here 
		rb = new JButton("right yahoo");
		add(rb);
		
		rb.addActionListener(
	
				new ActionListener() {
					
					public void actionPerformed(ActionEvent event) {
						layout.setAlignment(FlowLayout.RIGHT);
						layout.layoutContainer(container);
					}
					
				}
				
				
				
			
		);
	}
}
