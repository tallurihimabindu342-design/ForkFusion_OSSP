/*
===========================================================
                    PROBLEM STATEMENT
===========================================================

Write a C program using the fork() system call to create a
child process. The child process should calculate the
factorial of a given number, while the parent process should
calculate the square of the same number. The parent process
must wait for the child process to complete before displaying
the square.

===========================================================
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    int pid, num;

    printf("Enter num: ");
    scanf("%d", &num);

    pid = fork();          // Creates child process

    if (pid < 0)
    {
        printf("Fail to create new process\n");
        exit(0);
    }
    else if (pid == 0)
    {
        // Child Process - Calculate Factorial

        unsigned int fact = 1;
        int temp = num;

        while (temp > 0)
        {
            fact = fact * temp;
            temp--;
        }

        printf("Factorial of %d is %u\n", num, fact);
    }
    else
    {
        // Parent Process - Calculate Square

        int sqr;

        wait(NULL);        // Parent waits for child process to complete

        sqr = num * num;

        printf("Square of %d is %d\n", num, sqr);
    }

    return 0;
}

/*
===========================================================
                    SAMPLE OUTPUT
===========================================================

Enter num: 5

Factorial of 5 is 120
Square of 5 is 25

===========================================================
*/
