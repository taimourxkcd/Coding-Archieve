package FlowLayoutp;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;


public class Blues extends JFrame {

	private JButton lb;
	private JButton cb;
	private JButton rb;
	
	private FlowLayout layout;
	private Container container;
	
	public Blues() {
		super("title");
		
		layout = new FlowLayout();
		
		container = getContentPane();
		setLayout(layout);
		
		// LEFT STUFF HERE 
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
		
		// CENTRE BUTTON STUFF IS HERE 
		
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

		rb = new JButton("right");
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
