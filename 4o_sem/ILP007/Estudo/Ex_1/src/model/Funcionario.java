package model;

public class Funcionario {

    private String nome;
    private String matricula;
    private double salario;
    public static final double DESCONTO = 0.10;

    // construtor padrão
    public Funcionario(String nome, String matricula, double salario) {
        this.nome = nome;
        this.matricula = matricula;
        this.salario = salario;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getMatricula() {
        return matricula;
    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }

    public void calcularSalarioLiquido() {
        this.salario = this.salario - (this.salario * DESCONTO);
    }
}
