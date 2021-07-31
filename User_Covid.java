import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JLabel;
import java.awt.Font;
import javax.swing.JTextField;

public class User_Covid {

	private JFrame frame;
	/**
	 * @wbp.nonvisual location=73,4
	 */
	private final JLabel lblCovidUser = new JLabel("Covid User");
	private JTextField textField;
	private JTextField textField_1;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					User_Covid window = new User_Covid();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public User_Covid() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 966, 672);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JLabel txtname = new JLabel("Enter name: ");
		txtname.setFont(new Font("Tahoma", Font.PLAIN, 18));
		txtname.setBounds(41, 36, 193, 40);
		frame.getContentPane().add(txtname);
		
		textField = new JTextField();
		textField.setBounds(41, 85, 243, 48);
		frame.getContentPane().add(textField);
		textField.setColumns(10);
		
		JLabel txtplace = new JLabel("Enter place: ");
		txtplace.setFont(new Font("Tahoma", Font.PLAIN, 18));
		txtplace.setBounds(41, 169, 193, 40);
		frame.getContentPane().add(txtplace);
		
		textField_1 = new JTextField();
		textField_1.setColumns(10);
		textField_1.setBounds(41, 219, 243, 48);
		frame.getContentPane().add(textField_1);
	}
}
