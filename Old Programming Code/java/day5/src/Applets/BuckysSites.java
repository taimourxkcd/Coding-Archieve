package Applets;

import java.net.*;
import java.util.*;
import java.awt.*;
import java.applet.*; 
import javax.swing.*;
import javax.swing.event.*;



	 public class BuckysSites extends JApplet {
		
		 private HashMap<String, URL> websiteinfo;
		 private ArrayList<String> titles;
		 private JList mainlist;
		 
		 // init method 
		 
		 public void init() {
			 websiteinfo = new HashMap<String, URL>();
			 titles = new ArrayList<String>();
			 
			 grabHTMLInfo();
			 add(new JLabel("What website do you want to visit  "), BorderLayout.NORTH); 
			 mainlist = new JList(titles.toArray());
			 
			 mainlist.addListSelectionListener(
					 
					 new ListSelectionListener() {
						 
						 public void valueChanged(ListSelectionEvent event) {
							 
							 Object object = mainlist.getSelectedValue();
							 URL newDocument = websiteinfo.get(object);
							 
							 AppletContext browser = getAppletContext(); // browser = chrome
							 browser.showDocument(newDocument);
						 }	 
					 }			 
			 );
			 
			add(new JScrollPane(mainlist), BorderLayout.CENTER); 
		}
			  	
			 //get website information
			 
			 private void grabHTMLInfo() {
				String title;
				String address;
				URL url;
				int counter = 0;
				
				title =  getParameter("title" + counter) ;
				
				
				while(title != null) {
					
					address  = getParameter("address" + counter);
					
					try {
						
						 url = new URL(address);
						 websiteinfo.put(title, url);
						 titles.add(title);
						 
						
					}catch(MalformedURLException urlException) {
						urlException.printStackTrace();
					}
					++counter;
					title = getParameter("title" + counter);
				} 			 
			 
		 } 
		 
		
	} 
		 

	

