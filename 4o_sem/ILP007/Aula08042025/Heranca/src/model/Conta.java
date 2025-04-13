package model;

public abstract class Conta {

    private int numConta;
    private String nomeCliente;
    private double saldo;

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public String getNomeCliente() {
        return nomeCliente;
    }

    public void setNomeCliente(String nomeCliente) {
        this.nomeCliente = nomeCliente;
    }

    public int getNumConta() {
        return numConta;
    }

    public void setNumConta(int numConta) {
        this.numConta = numConta;
    }

    public Conta(int numConta, String nomeCliente) {
        this.numConta = numConta;
        this.nomeCliente = nomeCliente;
        this.saldo = 0;
    }

    public boolean depositar(double valor) {
        if (valor > 0) {
            this.saldo += valor;
            return true;
        }
        return false;
    }

    public boolean sacar(double valor) {
        if (valor <= saldo) {
            this.saldo -= valor;
            return true;
        }
        return false;
    }

    public String toString() {
        return "Dados da Conta \n"
                + "Número da Conta: " + this.numConta + "\n"
                + "Nome do Cliente: " + this.nomeCliente + "\n"
                + "Saldo: " + this.saldo + "\n";
    }

    abstract public void cobrarTaxaManutencao();
}
