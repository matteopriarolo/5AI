import java.awt.event.*;
import java.io.*;
import javax.swing.*;
class Main{
    public static void main(String[] args) throws IOException {

        JFrame finestra = new JFrame();
            finestra.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        JPanel inserimentoBox = new JPanel();
        JTextField input = new JTextField(20);
        JButton bottone = new JButton("Invia");
        JTextPane testo = new JTextPane();
        JTextPane elenco = new JTextPane();

        inserimentoBox.add(input);
        inserimentoBox.add(bottone);
        finestra.add(inserimentoBox);
        finestra.setTitle("Cerca file");
        finestra.setLayout(new BoxLayout(finestra.getContentPane(), BoxLayout.Y_AXIS));
        
        bottone.addActionListener((ActionListener) new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                testo.setVisible(true);

                String percorso = input.getText();
                File file = new File(percorso);
        
                String testoTxt = percorso ;
                
                if (file.exists()) {
                    if (file.isDirectory()) {
                        testoTxt += "\nè una cartella";
                    } else {
                        testoTxt += "\nè un file";
                    }

                    for(File f : file.listFiles()) {
                        elenco.setText(elenco.getText() + f.getName() + "\n");
                        System.out.println(f.getName());
                    }
                    elenco.setVisible(true);
                    inserimentoBox.add(testo);
                    inserimentoBox.add(elenco);
                    
                } else {
                    testoTxt += "\nnon esiste il file";
                }
                
                testo.setText(testoTxt);

                
            }
        });
        

        finestra.setSize(600,600);
        finestra.setVisible(true);
    
    }
}
