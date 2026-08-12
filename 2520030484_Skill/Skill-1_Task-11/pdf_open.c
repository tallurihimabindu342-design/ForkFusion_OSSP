/*
===========================================================
                    PROBLEM STATEMENT
===========================================================

Write a C program using the fork() and exec() system calls
to simulate a web browser opening a downloaded PDF.

The parent process represents the web browser.
The child process launches the default PDF viewer using
xdg-open. The browser continues running while the PDF
opens in a separate process.

===========================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;

    printf("Google Chrome Started...\n");
    printf("Downloading Case Studies PDF...\n");
    printf("Student clicks the downloaded PDF.\n");

    pid = fork();

    if (pid < 0)
    {
        printf("Fork Failed!\n");
        return 1;
    }

    if (pid == 0)
    {
        // Child Process

        printf("\n--- Child Process ---\n");
        printf("Opening PDF Viewer...\n");

        execlp("xdg-open", "xdg-open", "Case Studies.pdf", NULL);

        perror("exec failed");
        exit(1);
    }
    else
    {
        // Parent Process

        printf("\n--- Parent Process ---\n");
        printf("Google Chrome is still running...\n");

        wait(NULL);

        printf("PDF Viewer Closed.\n");
        printf("Browser Exiting...\n");
    }

    return 0;
}

/*
===========================================================
                    SAMPLE OUTPUT
===========================================================

Google Chrome Started...
Downloading Case Studies PDF...
Student clicks the downloaded PDF.

--- Parent Process ---
Google Chrome is still running...

--- Child Process ---
Opening PDF Viewer...

PDF Viewer Closed.
Browser Exiting...

===========================================================
*/
