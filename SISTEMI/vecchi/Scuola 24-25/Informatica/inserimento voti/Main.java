import java.awt.*;
import javax.swing.*;
import java.util.ArrayList;

class Main {
    public static void main(String[] args) {
        ArrayList<Voti> v = new ArrayList();  
        
        JFrame frame = new JFrame("Inserimento voti");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 300);


        frame.setLayout(new BoxLayout(frame.getContentPane(), BoxLayout.Y_AXIS));

        JPanel p1 = new JPanel(new FlowLayout(FlowLayout.CENTER));
            JLabel label = new JLabel("Inserisci il nome: ");
            JTextField inNome = new JTextField(20);
            p1.add(label);
            p1.add(inNome);

        JPanel p2 = new JPanel(new FlowLayout(FlowLayout.CENTER));
            JLabel l = new JLabel("Inserisci il cognome: ");
            JTextField inCognome = new JTextField(20);
            p2.add(l);
            p2.add(inCognome);

        JPanel p3 = new JPanel(new FlowLayout(FlowLayout.CENTER));
            JLabel l2 = new JLabel("Inserisci i voti: ");
            JComboBox<Integer> inVoti = new JComboBox<>();
            for(int i = 1; i < 11; i++) { inVoti.addItem(i); } // aggiunta dei voti
            
            p3.add(l2);
            p3.add(inVoti);
            
        JPanel pButtonOK = new JPanel(new FlowLayout(FlowLayout.LEFT));
            JButton b = new JButton("Ok");

            

            pButtonOK.add(b);


        frame.add(p1);
        frame.add(p2);
        frame.add(p3);
        frame.add(pButtonOK);

        frame.setVisible(true);



    }
}