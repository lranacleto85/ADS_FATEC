package model;

public class Funcionario {

    private int idFunc;
    private String nome;
    private String email;
    private String documento;

    // Construtor
    public Funcionario() {
    }

    public Funcionario(int idFunc, String nome, String email) {
        this.idFunc = idFunc;
        this.nome = nome;
        this.email = email;
    }

    // Getters e Setters
    public int getIdFunc() {
        return idFunc;
    }

    public void setIdFunc(int idFunc) {
        this.idFunc = idFunc;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getDocumento() {
        return documento;
    }

    public void setDocumento(String documento) {
        this.documento = documento;
    }
}
