/*
===========================================================
                    PROBLEM STATEMENT
===========================================================

Write a C program to demonstrate the exec() system call.
Create a child process using fork(). The child process
should execute another program (factorial.c) using execl(),
while the parent process waits for the child process and
then prints the square of the entered number.

===========================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    int num;
    pid_t pid;
    char str[20];

    printf("Enter a number: ");
    scanf("%d", &num);

    pid = fork();

    if (pid < 0)
    {
        printf("Fork Failed\n");
        exit(1);
    }

    if (pid == 0)
    {
        // Child Process

        sprintf(str, "%d", num);

        execl("./factorial", "factorial", str, NULL);

        // Executes only if exec fails

        perror("exec failed");
    }
    else
    {
        // Parent Process

        wait(NULL);

        printf("\n--- Parent Process ---\n");
        printf("Square of %d = %d\n", num, num * num);
    }

    return 0;
}

/*
===========================================================
                    SAMPLE OUTPUT
===========================================================

Enter a number: 5

--- Child Process (exec) ---
Factorial of 5 = 120

--- Parent Process ---
Square of 5 = 25

===========================================================
*/
