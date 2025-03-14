# 💰 Gerenciador de Contas Bancárias (Java - POO)

Este projeto é uma atividade prática da disciplina **ILP007 - Programação Orientada a Objetos** do **4º semestre** do curso de **Análise e Desenvolvimento de Sistemas (ADS) - FATEC**.  

O objetivo é criar um sistema simples de **gerenciamento de contas bancárias** utilizando os conceitos de **Programação Orientada a Objetos (POO) em Java**.

---

## 🚀 **Funcionalidades**
✔️ Criar novas contas bancárias  
✔️ Depositar valores na conta  
✔️ Sacar dinheiro de uma conta  
✔️ Consultar os dados de uma conta específica  
✔️ Listar todas as contas cadastradas  
✔️ Excluir uma conta bancária  
✔️ Validação para impedir caracteres inválidos em número da conta e agência  

---

## 🛠 **Tecnologias utilizadas**
- **Java** (JDK 11+)
- **ArrayList** (armazenamento das contas)
- **Scanner** (entrada de dados via console)
- **Estruturas de repetição e decisão**
- **Tratamento de exceções**
- **VSCode** (ou qualquer outra IDE compatível)

---

## 📂 **Estrutura do projeto**
```
GenContaBancaria
│
└── src
    ├── Main.java                 # Classe principal (menu interativo)
    ├── model
    │   └── Conta.java            # Classe que representa uma conta bancária
    ├── service
    │   └── ContaService.java     # Classe para gerenciar as operações da conta
    └── README.md                 # Documentação do projeto
```

---

## ⚙️ **Como executar o projeto?**

### ✅ **1. Clonar o repositório**
Se ainda não clonou o repositório, execute:

```bash
git clone https://github.com/lranacleto85/ADS_FATEC.git
```

Entre na pasta do projeto:

```bash
cd ADS_FATEC/4o_Semestre/ILP007 - Programação Orientada a Objetos/Atividade_1/GenContaBancaria
```

---

### ✅ **2. Compilar o projeto**
No terminal, compile os arquivos:

```bash
javac src/model/Conta.java src/service/ContaService.java src/Main.java
```

---

### ✅ **3. Executar o programa**
Após a compilação, rode o projeto com:

```bash
java src/Main
```

---

## 📌 **Exemplo de execução**
```
====== Gerenciador de Contas Bancárias ======
1. Cadastrar nova conta
2. Consultar conta específica
3. Listar todas as contas
4. Realizar depósito
5. Realizar saque
6. Excluir uma conta
7. Sair
Escolha uma opção: 1

Número da conta (apenas números): 12345
Nome da agência (apenas números): 0001
Nome do cliente: João Silva
Conta cadastrada com sucesso!
```

---

## 📜 **Licença**
Este projeto está sob a licença MIT. Sinta-se à vontade para usá-lo e modificá-lo.

---

## 📌 **Autor**
👤 **Leonardo Ramos Anacleto**  
📌 GitHub: [lranacleto85](https://github.com/lranacleto85)  
📌 LinkedIn: [Lranacleto](https://www.linkedin.com/in/lranacleto/)  

---

Agora basta **copiar e colar** esse conteúdo no arquivo **README.md** dentro da pasta do seu projeto **GenContaBancaria** no VSCode.

Se precisar de ajustes ou quiser adicionar mais informações, me avise! 🚀😊
