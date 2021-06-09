package CoreClass;

import java.awt.*;
import java.awt.image.BufferStrategy;
import java.awt.event.*;
import javax.swing.JFrame;
import javax.swing.*;

public class MouseInput extends Core implements KeyListener, MouseMotionListener, MouseListener, MouseWheelListener {

	public static void main(String[] args) {
		new MouseInput().run();
		
		
	}

	private String mess = "";
	
	// init calles super init
	public void init() {
		super.init();
		Window w = s.getFullScreenWindow();
		w.addMouseListener(this);
		w.addMouseMotionListener(this);
		w.addMouseWheelListener(this);
		w.addKeyListener(this);
	}
	
	// draw
	public synchronized void draw(Graphics2D g) {
		Window w = s.getFullScreenWindow();
		g.setColor(w.getBackground());
		g.fillRect(0, 0, s.getWidth(), s.getHeight());
		g.setColor(w.getForeground());
		g.drawString(mess,40,50);
		
	}
	// mouse listener interface 
	public void mousePressed(MouseEvent e) {
		mess = "you pressed down the mouse";
		
	}
	public void mouseReleased(MouseEvent e) {
		mess = "you released down the mouse";

	}
	
	public void mouseClicked(MouseEvent e) {}
	public void mouseEntered(MouseEvent e) {}
	public void mouseExited(MouseEvent e) {}
	
	// mouse motion interfacd
	public void mouseDragged(MouseEvent e) {
		mess = " You are dragging the mouse ";
		
	}
	
	public void mouseMoved(MouseEvent e) {
		mess = "you are moving the mouse ";
	}
	
	// wheel interface 
	public void mouseWheelMoved(MouseWheelEvent e) {
		mess = "moving the mouse wheel";
		
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


}






























