package model;

public class Secretaria extends Funcionario {

    private String telefone;
    private String ramal;

    // Construtor
    public Secretaria() {
        super();
    }

    public Secretaria(int idFunc, String nome, String email, String telefone, String ramal) {
        super(idFunc, nome, email);
        this.telefone = telefone;
        this.ramal = ramal;
    }

    // Getters e Setters
    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public String getRamal() {
        return ramal;
    }

    public void setRamal(String ramal) {
        this.ramal = ramal;
    }
}
