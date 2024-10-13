import matplotlib.pyplot as plt


# Função para simular o escalonamento Round Robin (Circular)
def round_robin(processes, burst_times, quantum):
    n = len(processes)
    remaining_times = burst_times.copy()
    waiting_times = [0] * n
    turnaround_times = [0] * n
    time = 0
    gantt_chart = []
    execution_log = []

    while True:
        done = True
        for i in range(n):
            if remaining_times[i] > 0:
                done = False
                if remaining_times[i] > quantum:
                    time += quantum
                    remaining_times[i] -= quantum
                    execution_log.append(
                        f"Processo {processes[i]} executou de {time-quantum} a {time}"
                    )
                    gantt_chart.append((processes[i], time))
                else:
                    time += remaining_times[i]
                    waiting_times[i] = time - burst_times[i]
                    remaining_times[i] = 0
                    turnaround_times[i] = time
                    execution_log.append(
                        f"Processo {processes[i]} finalizado em {time}"
                    )
                    gantt_chart.append((processes[i], time))

        if done:
            break

    # Calculando o tempo médio de espera e turnaround
    avg_waiting_time = sum(waiting_times) / n
    avg_turnaround_time = sum(turnaround_times) / n

    return (
        gantt_chart,
        waiting_times,
        turnaround_times,
        avg_waiting_time,
        avg_turnaround_time,
        execution_log,
    )


# Função para simular o escalonamento SJF (Shortest Job First) Não Preemptivo
def sjf_non_preemptive(processes, burst_times):
    n = len(processes)
    sorted_processes = sorted(zip(processes, burst_times), key=lambda x: x[1])
    time = 0
    waiting_times = [0] * n
    turnaround_times = [0] * n
    gantt_chart = []
    execution_log = []

    for i, (process, burst_time) in enumerate(sorted_processes):
        waiting_times[i] = time
        time += burst_time
        turnaround_times[i] = time
        gantt_chart.append((process, time))
        execution_log.append(
            f"Processo {process} executou de {waiting_times[i]} a {time}"
        )

    # Calculando o tempo médio de espera e turnaround
    avg_waiting_time = sum(waiting_times) / n
    avg_turnaround_time = sum(turnaround_times) / n

    return (
        gantt_chart,
        waiting_times,
        turnaround_times,
        avg_waiting_time,
        avg_turnaround_time,
        execution_log,
    )


# Função para plotar o gráfico de Gantt
def plot_gantt_chart(gantt_chart, title):
    fig, gnt = plt.subplots()
    gnt.set_xlabel("Time")
    gnt.set_ylabel("Processes")
    gnt.set_title(title)

    colors = [
        "tab:blue",
        "tab:orange",
        "tab:green",
        "tab:red",
        "tab:purple",
        "tab:brown",
        "tab:pink",
        "tab:gray",
        "tab:olive",
        "tab:cyan",
    ]
    process_colors = {
        process: colors[i % len(colors)]
        for i, process in enumerate(set([p for p, _ in gantt_chart]))
    }

    gnt.set_xlim(0, max([time for _, time in gantt_chart]))
    gnt.set_ylim(0, 10)

    y_tick = 5
    start_time = 0
    for i, (process, end_time) in enumerate(gantt_chart):
        gnt.broken_barh(
            [(start_time, end_time - start_time)],
            (y_tick, 1),
            facecolors=(process_colors[process]),
        )
        gnt.text(
            (start_time + end_time) / 2 - 1,
            y_tick + 0.5,
            f"P{process}",
            va="center",
            ha="center",
            color="white",
        )
        start_time = end_time
        y_tick -= 1

    plt.show()


# Função auxiliar para capturar os dados do usuário
def get_user_input():
    num_processes = int(input("Digite o número de processos: "))
    processes = list(range(1, num_processes + 1))
    burst_times = []

    for i in range(num_processes):
        burst_time = int(
            input(f"Digite o tempo de execução (burst time) para o Processo {i+1}: ")
        )
        burst_times.append(burst_time)

    quantum = int(input("Digite o valor do quantum para Round Robin: "))

    return processes, burst_times, quantum


# Função para exibir os tempos de espera e turnaround de cada processo
def print_times(processes, waiting_times, turnaround_times):
    print("\nTempos de Espera e Turnaround para cada Processo:")
    for i in range(len(processes)):
        print(
            f"Processo {processes[i]}: Tempo de Espera = {waiting_times[i]}, Tempo de Turnaround = {turnaround_times[i]}"
        )


# Função principal
def main():
    processes, burst_times, quantum = get_user_input()

    # Round Robin
    print("\n=== Round Robin (Circular) ===")
    (
        gantt_rr,
        waiting_times_rr,
        turnaround_times_rr,
        avg_waiting_rr,
        avg_turnaround_rr,
        execution_log_rr,
    ) = round_robin(processes, burst_times, quantum)
    plot_gantt_chart(gantt_rr, "Round Robin (Circular)")
    print_times(processes, waiting_times_rr, turnaround_times_rr)
    print(f"Tempo médio de espera: {avg_waiting_rr}")
    print(f"Tempo médio de turnaround: {avg_turnaround_rr}")
    print("Evolução do Round Robin:")
    for log in execution_log_rr:
        print(log)

    # SJF Não Preemptivo
    print("\n=== SJF Não Preemptivo ===")
    (
        gantt_sjf,
        waiting_times_sjf,
        turnaround_times_sjf,
        avg_waiting_sjf,
        avg_turnaround_sjf,
        execution_log_sjf,
    ) = sjf_non_preemptive(processes, burst_times)
    plot_gantt_chart(gantt_sjf, "SJF (Non-Preemptive)")
    print_times(processes, waiting_times_sjf, turnaround_times_sjf)
    print(f"Tempo médio de espera: {avg_waiting_sjf}")
    print(f"Tempo médio de turnaround: {avg_turnaround_sjf}")
    print("Evolução do SJF:")
    for log in execution_log_sjf:
        print(log)


if __name__ == "__main__":
    main()
