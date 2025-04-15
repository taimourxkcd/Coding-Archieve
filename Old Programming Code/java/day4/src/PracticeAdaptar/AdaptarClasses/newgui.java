package AdaptarClasses;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class newgui extends JFrame{
	
	private String details;
	private JLabel statusbar;
	
	public newgui() {
		
		super("title");
		
		statusbar = new JLabel("This is default");
		add(statusbar, BorderLayout.SOUTH);
		addMouseListener(new MouseClass());
		
		
	}
	
	private class MouseClass extends MouseAdapter{
		
	
		public void MouseClicked(MouseEvent event) {
			
			details = String.format(" You have clicked %d times ", event.getClickCount());
			
			if(event.isMetaDown())
				details += "with right mouse button";
			else if(event.isAltDown())
				details += "either centre mouse button ";
			else
				details += "with left mouse button ";
		
			statusbar.setText(details);
		}
		
	}

}
