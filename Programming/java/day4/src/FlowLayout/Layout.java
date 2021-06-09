package FlowLayout;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*; 

public class Layout extends JFrame {

	private JButton lb;
	private JButton cb;
	private JButton rb;
	
	private FlowLayout layout;
	private Container container;
	 
	public Layout() {
		super("title");
		
		layout = new FlowLayout();
		
		container =  getContentPane();
		setLayout(layout);

		// LEFT STUFF HERE 

		lb = new JButton("left");
		add(lb);
		
		lb.addActionListener(
				
				new ActionListener()
				{
					public void actionPerformed(ActionEvent event) {
					
						layout.setAlignment(FlowLayout.LEFT);
						layout.layoutContainer(container);
					}
					
				}
		);
		
		// CENTRE STUFF HERE 

		cb = new JButton("centre");
		add(cb);

		cb.addActionListener(
				
				new ActionListener()
				{
					public void actionPerformed(ActionEvent event) {
					
						layout.setAlignment(FlowLayout.CENTER);
						layout.layoutContainer(container);
					}
					
				}
		);
              // RIGHT STUFF HERE 


		rb = new JButton("right");
		add(rb);

rb.addActionListener(
		
		new ActionListener()
		{
			public void actionPerformed(ActionEvent event) {
			
				layout.setAlignment(FlowLayout.RIGHT);
				layout.layoutContainer(container);
			}
			
		}
);





		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		 
	}
	
}
