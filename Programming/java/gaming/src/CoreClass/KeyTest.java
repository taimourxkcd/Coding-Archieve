package CoreClass;

import java.awt.*;
import java.awt.image.BufferStrategy;
import java.awt.event.*;
import javax.swing.JFrame;
import javax.swing.*;


public class KeyTest extends Core implements KeyListener {

	public static void main(String[] args) {
		new KeyTest().run();
	}

	public String mess = "";
	
	// init also call init from superclass
	public void init() {
		super.init();
		Window w = s.getFullScreenWindow();
		w.setFocusTraversalKeysEnabled(false); // makes buttons like TAB buttons to act like normal buttons
		w.addKeyListener(this);                // it makes our window the keyListener
		mess = "press escape to exit";
	}
	
	// keyPressed
	public void keyPressed(KeyEvent e) {
		int keyCode = e.getKeyCode();     // every key on your keyboard has a key code
		if(keyCode == KeyEvent.VK_ESCAPE ) {
			stop();
		}else {
			mess = "pressed : " + KeyEvent.getKeyText(keyCode);
			e.consume();                                         // 
		}
	}
	
	//keyReleased
	public void keyReleased(KeyEvent e) {
		int keyCode = e.getKeyCode();
		mess = "Released : " + KeyEvent.getKeyText(keyCode);
		e.consume();
	}
	
	//last method from the interface 
	public void keyTyped(KeyEvent e) {
		e.consume();
	}
	
	// draw 
	public synchronized void draw(Graphics2D g) {
		Window w = s.getFullScreenWindow();
		g.setColor(w.getBackground());
		g.fillRect(0, 0, s.getWidth(),s.getHeight() );
		g.setColor(w.getForeground());
		g.drawString(mess, 30,30);
	}
}

























