import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        
        System.out.print("Digite o valor de a: ");
        int a = leitor.nextInt();
        
        System.out.print("Digite o valor de b: ");
        int b = leitor.nextInt();
        
        // Usando printf() para formatação
        System.out.printf("A soma de %d e %d é: %d%n", a, b, (a + b));
        
        leitor.close(); // Fechando o Scanner
    }
}
