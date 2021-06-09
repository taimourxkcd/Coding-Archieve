package instantMessanger;

import java.io.*;
import java.net.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;


public class Client extends JFrame {

	private JTextField userText;
	private JTextArea chatWindow;
	private ObjectOutputStream output;
	private ObjectInputStream input;
	private String message = "";
	private String serverIP;
	private Socket connection;

	// conmstructor 
	public Client(String host) {
		super("Client herer !!! buddy");
		serverIP = host;
		userText = new JTexrtField();
		userText.setEditable(false);
		userText.addActionListener(
				new ActionListener() {
					public void actionPerformed(ActionEvent event) {
						sendMessage(event.getActionCommand());
						userText.setText("");
					}
				}
				
		);
		add(userText , BorderLayout.NORTH);
		chatWindow = new JTextArea();
		
	}
	

	
	
	
}























