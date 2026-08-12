# Skill-01: Web Browser Opens a PDF using fork() and exec()

## Objective

To demonstrate the use of the `fork()` and `exec()` system calls by simulating a web browser opening a downloaded PDF.

---

## Problem Statement

Develop a C program that creates a child process using the `fork()` system call. The child process uses the `exec()` system call to launch the default PDF viewer (`xdg-open`) and open a PDF file. The parent process continues executing independently, demonstrating process creation and program execution in Linux.

---

## Files

- pdf_open.c
- Case Studies.pdf
- Output.png

---

## Commands Used

```bash
gcc pdf_open.c -o pdf_open
./pdf_open
```

---

## Expected Output

```
Google Chrome Started...
Downloading Case Studies PDF...
Student clicks the downloaded PDF.

--- Parent Process ---
Google Chrome is still running...

--- Child Process ---
Opening PDF Viewer...

PDF launched successfully.
Browser process completed.
```

---

## Concepts Demonstrated

- `fork()` creates a child process.
- `exec()` replaces the child process with another program.
- `xdg-open` launches the default PDF viewer.
- Parent and child processes execute independently.
