package model;

public class Corrente extends Conta {

    private double limite;

    public Corrente(int numConta, String nomeCliente, double limite) {
        super(numConta, nomeCliente);
        this.limite = limite;
    }

    //Precisamos fazer o override para o metodo sacar
    @Override
    public boolean sacar(double valor) {
        if (valor <= (this.getSaldo() + limite)) {
            setSaldo(getSaldo() - valor);
            return true;
        }
        return false;
    }

    @Override
    public String toString() {
        return super.toString()
                + "Limite: " + this.limite;
    }

    @Override
    public void cobrarTaxaManutencao() {
        System.out.println("Valor da taxa R$ 22,00");
    }
}
