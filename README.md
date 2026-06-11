# 🖥️ Operating-System

<div align="center">

### ⚙️ Operating Systems Laboratory Repository (2024–25)

**Exploring Process Management • CPU Scheduling • Deadlock Avoidance • Shell Scripting • Linux Programming**

Built using **C**, **Bash**, **GCC**, and **Ubuntu Linux**

</div>

---

## 📖 Overview

This repository showcases the practical experiments completed during the **Operating Systems Laboratory (2024–25)**. The work focuses on fundamental operating system concepts through hands-on implementation and experimentation using **C programming** and **Bash scripting** in the **Ubuntu Linux environment**.

The objective of this laboratory was to bridge theoretical operating system concepts with real-world implementation, providing practical exposure to process management, CPU scheduling, deadlock avoidance, and shell scripting.

---

## 🚀 Lab Experiments

### 📂 1. Basic Linux Commands

Practiced essential Linux commands such as:

`bash
ls
cd
pwd
mkdir
rm
cp
mv
``

These commands were used for file management, directory navigation, and system interaction.

---

### 💻 2. Writing C Programs in Linux

* Used the **vi editor** to create C programs.
* Compiled programs using **GCC Compiler**.
* Executed programs directly through the Linux terminal.

`bash
gcc program.c -o output
./output
``

---

### 🔄 3. Foreground and Background Processes

Explored process execution modes in Linux:

* Foreground Processes
* Background Processes
* Process Monitoring

Example:

`bash
./program &
``

This experiment demonstrated how Linux manages multiple running tasks simultaneously.

---

### 🧬 4. Process Creation using `fork()`

Implemented the **fork() system call** to create child processes.

Key concepts explored:

* Parent Process
* Child Process
* Process IDs (PID)
* Concurrent Execution

`c
fork();
``

The experiment helped understand how operating systems create and manage processes.

---

### ⏱️ 5. FCFS Scheduling Algorithm

Implemented the **First-Come First-Served (FCFS)** CPU Scheduling Algorithm.

#### Features

* Non-preemptive scheduling
* Gantt Chart generation
* Waiting Time Calculation
* Turnaround Time Calculation

The experiment demonstrated how processes are executed in the order of arrival.

---

### ⚡ 6. SJF Scheduling Algorithm

Implemented the **Shortest Job First (SJF)** Scheduling Algorithm.

#### Features

* Non-preemptive scheduling
* Gantt Chart representation
* Reduced average waiting time
* Turnaround time analysis

This practical illustrated how shorter processes are prioritized to improve CPU utilization.

---

### 🎯 7. Priority Preemptive Scheduling

Developed a program for **Priority Scheduling with Preemption**.

#### Features

* Dynamic process interruption
* Priority-based execution
* Gantt Chart visualization
* CPU scheduling analysis

This experiment demonstrated how operating systems handle high-priority processes in real-time environments.

---

### 🔒 8. Banker's Algorithm

Implemented the **Banker's Algorithm** for deadlock avoidance.

#### Key Concepts

* Resource Allocation
* Safe State Detection
* Need Matrix
* Deadlock Prevention

The program verifies whether the system remains in a safe state before granting resource requests.

---

### 🐚 9. Shell Commands and Shell Scripting

Created shell scripts to automate common system operations.

Topics covered:

* Variables
* User Input
* Loops
* Commands
* Script Execution

`bash
bash script.sh
``

This practical introduced Linux task automation using Bash.

---

### 🔀 10. If-Else and Elif Conditions in Shell Scripts

Implemented decision-making logic in shell scripts using:

`bash
if
else
elif
``

Applications included:

* Conditional execution
* User-based decisions
* System automation tasks

---

## 🎓 Learning Outcomes

Through these experiments, the following skills and concepts were acquired:

✔️ Understanding of core Operating System concepts

✔️ Process creation and management using system calls

✔️ CPU Scheduling Algorithms and performance analysis

✔️ Deadlock avoidance techniques using Banker's Algorithm

✔️ Linux command-line proficiency

✔️ Shell scripting and task automation

✔️ Writing, compiling, and executing C programs in Linux

✔️ Practical problem-solving using system-level programming concepts

---

## 🛠️ Technology Stack

| Component            | Technology   |
| -------------------- | ------------ |
| Programming Language | C            |
| Scripting Language   | Bash         |
| Operating System     | Ubuntu Linux |
| Compiler             | GCC          |
| Editor               | vi Editor    |

---

## 📊 Core Concepts Covered

`text
Operating Systems
│
├── Linux Fundamentals
├── Process Management
│   ├── fork()
│   ├── Foreground Processes
│   └── Background Processes
│
├── CPU Scheduling
│   ├── FCFS
│   ├── SJF
│   └── Priority Preemptive
│
├── Deadlock Avoidance
│   └── Banker's Algorithm
│
└── Shell Scripting
    ├── Commands
    ├── Variables
    ├── Conditions
    └── Automation
``

---

## 🎯 Conclusion

The Operating Systems Laboratory provided practical exposure to fundamental operating system concepts through real-world implementation and experimentation. The exercises strengthened understanding of process management, scheduling algorithms, deadlock avoidance, and shell scripting while developing problem-solving skills in a Linux environment.

This repository serves as a comprehensive collection of Operating System laboratory programs and experiments completed during the academic session **2024–25**.
