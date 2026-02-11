public class Voti {
    int voto;
    String nome;
    String cognome;
    int matricola;
    String classe;
    String materia;
    String data;
    String traccia;
    String argomento;


    public Voti() {
        voto = 0;
        nome = null;
        cognome = null;
        matricola = 0;
        data = null;
        traccia = null;
        argomento = null;
    }

    public void setVoto(int voto) {
        this.voto = voto;
    }
    public void setCognome(String cognome) {
        this.cognome = cognome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }


}
