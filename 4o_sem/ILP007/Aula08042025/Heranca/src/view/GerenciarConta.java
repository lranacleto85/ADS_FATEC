package view;

import java.util.ArrayList;
import java.util.List;
import model.Conta;
import model.Corrente;
import model.Poupanca;

public class GerenciarConta {

    List<Conta> contas = new ArrayList<>();

    public static void main(String[] args) {
        GerenciarConta gc = new GerenciarConta();
        Poupanca conta1 = new Poupanca(
                111, "Marina", 0.01);
        Corrente conta2 = new Corrente(
                222, "Leticia", 1000);
        conta1.depositar(1000);
        conta2.depositar(1000);
        gc.adicionarConta(conta1);
        gc.adicionarConta(conta2);
        gc.listarContas();
        System.out.println("Saldo das contas: " + gc.getTotalSaldoContas());
    }

    public void adicionarConta(Conta conta) {
        contas.add(conta);
    }

    public void listarContas() {
        for (Conta c : contas) {
            System.out.println(c);
        }
    }

    public double getTotalSaldoContas() {
        double total = 0.0;
        for (Conta c : contas) {
            total += c.getSaldo();
        }
        return total;
    }
}
