import java.io.*;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) throws Exception {
        ArrayList<Persona> p = new ArrayList<>();
        FileReader f = new FileReader("dati.txt");
        BufferedReader fIN = new BufferedReader(f);

        String riga = fIN.readLine(); // prende la prima linea 
        boolean spazio = false;

        String nome = "";
        String cognome = "";

        while((riga = fIN.readLine()) != null) { 
            nome = "";
            cognome = "";
            
            for (int i = 0; i < riga.length(); i++) {

                if (riga.charAt(i) == '-')
                    spazio  = true;
                if (!spazio) // se non ha trovato lo spazio è un nome senno cognome
                    nome += riga.charAt(i);
                else if(riga.charAt(i) != '-')
                    cognome += riga.charAt(i);
            }
            spazio = false;
            p.add(new Persona(nome, cognome));
        }

        for(int i = 0; i < p.size(); i++) {
            System.out.println(p.get(i).toString());
        }
        
        System.out.print("\nordinato: \n");
        p.sort((a, b) -> a.getCognome().compareTo(b.getCognome()));

        for(int i=0; i<p.size(); i++) {
            System.out.println(p.get(i).toString());
        }
    }
}