#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char **argv, const char **envp) {
    char buffer[132];
    FILE *file;

    file = fopen("/home/user/end/.pass", "r");
    // Initialize buffer and check for valid file and correct number of arguments
    memset(buffer, 0, sizeof(buffer));
    if (!file || argc != 2)
        return -1;

    // Read password from file, manipulate it based on argument, then check
    fread(buffer, 1, 66, file);
    buffer[65] = '\0'; // Ensure string termination
    buffer[atoi(argv[1])] = '\0'; // Shorten string based on arguments
    // Read from the file again, but add after the end of what was previously read
    fread(buffer + 66, 1, 65, file);
    fclose(file);

    // Execute command shell if input matches file contents
    if (!strcmp(buffer, argv[1]))
        execl("/bin/sh", "sh", NULL);
    else 
        puts(buffer + 66); // Output the additional data

    return 0;
}