package registro;

import model.Funcionario;

import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class RegistroPonto {

    private long idRegPonto;
    private Funcionario func;
    private LocalDate dataRegistro;
    private LocalDateTime horaEntrada;
    private LocalDateTime horaSaida;

    // Construtor
    public RegistroPonto() {
    }

    public RegistroPonto(long idRegPonto, Funcionario func) {
        this.idRegPonto = idRegPonto;
        this.func = func;
        this.dataRegistro = LocalDate.now();
    }

    // Getters e Setters
    public long getIdRegPonto() {
        return idRegPonto;
    }

    public void setIdRegPonto(long idRegPonto) {
        this.idRegPonto = idRegPonto;
    }

    public Funcionario getFunc() {
        return func;
    }

    public void setFunc(Funcionario func) {
        this.func = func;
    }

    public LocalDate getDataRegistro() {
        return dataRegistro;
    }

    public void setDataRegistro(LocalDate dataRegistro) {
        this.dataRegistro = dataRegistro;
    }

    public LocalDateTime getHoraEntrada() {
        return horaEntrada;
    }

    public void setHoraEntrada(LocalDateTime horaEntrada) {
        this.horaEntrada = horaEntrada;
    }

    public LocalDateTime getHoraSaida() {
        return horaSaida;
    }

    public void setHoraSaida(LocalDateTime horaSaida) {
        this.horaSaida = horaSaida;
    }

    // Exibir o registro de ponto
    public void apresentarRegistroPonto() {
        DateTimeFormatter formatterHora = DateTimeFormatter.ofPattern("HH:mm:ss");
        DateTimeFormatter formatterData = DateTimeFormatter.ofPattern("dd/MM/yyyy");

        System.out.println("==================================");
        System.out.println("Funcionário: " + func.getNome());
        System.out.println("Data de Registro: " + dataRegistro.format(formatterData));
        System.out.println("Hora de Entrada: "
                + (horaEntrada != null ? horaEntrada.format(formatterHora) : " - "));

        if (horaSaida != null) {
            System.out.println("Hora de Saída: " + horaSaida.format(formatterHora));
        }
        System.out.println();
    }
}
