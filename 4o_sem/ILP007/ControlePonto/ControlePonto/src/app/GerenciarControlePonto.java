package app;

import model.Gerente;
import model.Operador;
import model.Secretaria;
import registro.RegistroPonto;

import java.time.LocalDateTime;

public class GerenciarControlePonto {

    public static void main(String[] args) throws InterruptedException {
        // Instanciando os funcionários
        Gerente gerente = new Gerente(1, "João Silva", "joao@empresa.com", "joao123", "senha123");
        Operador operador = new Operador(2, "Pedro Santos", "pedro@empresa.com", 20.50);
        Secretaria secretaria = new Secretaria(3, "Maria Oliveira", "maria@empresa.com", "1932321000", "R123");

        // Criando registros de entrada
        RegistroPonto registro1 = new RegistroPonto(101, gerente);
        registro1.setHoraEntrada(LocalDateTime.now());
        registro1.apresentarRegistroPonto();
        Thread.sleep(1000);

        RegistroPonto registro2 = new RegistroPonto(102, operador);
        registro2.setHoraEntrada(LocalDateTime.now());
        registro2.apresentarRegistroPonto();
        Thread.sleep(1000);

        RegistroPonto registro3 = new RegistroPonto(103, secretaria);
        registro3.setHoraEntrada(LocalDateTime.now());
        registro3.apresentarRegistroPonto();
        Thread.sleep(1000);

        // Criando registros de saída
        registro1.setHoraSaida(LocalDateTime.now());
        registro1.apresentarRegistroPonto();
        Thread.sleep(1000);

        registro2.setHoraSaida(LocalDateTime.now());
        registro2.apresentarRegistroPonto();
        Thread.sleep(1000);

        registro3.setHoraSaida(LocalDateTime.now());
        registro3.apresentarRegistroPonto();

        System.out.println("Process finished with exit code 0");
    }
}
