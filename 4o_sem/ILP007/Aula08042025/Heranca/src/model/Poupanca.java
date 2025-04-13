package model;

public class Poupanca extends Conta {

    private double taxaJuros;

    public Poupanca(int numConta, String nomeCliente, double taxaJuros) {
        super(numConta, nomeCliente);
        this.taxaJuros = taxaJuros;
    }

    @Override
    public String toString() {
        return super.toString()
                + "Taxa de Juros: " + this.taxaJuros + "\n";
    }

    @Override
    public void cobrarTaxaManutencao() {
        System.out.println("Taxa isenta\n");
    }
}
