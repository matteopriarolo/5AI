public class Persona {
    private String nome;
    private String cognome;

    public Persona(String nome, String cognome) {
        this.cognome = cognome;
        this.nome = nome;
    }

    public String getCognome() { return cognome; }
    public String getNome() { return nome; }

    public String toString() { return "nome: " + nome + ' ' + "cognome: " + cognome; }
}
