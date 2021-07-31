import java.awt.EventQueue;
import java.sql.*;
import javax.swing.JFrame;
import javax.swing.JLabel;
import java.awt.Font;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import javax.swing.JTextField;
import java.sql
.*;
import javax.swing.JPanel;public class User_Others {

	private JFrame frame;
	/**
	 * @wbp.nonvisual location=73,4
	 */
	private final JLabel lblUserOthers = new JLabel("User Others");
	private JTextField textField;
	private JTextField textField_1;
	private JTextField textField_2;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					User_Others window = new User_Others();
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
	Connection con;
	PreparedStatement pst;
	ResultSet rs;
	
	private void OracleJavaTest() {
		String dburl = "jdbc:oracle:thin:@218.248.0.7:1521:rdbms";
		String us = "it19737008";
		String pas = "vasavi";
		try {
			Class.forName("oracle.jdbc.driver.OracleDriver");
			con = DriverManager.getConnection(dburl,us,pas);
			System.out.println("Server Connected");
		}
		catch (SQLException connectException) {
			System.out.println(connectException.getMessage());
			System.out.println(connectException.getSQLState());
			System.out.println(connectException.getErrorCode());
			System.exit(1);
			}
			catch (Exception e)
			{
			System.err.println("Unable to find and load driver");
			System.exit(1);
			}
	}
	public void table_load()
	{
		try
		{
			pst=con.prepareStatement("Select * from PATIENT_DB");
			rs=pst.executeQuery();
			table.setModel(DbUtils.resultSetToTableModel(rs));
		}
		catch (SQLException e)
		{
			e.printStackTrace();
		}
	}
	
	public User_Others() {
		initialize();
		OracleJavaTest();
		table_load();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 987, 655);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JLabel txtname = new JLabel("Enter Name:");
		txtname.setFont(new Font("Tahoma", Font.PLAIN, 18));
		txtname.setBounds(36, 34, 210, 47);
		frame.getContentPane().add(txtname);
		
		textField = new JTextField();
		textField.setBounds(36, 92, 302, 47);
		frame.getContentPane().add(textField);
		textField.setColumns(10);
		
		JLabel txtspecialization = new JLabel("Enter specialization:");
		txtspecialization.setFont(new Font("Tahoma", Font.PLAIN, 18));
		txtspecialization.setBounds(36, 168, 210, 47);
		frame.getContentPane().add(txtspecialization);
		
		textField_1 = new JTextField();
		textField_1.setColumns(10);
		textField_1.setBounds(36, 225, 302, 47);
		frame.getContentPane().add(textField_1);
		
		JLabel txtplace = new JLabel("Enter Place:");
		txtplace.setFont(new Font("Tahoma", Font.PLAIN, 18));
		txtplace.setBounds(36, 308, 210, 47);
		frame.getContentPane().add(txtplace);
		
		textField_2 = new JTextField();
		textField_2.setColumns(10);
		textField_2.setBounds(36, 365, 302, 47);
		frame.getContentPane().add(textField_2);
		
		JPanel panel = new JPanel();
		panel.setBounds(389, 35, 552, 558);
		frame.getContentPane().add(panel);
		txtspecialization = new JTextField();
		txtpid.addKeyListener(new KeyAdapter() {
			@Override
			public void keyReleased(KeyEvent e) {
				
				
				try {
					String pid=txtpid.getText();
					pst=con.prepareStatement("Select pname,age,aadhar_no,covidrpt from PATIENT_DB WHERE pid=?");
					pst.setString(1, pid);
					ResultSet rs=pst.executeQuery();
					if(rs.next()==true)
					{
						String pname=rs.getString(1);
						String age=rs.getString(2);
						String aadhar_no=rs.getString(3);
						String covidrpt=rs.getString(4);
						
						txtname.setText(pname);
						txtage.setText(age);
						txtadnumber.setText(aadhar_no);
						txtreport.setText(covidrpt);	
					}
					
					else
					{
						JOptionPane.showMessageDialog(null, "No such ID exists");
						txtname.setText("");
						txtage.setText("");
						txtadnumber.setText("");
						txtreport.setText("");
						
					}
				} catch (SQLException e1) {
					// TODO Auto-generated catch block
					e1.printStackTrace();
				}
		
		
	}
}
