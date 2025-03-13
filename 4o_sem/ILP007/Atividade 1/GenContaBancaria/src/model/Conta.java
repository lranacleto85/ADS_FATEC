package model;

public class Conta {

    private String numeroConta;
    private String agencia;
    private String nomeCliente;
    private double saldo;

    public Conta(String numeroConta, String agencia, String nomeCliente) {
        setNumeroConta(numeroConta);
        setAgencia(agencia);
        this.nomeCliente = nomeCliente;
        this.saldo = 0.0;
    }

    // Validação no setter do número da conta
    public void setNumeroConta(String numeroConta) {
        if (numeroConta.matches("[0-9]+")) {
            this.numeroConta = numeroConta;
        } else {
            throw new IllegalArgumentException("O número da conta deve conter apenas dígitos.");
        }
    }

    public String getNumeroConta() {
        return numeroConta;
    }

    // Validação no setter da agência
    public void setAgencia(String agencia) {
        if (agencia.matches("[0-9]+")) {
            this.agencia = agencia;
        } else {
            throw new IllegalArgumentException("A agência deve conter apenas dígitos.");
        }
    }

    public String getAgencia() {
        return agencia;
    }

    public String getNomeCliente() {
        return nomeCliente;
    }

    public void setNomeCliente(String nomeCliente) {
        this.nomeCliente = nomeCliente;
    }

    public double getSaldo() {
        return saldo;
    }

    public void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            System.out.println("Depósito realizado com sucesso! Saldo atual: R$ " + saldo);
        } else {
            System.out.println("Valor inválido para depósito.");
        }
    }

    public boolean sacar(double valor) {
        if (valor <= 0) {
            System.out.println("Valor inválido para saque.");
            return false;
        } else if (saldo >= valor) {
            saldo -= valor;
            System.out.println("Saque realizado com sucesso!");
            return true;
        } else {
            System.out.println("Saldo insuficiente para realizar o saque.");
            return false;
        }
    }

    public void exibirDadosConta() {
        System.out.println("Número da conta: " + numeroConta);
        System.out.println("Agência: " + agencia);
        System.out.println("Cliente: " + nomeCliente);
        System.out.printf("Saldo: R$ %.2f%n", saldo);
    }
}
