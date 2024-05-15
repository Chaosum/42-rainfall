#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Global variables
char c[80]; // Buffer to hold data read from file

// Main function controls the program's primary logic
int main(int argc, char **argv) {
    if (argc < 3) {
        fprintf(stderr, "Usage: %s <arg1> <arg2>\n", argv[0]);
        return 1; // Exit if not enough arguments
    }

    void *p1 = malloc(8);
    void *p2 = malloc(8);

    *(int*)p1 = 1; // Set some flag or identifier
    *((int*)p1 + 1) = (int)malloc(8); // Allocate memory to hold string data

    *(int*)p2 = 2; // Set some flag or identifier
    *((int*)p2 + 1) = (int)malloc(8); // Allocate memory to hold string data

    strcpy((char*)*((int*)p1 + 1), argv[1]); // Copy first argument
    strcpy((char*)*((int*)p2 + 1), argv[2]); // Copy second argument

    FILE *file = fopen("/home/user/level8/.pass", "r"); // Open a file
    if (!file) {
        perror("Failed to open file");
        return 1;
    }
    fgets(c, sizeof(c), file); // Read data into global buffer 'c'
    fclose(file); // Close the file

    puts("~~"); // Print separator for output clarity

    return 0; // Return success
}

// Print current time and string stored in global buffer 'c'
int m() {
    time_t now = time(NULL);
    return printf("%s - %ld\n", c, (long)now);
}
