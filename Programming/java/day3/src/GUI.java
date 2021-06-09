import java.awt.FlowLayout;
import javax.swing.JFrame;
import javax.swing.JLabel;


public class GUI extends JFrame{
	 
	private JLabel item1;
	
	public GUI() {
		super("The title bar");
		setLayout(new FlowLayout());
		
		item1 = new JLabel("this is a sentence ");
		
		item1.setToolTipText(" This thing is gonna show up on the hover ");
		add(item1);
		
	}
	
}
