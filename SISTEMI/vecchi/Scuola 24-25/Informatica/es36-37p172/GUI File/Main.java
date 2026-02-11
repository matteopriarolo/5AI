
import java.awt.Color;
import java.io.*;
import javax.swing.*;

public class Main {
    public static void main(String[] args) throws Exception {
        JFrame frame = new JFrame("File");

        frame.setBounds(1000,100,300,200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(800, 600);
        frame.setLayout(null);
        
        JPanel input = new JPanel();
            input.setBounds(0,0,frame.getWidth(),100);
            input.setBackground(Color.yellow);
            frame.add(input);
        JPanel output = new JPanel();
        

        JLabel labelTitolo = new JLabel();
            labelTitolo.setLayout(null);

            labelTitolo.setBounds(0,0,100,100);
            labelTitolo.setText("nomeFile: ");

            input.add(labelTitolo);

        JTextField inputFile = new JTextField("Percorso del file");
            inputFile.setLayout(null);
            inputFile.setBounds(0,0,300,400);
            inputFile.setSize(500,200); 

            input.add(inputFile);

        JButton bottoneInvio = new JButton("invia");
            input.add(bottoneInvio);

            
        bottoneInvio.addActionListener(a -> {
            System.out.println(inputFile.getText());

            try {
                BufferedReader fin = new BufferedReader (new FileReader (inputFile.getText()));
                
            } catch (Exception e) {
                System.out.println("file non esistente");
            }
        });
        


        
        frame.setVisible(true);
        input.setVisible(true);
        output.setVisible(true);
        
    }
}
