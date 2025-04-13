package view;

import model.Funcionario;

public class AppEmpresa {

    public static void main(String[] args) {
        Funcionario funcionario = new Funcionario("João", "12345", 5000.00);
        funcionario.calcularSalarioLiquido();
        System.out.println("Salário líquido: " + funcionario.getSalario());
    }
}
