#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Global variables
char *auth = NULL;
char *service = NULL;


int main(int argc, char **argv) {
    char buffer[136];  // Buffer to hold input from stdin (there is uncertainty with the size)

    while (1) {
        printf("%p, %p \n", auth, service);
        if (!fgets(buffer, 128, stdin))
            break;

        if (!memcmp(s, "auth ", 5)) {
            auth = malloc(4);  // Allocate 4 bytes for use with auth
            memset(auth, 0, 4);  // Zero out the allocated memory
            if (strlen(buffer + 5) <= 30) {
                strcpy(auth, buffer + 5);
            }
        }
        if (!memcmp(buffer, "reset", 5)) {
            free(auth);
        }
        if (!memcmp(buffer, "service", 6)) {
            service = strdup(buffer + 8);
        }
        if (!memcmp(buffer, "login", 5)) {
            if (auth + 32)
                system("/bin/sh");
            else
                fwrite("Password:\n", 1, 10, stdout);
        }
    }
    return 0;
}