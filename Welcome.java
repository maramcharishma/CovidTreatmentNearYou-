import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JButton;
import java.awt.Font;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class Welcome{

	private JFrame frame;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Welcome window = new Welcome();
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
	public Welcome() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 980, 601);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JButton btnNewButton = new JButton("COVID PATIENET");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
			}
		});
		btnNewButton.setFont(new Font("Tahoma", Font.PLAIN, 18));
		btnNewButton.setBounds(195, 246, 211, 53);
		frame.getContentPane().add(btnNewButton);
		
		JButton btnOtherDiseases = new JButton("OTHER DISEASES");
		btnOtherDiseases.setFont(new Font("Tahoma", Font.PLAIN, 18));
		btnOtherDiseases.setBounds(501, 246, 211, 53);
		frame.getContentPane().add(btnOtherDiseases);
		
		JButton btnUpdateDoctorsInfo = new JButton("UPDATE DOCTORS INFO");
		btnUpdateDoctorsInfo.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				new Admin_Others();
			}
		});
		btnUpdateDoctorsInfo.setFont(new Font("Tahoma", Font.PLAIN, 18));
		btnUpdateDoctorsInfo.setBounds(195, 354, 298, 53);
		frame.getContentPane().add(btnUpdateDoctorsInfo);
		
		JButton btnUpdateCovidHospitals = new JButton("UPDATE COVID HOSPITALS INFO");
		btnUpdateCovidHospitals.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				new Admin_covid();
			}
		});
		btnUpdateCovidHospitals.setFont(new Font("Tahoma", Font.PLAIN, 18));
		btnUpdateCovidHospitals.setBounds(195, 466, 394, 53);
		frame.getContentPane().add(btnUpdateCovidHospitals);
		
		JLabel lblNewLabel = new JLabel("WELCOME, HOPE YOU ARE DOING GOOD!");
		lblNewLabel.setFont(new Font("Tahoma", Font.PLAIN, 18));
		lblNewLabel.setBounds(195, 82, 498, 86);
		frame.getContentPane().add(lblNewLabel);
	}

}
