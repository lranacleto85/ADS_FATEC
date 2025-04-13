
public class Aluno {

    private String nome;
    private String login;
    private String senha;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getLogin() {
        return login;
    }

    public void setLogin(String login) {
        this.login = login;
    }

    public String getSenha() {
        return senha;
    }

    public void setSenha(String senha) {
        this.senha = senha;
    }

    //Método construtor
    public Aluno(String nome, String login) {
        this.nome = nome;
        this.login = login;
    }

    public Aluno(String nome, String login, String senha) {
        this(nome, login);
        this.senha = senha;
    }

    public Aluno() {

    }

}
