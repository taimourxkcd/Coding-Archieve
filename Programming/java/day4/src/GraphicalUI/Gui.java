package GraphicalUI;

import java.awt.FlowLayout;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.JFrame;
import javax.swing.JButton;
import javax.swing.Icon;
import javax.swing.ImageIcon;
import javax.swing.JOptionPane;



public class Gui extends JFrame{

	private JButton reg;
	private JButton custom;
	
	public Gui(){
		
		super("The Title");
		setLayout(new FlowLayout());
		
		reg = new JButton("reg Button");
		add(reg);
		
		Icon b = new ImageIcon(getClass().getResource("b.png"));
		Icon a = new ImageIcon(getClass().getResource("a.png"));
		
		custom = new JButton("Custom", b);
		custom.setRolloverIcon(a);
		add(custom);
			
		HandlerClass handler = new HandlerClass();
		reg.addActionListener(handler);
		custom.addActionListener(handler);
		
	}
	
	private class HandlerClass implements ActionListener {
		
		public void actionPerformed(ActionEvent event) {
			JOptionPane.showMessageDialog(null, String.format("%s", event.getActionCommand()));
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
}
