package instantMessanger;

import java.io.*;
import java.net.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;


public class Server extends JFrame {

	private JTextField userText;
	private JTextArea chatWindow;
	private ObjectOutputStream output;
	private ObjectInputStream input;
	private ServerSocket server;
	private Socket connection;
	
	//constructor 
	public Server() {
		super("taimour messanger ");
		userText = new JTextField();
		userText.setEditable(false);
		userText.addActionListener(
				new ActionListener() {
					public void actionPerformed(ActionEvent event) {
						sendMessage(event.getActionCommand());
						userText.setText("");						
					}
				}
		);
		add(userText, BorderLayout.NORTH);
		chatWindow = new JTextArea();
		add(new JScrollPane(chatWindow));
		setSize(300,150);
		setVisible(true);
	}
	
	// set and run the server 
	public void startRunning() {
		try {
			server = new ServerSocket(6789,100);
			while(true) {
				try {
					// connect and have conversation 
					waitForConnection();
					setupStreams();
					whileChatting();
					
				}catch(EOFException eofException) {
					showMessage("\n server ended the connection !!");
				}finally {
					CloseCrap();
				}
			}
			
		}catch(IOException ioException) {
			ioException.printStackTrace();
		}
	}
	
	
	// wait for the connection and , then display the information
	
	private void waitForConnection() throws IOException{
		showMessage("waiting for the someone to connect ");
		connection = server.accept();
		showMessage("Now connected to " + connection.getInetAddress().getHostName());
		
	}
	
	// get the steam to show and recieve the data 
	
	private void setupStreams() throws IOException{
		
		output = new ObjectOutputStream(connection.getOutputStream());
		output.flush();
		input = new ObjectInputStream(connection.getInputStream());
		showMessage("\n Streams are now setup");
	} 
	
	// during the chatting conversation
	
	public void whileChatting() throws IOException{
		String message = "You are now connected ";
		sendMessage(message);
		ableToType(true);
	
		do{
			try {
				
				message = (String) input.readObject();
				showMessage("\n" + message);
				
			}catch(ClassNotFoundException classNotFoundException){
				showMessage("\n idk wtf user send !!!");
			}
			
			
			
		}while(!message.equals("CLIENT - END0"));
	}
	
	// close streams and sockets after you are done chatting 
	private void CloseCrap() {
		showMessage("\n Closing connection ");
		ableToType(false);
		
		try {
			
			output.close();
			input.close();
			connection.close();
			
		}catch(IOException ioException) {
			ioException.printStackTrace();
		}
	}

	// send message to the client 
	private void sendMessage(String message) {
		try {
			
			output.writeObject("SERVER" + message);
			output.flush();
			showMessage("\n SERVER -" + message);
		
			
		}catch(IOException ioException) {
			chatWindow.append("ERROR , DUDE I AM UNABLE TO SEND THE MESSAGE ");
		}
	}
	// updates the chat window 
	private void showMessage(final String text) {
		SwingUtilities.invokeLater(
				new Runnable() {
					public void run() {
						chatWindow.append(text);
					}
				}
				
				
				
				
		);
	}
	
	
	// let the user type the text into the box 
	private void ableToType(final boolean tof) {
		SwingUtilities.invokeLater(
				new Runnable() {
					public void run() {
						userText.setEditable(tof);
					}
				}
				
		);
	}
}




















































































