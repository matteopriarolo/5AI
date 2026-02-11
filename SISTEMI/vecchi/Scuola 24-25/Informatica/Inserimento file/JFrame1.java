import java.awt.*;
import javax.swing.*;

public class JFrame1 extends JFrame {
    JLabel label;
    
    JFrame1(String titolo, String testo, int larghezza, int altezza) {
        setVisible(true);
        setLayout(new BorderLayout());
        setTitle(titolo);
        setSize(larghezza, altezza);
        setDefaultCloseOperation(EXIT_ON_CLOSE);

        label = new JLabel(testo);
            label.setHorizontalAlignment(SwingConstants.CENTER);
        add(label, BorderLayout.PAGE_START);
        label.setVisible(true);
    }
    
}
