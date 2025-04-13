
import java.util.Scanner;

public class main { // A classe principal deve começar com letra maiúscula por convenção

    public static void main(String[] args) {
        int x, y;
        Scanner leitor = new Scanner(System.in);

        System.out.print("Digite o valor de x: ");
        x = leitor.nextInt();

        System.out.print("Digite o valor de y: ");
        y = leitor.nextInt(); // Correção: Usar nextInt() aqui também

        int soma = x + y;
        System.out.println("A soma de x e y é: " + soma);

        leitor.close(); // Boa prática: Fechar o Scanner após o uso
    }
}
