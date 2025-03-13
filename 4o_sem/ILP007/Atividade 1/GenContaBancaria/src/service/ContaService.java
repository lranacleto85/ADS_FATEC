package service;

import java.util.ArrayList;
import model.Conta;

public class ContaService {

    private ArrayList<Conta> contas;

    public ContaService() {
        contas = new ArrayList<>();
    }

    //Cadastrar nova conta
    public void adicionarConta(Conta conta) {
        contas.add(conta);
        System.out.println("Conta cadastrada com sucesso!");
    }

    //Buscar conta pelo número
    public Conta buscarConta(String numeroConta) {
        for (Conta conta : contas) {
            if (conta.getNumeroConta().equals(numeroConta)) {
                return conta;
            }
        }
        return null;
    }

    //Remover conta
    public boolean removerConta(String numeroConta) {
        Conta conta = buscarConta(numeroConta);
        if (conta != null) {
            contas.remove(conta);
            return true;
        }
        return false;
    }

    //Listar todas as contas cadastradas
    public void listarContas() {
        if (contas.isEmpty()) {
            System.out.println("Nenhuma conta cadastrada.");
        } else {
            for (Conta conta : contas) {
                conta.exibirDadosConta();
                System.out.println("------------------");
            }
        }
    }
}
