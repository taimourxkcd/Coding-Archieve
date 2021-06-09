package Combo;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class gui2 extends JFrame{

	private JComboBox box;
	private JLabel picture;
	
	private static String[] filename = {"a.png", "b.png"};
	private Icon[] pics = { new ImageIcon(getClass().getResource(filename[0])) , new ImageIcon(getClass().getResource(filename[1]))    }; 
	
	public gui2(){
		
		super("title");
		setLayout(new FlowLayout());
		
		box = new JComboBox(filename);
		
		box.addItemListener(
			
			new ItemListener() {
				
				public void ItemStateChanged(ItemEvent event) {
			
					if(event.getStateChange() == ItemEvent.SELECTED) {
						if(event.getStateChange() == ItemEvent.SELECTED)
							picture.setIcon(pics[box.getSelectedIndex()]);
					}
					
				}
				
			}
			
		);
		
		
	}
}
