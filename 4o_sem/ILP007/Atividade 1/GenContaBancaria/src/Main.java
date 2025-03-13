
import java.util.Scanner;
import model.Conta;
import service.ContaService;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ContaService contaService = new ContaService();
        int opcao;

        do {
            System.out.println("\n====== Gerenciador de Contas ======");
            System.out.println("1. Cadastrar nova conta");
            System.out.println("2. Consultar conta específica");
            System.out.println("3. Listar todas as contas");
            System.out.println("4. Realizar depósito");
            System.out.println("5. Realizar saque");
            System.out.println("6. Excluir uma conta");
            System.out.println("7. Sair");
            System.out.print("Escolha uma opção: ");
            opcao = sc.nextInt();
            sc.nextLine(); // limpar buffer

            switch (opcao) {
                case 1:
                    String numeroConta;
                    String agencia;

                    // Validação número da conta
                    do {
                        System.out.print("Número da conta (apenas números): ");
                        numeroConta = sc.nextLine();
                        if (!numeroConta.matches("[0-9]+")) {
                            System.out.println("Entrada inválida! O número da conta deve conter apenas dígitos.");
                        }
                    } while (!numeroConta.matches("[0-9]+"));

                    // Validação agência
                    do {
                        System.out.print("Nome da agência (apenas números): ");
                        agencia = sc.nextLine();
                        if (!agencia.matches("[0-9]+")) {
                            System.out.println("A agência deve conter apenas dígitos.");
                        }
                    } while (!agencia.matches("[0-9]+"));

                    // Nome pode conter letras normalmente
                    System.out.print("Nome do cliente: ");
                    String nomeCliente = sc.nextLine();

                    Conta novaConta = new Conta(numeroConta, agencia, nomeCliente);
                    contaService.adicionarConta(novaConta);

                    break;

                case 2:
                    System.out.print("Informe o número da conta: ");
                    String buscarNumero = sc.nextLine();
                    Conta contaEncontrada = contaService.buscarConta(buscarNumero);

                    if (contaEncontrada != null) {
                        contaEncontrada.exibirDadosConta();
                    } else {
                        System.out.println("Conta não encontrada.");
                    }
                    break;

                case 3:
                    contaService.listarContas();
                    break;

                case 4:
                    System.out.print("Número da conta para depósito: ");
                    String numDeposito = sc.nextLine();
                    Conta contaDeposito = contaService.buscarConta(numDeposito);

                    if (contaDeposito != null) {
                        System.out.print("Valor do depósito: ");
                        double valorDeposito = sc.nextDouble();
                        sc.nextLine(); // Limpar buffer
                        contaDeposito.depositar(valorDeposito);
                    } else {
                        System.out.println("Conta não encontrada.");
                    }
                    break;

                case 5:
                    System.out.print("Número da conta para saque: ");
                    String numSaque = sc.nextLine();
                    Conta contaSaque = contaService.buscarConta(numSaque);

                    if (contaSaque != null) {
                        System.out.print("Valor do saque: ");
                        double valorSaque = sc.nextDouble();
                        sc.nextLine(); // Limpar buffer
                        contaSaque.sacar(valorSaque);
                    } else {
                        System.out.println("Conta não encontrada.");
                    }
                    break;

                case 6:
                    System.out.print("Número da conta para excluir: ");
                    String numExcluir = sc.nextLine();
                    if (contaService.removerConta(numExcluir)) {
                        System.out.println("Conta excluída com sucesso!");
                    } else {
                        System.out.println("Conta não encontrada.");
                    }
                    break;

                case 7:
                    System.out.println("Encerrando o programa...");
                    break;

                default:
                    System.out.println("Opção inválida! Tente novamente.");
                    break;
            }

        } while (opcao != 7);

        sc.close();
    }
}
