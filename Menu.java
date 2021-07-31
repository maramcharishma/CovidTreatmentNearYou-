import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

import java.awt.Font;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class Menu {
	private JFrame frame;
	private JTextField txtID;
	private JTextField txtName;
	private JTextField txtPlace;
	private JTextField txtAddress;
	private JTextField txtFee;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Menu window = new Menu();
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
	public void Menu() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 1160, 634);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Welcome, Hope you are doing good");
		lblNewLabel.setFont(new Font("Tahoma", Font.PLAIN, 20));
		lblNewLabel.setBounds(257, 48, 554, 107);
		frame.getContentPane().add(lblNewLabel);
		
		JButton btnNewButton = new JButton("COVID PATIENT");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				
			}
		});
		btnNewButton.setFont(new Font("Tahoma", Font.PLAIN, 18));
		btnNewButton.setBounds(137, 219, 303, 58);
		frame.getContentPane().add(btnNewButton);
		
		JButton btnOtherDiseases = new JButton("OTHER DISEASES");
		btnOtherDiseases.setFont(new Font("Tahoma", Font.PLAIN, 18));
		btnOtherDiseases.setBounds(610, 219, 303, 58);
		frame.getContentPane().add(btnOtherDiseases);
		
		JButton btnUpdateDoctorsInfo = new JButton("UPDATE DOCTORS INFO");
		btnUpdateDoctorsInfo.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
		});
		btnUpdateDoctorsInfo.setFont(new Font("Tahoma", Font.PLAIN, 18));
		btnUpdateDoctorsInfo.setBounds(137, 357, 303, 58);
		frame.getContentPane().add(btnUpdateDoctorsInfo);
		
		JButton btnUpdateCovidInfo = new JButton("UPDATE COVID HOSPITALS INFO");
		btnUpdateCovidInfo.setFont(new Font("Tahoma", Font.PLAIN, 18));
		btnUpdateCovidInfo.setBounds(610, 357, 342, 58);
		frame.getContentPane().add(btnUpdateCovidInfo);
	}

}
