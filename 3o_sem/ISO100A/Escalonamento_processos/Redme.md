Claro! Aqui está um modelo de `README.md` que você pode utilizar no seu GitHub para o projeto de escalonamento de processos da disciplina de **ISO100A - Sistemas Operacionais I**. O foco é descrever o projeto, suas funcionalidades, as políticas de escalonamento implementadas, e como rodar o código.

### `README.md`

```md
# Algoritmos de Escalonamento de Processos

Este repositório contém a implementação de algoritmos de escalonamento de processos, desenvolvidos para a disciplina **ISO100A - Sistemas Operacionais I**. Os algoritmos implementados simulam duas políticas clássicas de escalonamento: **Round Robin (Preemptivo)** e **Shortest Job First - SJF (Não Preemptivo)**, ambos assumindo que todos os processos possuem o mesmo tempo de chegada.

## 🛠️ Funcionalidades

O código implementa as seguintes políticas de escalonamento de processos:

- **Round Robin (Circular - Preemptivo com Quantum)**:
  - Cada processo é executado por um intervalo de tempo fixo (quantum).
  - Se o processo não for concluído dentro do quantum, ele é interrompido e colocado no final da fila.
  - A simulação inclui o tempo de espera, turnaround e a evolução do tempo de execução.
  
- **Shortest Job First (SJF - Não Preemptivo)**:
  - O processo com o menor tempo de burst (execução) é selecionado para execução.
  - Uma vez iniciado, o processo é executado até o final sem interrupções.
  - Similarmente, a simulação acompanha o tempo de espera, turnaround e a evolução da execução dos processos.

## 📊 Gráfico de Gantt

Para ambos os algoritmos, o código gera e exibe gráficos de Gantt utilizando a biblioteca **matplotlib**, permitindo uma visualização clara da ordem de execução dos processos e como eles se alternam no tempo.

## 🚀 Como Rodar o Projeto

Siga as instruções abaixo para rodar a simulação em sua máquina:

### 1. Clonar o Repositório

Primeiro, clone o repositório para o seu ambiente local:

```bash
git clone https://github.com/seuusuario/iso100a-scheduling.git
cd iso100a-scheduling
```

### 2. Instalar Dependências

O projeto utiliza a biblioteca **matplotlib** para gerar os gráficos de Gantt. Instale as dependências usando o `pip`:

```bash
pip install matplotlib
```

### 3. Rodar o Programa

Execute o programa principal utilizando o Python:

```bash
python escalonamento_processos.py
```

O programa solicitará as seguintes entradas:
- **Número de processos**: O total de processos a serem escalonados.
- **Tempo de execução (burst time)** de cada processo.
- **Quantum** (apenas para o algoritmo Round Robin).

### 4. Visualizar o Resultado

- O programa exibirá gráficos de Gantt para cada algoritmo.
- Serão mostrados no terminal:
  - Tempos de espera (waiting times).
  - Tempos de turnaround.
  - Tempo médio de espera.
  - Tempo médio de turnaround.
  - Logs da evolução dos algoritmos, mostrando a execução de cada processo.

## 📈 Exemplo de Execução

### 1. Round Robin (Quantum = 3)
```bash
Digite o número de processos: 3
Digite o tempo de execução (burst time) para o Processo 1: 7
Digite o tempo de execução (burst time) para o Processo 2: 4
Digite o tempo de execução (burst time) para o Processo 3: 9
Digite o valor do quantum para Round Robin: 3
```

**Saída no Console**:
```
=== Round Robin (Circular) ===
Tempos de Espera e Turnaround para cada Processo:
Processo 1: Tempo de Espera = 6, Tempo de Turnaround = 13
Processo 2: Tempo de Espera = 3, Tempo de Turnaround = 7
Processo 3: Tempo de Espera = 12, Tempo de Turnaround = 21
Tempo médio de espera: 7.0
Tempo médio de turnaround: 13.666666666666666
Evolução do Round Robin:
Processo 1 executou de 0 a 3
Processo 2 executou de 3 a 6
Processo 3 executou de 6 a 9
Processo 1 executou de 9 a 12
Processo 3 executou de 12 a 15
Processo 2 finalizado em 7
Processo 3 finalizado em 21
Processo 1 finalizado em 13
```

### 2. Shortest Job First (SJF - Não Preemptivo)
```bash
Digite o número de processos: 3
Digite o tempo de execução (burst time) para o Processo 1: 5
Digite o tempo de execução (burst time) para o Processo 2: 2
Digite o tempo de execução (burst time) para o Processo 3: 8
```

**Saída no Console**:
```
=== SJF Não Preemptivo ===
Tempos de Espera e Turnaround para cada Processo:
Processo 2: Tempo de Espera = 0, Tempo de Turnaround = 2
Processo 1: Tempo de Espera = 2, Tempo de Turnaround = 7
Processo 3: Tempo de Espera = 7, Tempo de Turnaround = 15
Tempo médio de espera: 3.0
Tempo médio de turnaround: 8.0
Evolução do SJF:
Processo 2 executou de 0 a 2
Processo 1 executou de 2 a 7
Processo 3 executou de 7 a 15
```

## 🧠 Conceitos Utilizados

- **Vetor e Funções**: Os tempos de burst, turnaround e espera são armazenados em vetores e manipulados por funções para calcular métricas de desempenho.
- **Política de Escalonamento**: Os algoritmos Round Robin e SJF são baseados nas políticas clássicas de sistemas operacionais para escalonamento de processos.
- **Simulação e Visualização**: O gráfico de Gantt é gerado dinamicamente para visualizar como os processos são escalonados no tempo.

## 📝 Métricas Calculadas

- **Tempo de Espera**: O tempo que cada processo espera antes de começar a ser executado.
- **Tempo de Turnaround**: O tempo total desde a chegada do processo até a sua finalização.
- **Tempo Médio de Espera**: A média dos tempos de espera de todos os processos.
- **Tempo Médio de Turnaround**: A média dos tempos de turnaround de todos os processos.

## 📚 Disciplina

Este projeto foi desenvolvido para a disciplina **ISO100A - Sistemas Operacionais I** do curso de **Análise e Desenvolvimento de Sistemas**.

## 🖥️ Tecnologias Utilizadas

- **Python**: Linguagem principal do projeto.
- **Matplotlib**: Biblioteca usada para gerar os gráficos de Gantt.

## 🤝 Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou pull requests para melhorias no projeto.

---

**Autor**: [Fernando Brandão, Fernando Cesar, Filicio e Leonardo Anacleto]  
**Curso**: Análise e Desenvolvimento de Sistemas - [FATEC - Mogi Mirim]


