import java.io.*;
import java.util.*;

// chiedere carattere separatore
// array list una possizione una parola
// stampa dell arrayList 


public class ProvaPersona {
    public static void main (String[] args) {
        System.out.println("------------------------");
        System.out.println("    Hello World!");
        System.out.println("------------------------"); // messaggio di benvenuto

        try {  
            File crea = new File("..\\es0104 file txt");            crea.mkdir(); // crea la directory se non esiste già
            
            String nomeF = "..\\es0104 file txt\\MioFile.txt"; // specifica il percorso del file da leggere. ..\\ indica la directory genitore della directory corrente.
    
            File f = new File(nomeF); // gestione del file
            
            
            if(!f.exists()) {
                f.createNewFile();
                System.out.println("File Creato!");
    
            }
    
            BufferedReader tastiera = new BufferedReader(new InputStreamReader(System.in));
            BufferedReader bf = new BufferedReader(new FileReader(nomeF));
    
            System.out.print("Inserisci il carattere separatore: ");
            String separatore = tastiera.readLine();
    
            
            ArrayList<String> elencoParoleEstratte = new ArrayList<>();
            ArrayList<Persona> elencoPersone = new ArrayList<>();
            String s = " "; // stringa temporanea
    
            do {
                s = bf.readLine();
                if (s == null)
                    break;
                
                System.out.println("contenuto: " + s);
    
                String parole[] = s.split(separatore); // parole di una linea
    
                for (String x : parole) {
                    elencoParoleEstratte.add(x);
                }
                
            } while(s != null);
    
            System.out.println("l' elenco delle parole estratte: " + elencoParoleEstratte);


            for (int i = 0; i < elencoParoleEstratte.size(); i+=3) {
                Persona p = new Persona();
                p.setNome(elencoParoleEstratte.get(i));
                p.setCognome(elencoParoleEstratte.get(i+1));
                p.setEta(Integer.parseInt(elencoParoleEstratte.get(i+2)));
                elencoPersone.add(p);
            }
            
            System.out.println("l' elenco delle persone: " + elencoPersone);

            
        } catch (Exception e) {
            e.printStackTrace();
        }

    }
}