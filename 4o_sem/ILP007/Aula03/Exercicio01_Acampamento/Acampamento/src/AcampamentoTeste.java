
public class AcampamentoTeste {

    public static void main(String[] args) {
        Acampamento membro = new Acampamento();
        membro.nome = "Batata";
        membro.idade = 31;
        membro.imprimir();

        membro.separarGrupo();
        membro.imprimir();
    }
}
