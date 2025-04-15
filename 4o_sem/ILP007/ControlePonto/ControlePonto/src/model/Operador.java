package model;

public class Operador extends Funcionario {

    private double valorHora;

    // Construtor
    public Operador() {
        super();
    }

    public Operador(int idFunc, String nome, String email, double valorHora) {
        super(idFunc, nome, email);
        this.valorHora = valorHora;
    }

    // Getters e Setters
    public double getValorHora() {
        return valorHora;
    }

    public void setValorHora(double valorHora) {
        this.valorHora = valorHora;
    }
}
