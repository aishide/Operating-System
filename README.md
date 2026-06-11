``markdown
<div align="center">

# 🖥️ OPERATING SYSTEM

<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=24&pause=1000&color=00FF00&center=true&vCenter=true&width=700&lines=Operating+Systems+Laboratory+2024-25;Process+Management+%7C+CPU+Scheduling;Deadlock+Avoidance+%7C+Shell+Scripting;Ubuntu+Linux+%7C+C+Programming+%7C+Bash" />

<p>
<img src="https://img.shields.io/badge/Platform-Ubuntu_Linux-E95420?style=for-the-badge&logo=ubuntu&logoColor=white"/>
<img src="https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white"/>
<img src="https://img.shields.io/badge/Scripting-Bash-121011?style=for-the-badge&logo=gnu-bash&logoColor=white"/>
<img src="https://img.shields.io/badge/Compiler-GCC-red?style=for-the-badge&logo=gnu&logoColor=white"/>
</p>

--

`bash
SYSTEM BOOTING...
LOADING KERNEL MODULES...
INITIALIZING PROCESS MANAGER...
INITIALIZING CPU SCHEDULER...
INITIALIZING RESOURCE MANAGER...
INITIALIZING SHELL...
SYSTEM READY ✓
``

</div>

# ⚙️ SYSTEM OVERVIEW

> Welcome to the **Operating Systems Laboratory Repository (2024–25)**

This repository simulates the journey through the core components of an operating system. Through practical implementations using **C Programming**, **Bash Scripting**, and **Ubuntu Linux**, various OS concepts were explored, including process management, CPU scheduling, deadlock avoidance, and shell automation.

---

# 🗂️ SYSTEM ARCHITECTURE

`text
┌───────────────────────────────┐
│        USER PROGRAMS          │
└───────────────┬───────────────┘
                │
┌───────────────▼───────────────┐
│         UNIX SHELL            │
└───────────────┬───────────────┘
                │
┌───────────────▼───────────────┐
│       PROCESS MANAGER         │
├───────────────────────────────┤
│   FCFS Scheduling             │
│   SJF Scheduling              │
│   Priority Scheduling         │
│   fork() System Call          │
└───────────────┬───────────────┘
                │
┌───────────────▼───────────────┐
│      RESOURCE MANAGER         │
├───────────────────────────────┤
│    Banker's Algorithm         │
└───────────────┬───────────────┘
                │
┌───────────────▼───────────────┐
│         UBUNTU LINUX          │
└───────────────────────────────┘
``

---

# 📂 KERNEL MODULES

## 🐧 Module 01 — Linux Command Interface

### Objective

Learn fundamental Linux commands for navigating and managing the file system.

### Commands Practiced

`bash
ls
cd
pwd
mkdir
rm
cp
mv
touch
cat
``

### Skills Acquired

* File Management
* Directory Navigation
* Linux Terminal Usage
* System Interaction

---

## 💻 Module 02 — C Programming in Linux

### Objective

Create, compile, and execute C programs within the Ubuntu environment.

### Workflow

`bash
vi program.c

gcc program.c -o program

./program
``

### Skills Acquired

* Linux Development Workflow
* GCC Compilation
* Terminal-Based Programming

---

## 🔄 Module 03 — Foreground & Background Processes

### Objective

Understand process execution behavior in Linux.

### Commands

`bash
./program

./program &
``

### Concepts Covered

* Foreground Execution
* Background Execution
* Process Monitoring
* Job Control

---

## 🧬 Module 04 — Process Creation using fork()

### Objective

Study process creation using system calls.

### System Call

`c
fork();
``

### Concepts Covered

`text
Parent Process
        │
        ▼
fork()
        │
 ┌──────┴──────┐
 ▼             ▼
Parent      Child
Process     Process
``

### Learning

* Process IDs
* Parent-Child Relationships
* Concurrent Execution

---

## ⏱️ Module 05 — FCFS Scheduling Algorithm

### Objective

Implement the First-Come First-Served CPU Scheduling Algorithm.

### Features

`text
✓ Non-Preemptive Scheduling
✓ Waiting Time Calculation
✓ Turnaround Time Calculation
✓ Gantt Chart Visualization
``

