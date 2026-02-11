// Dato un file di testo, scrivine il contenuto sullo schermo presentando 20 righe per volta e permettendo all’u-tente di passare alla “pagina” successiva o di interrompere la visualizzazione.

// 37    Realizza  un  programma  per  leggere  un  file  di  testo,  visualizzare  le  righe  in  maiuscolo,  contare  il  numero  di  caratteri e il numero di righe.

import java.io.*;
class Main {
    public static void main(String[] args) throws IOException {
        String nomeFile = "file.txt";
        File f = new File(nomeFile);

        if (!f.exists()) {
            f.createNewFile();
            System.out.println("il file non esisteva, è stato appena creato con il nome di " + nomeFile + " nella stessa cartella del programma");
        }
        BufferedReader fin = new BufferedReader(new FileReader("file.txt"));    
        BufferedReader tastiera = new BufferedReader(new InputStreamReader(System.in));

        String risposta = null;
        int cont = 1;
        do {
            System.out.println("Pagina " + cont + ":");
            for(int i = 0; i < 20; i++) {
                
                String riga = fin.readLine();
    
                if (riga == null) break; 
                System.out.println(riga);
            }
            
            System.out.println("Vuoi continuare a visualizzare? (si/no)");
            risposta = tastiera.readLine();
            if (risposta == null) break;

            cont++;
        } while (risposta.equalsIgnoreCase("si")); 

        fin.close();


         // es 37
        fin = new BufferedReader(new FileReader("file.txt"));    
        int caratteri_con_spazi = 0;
        int caratteri_senza_spazi = 0;
        int righe = 0;

        String riga = null;
        while (true) {
            riga = fin.readLine();

            
            if ( riga == null) break;
            caratteri_con_spazi += riga.length();
            caratteri_senza_spazi += riga.replace(" ", "").length();
            righe++;

        }   

        System.out.println("Numero di caratteri: " + caratteri_con_spazi);
        System.out.println("Numero di caratteri senza spazi: " + caratteri_senza_spazi);
        System.out.println("Numero di righe: " + righe);


        fin.close();
    }
}