### Scheduling Principle

`text
Arrival Order = Execution Order
``

---

## ⚡ Module 06 — SJF Scheduling Algorithm

### Objective

Implement the Shortest Job First Scheduling Algorithm.

### Features

`text
✓ Shortest Burst Time First
✓ Reduced Waiting Time
✓ Gantt Chart Generation
✓ Turnaround Time Analysis
``

### Scheduling Principle

`text
Shortest Process Executes First
``

---

## 🎯 Module 07 — Priority Preemptive Scheduling

### Objective

Implement Priority Scheduling with Preemption.

### Features

`text
✓ Priority-Based Execution
✓ Dynamic Interruptions
✓ CPU Optimization
✓ Gantt Chart Representation
``

### Scheduling Principle

`text
Higher Priority Process
          ↓
      CPU Assigned
``

---

## 🔒 Module 08 — Banker's Algorithm

### Objective

Implement deadlock avoidance through safe resource allocation.

### Concepts Covered

`text
Available Resources
        │
        ▼
 Resource Request
        │
        ▼
 Safety Check
        │
 ┌──────┴──────┐
 ▼             ▼
Safe        Unsafe
Grant       Deny
``

### Features

* Safe State Detection
* Need Matrix Calculation
* Deadlock Prevention
* Resource Allocation Management

---

## 🐚 Module 09 — Shell Commands & Scripting

### Objective

Automate tasks using shell scripts.

### Example

`bash
#!/bin/bash

echo "Hello Operating System"
``

### Concepts Covered

* Variables
* User Input
* Loops
* Automation
* Script Execution

---

## 🔀 Module 10 — Conditional Statements

### Objective

Implement decision-making logic in shell scripts.

### Example

`bash
if [ condition ]
then
    statement
elif [ condition ]
then
    statement
else
    statement
fi
``

### Concepts Covered

* Branching Logic
* User Decisions
* Conditional Execution
* Automation Control

---

# 📊 SYSTEM PERFORMANCE REPORT

## 🎓 Learning Outcomes

`text
[✓] Process Creation & Management
[✓] Linux Command Line Proficiency
[✓] CPU Scheduling Algorithms
[✓] Deadlock Avoidance Techniques
[✓] Shell Scripting Fundamentals
[✓] GCC Compilation Workflow
[✓] Resource Allocation Concepts
[✓] System-Level Programming Skills
``

---

# 🛠️ SYSTEM CONFIGURATION

| Component            | Technology   |
| -------------------- | ------------ |
| Operating System     | Ubuntu Linux |
| Programming Language | C            |
| Scripting Language   | Bash         |
| Compiler             | GCC          |
| Editor               | vi Editor    |

---

# 📈 OS CONCEPT MAP

`text
OPERATING SYSTEM
│
├── Linux Fundamentals
│   ├── Commands
│   ├── File System
│   └── Terminal Usage
│
├── Process Management
│   ├── fork()
│   ├── Foreground Processes
│   └── Background Processes
│
├── CPU Scheduling
│   ├── FCFS
│   ├── SJF
│   └── Priority Scheduling
│
├── Resource Management
│   └── Banker's Algorithm
│
└── Shell Scripting
    ├── Variables
    ├── Conditions
    ├── Loops
    └── Automation
``

---

# 🏁 SYSTEM SHUTDOWN

`bash
Saving Process Data...
Releasing Resources...
Closing Shell Sessions...
Stopping Scheduler...
Kernel Modules Unloaded...
``

# ✅ CONCLUSION

The Operating Systems Laboratory provided practical exposure to the internal workings of an operating system through real-world implementations and experimentation. The lab strengthened understanding of process management, CPU scheduling, deadlock avoidance, Linux commands, and shell scripting while developing essential system programming skills.

---

<div align="center">

### 🖥️ OPERATING SYSTEMS LABORATORY • 2024–25

`text
SYSTEM STATUS : OPERATIONAL ✓
KERNEL STATUS : LOADED ✓
PROCESS MANAGER : ACTIVE ✓
RESOURCE MANAGER : ACTIVE ✓
LAB COMPLETION : 100% ✓
``

⭐ If you found this repository useful, consider giving it a star!

</div>
```
