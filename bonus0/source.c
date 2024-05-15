#include <stdio.h>
#include <string.h>
#include <unistd.h>

// Read input from user and store in dest, given a prompt
char* process_input(char* dest, char* prompt) {
    char buffer[4104];

    puts(prompt);  // Display the prompt
    read(0, buffer, 4096);  // Read up to 4096 bytes from standard input
    buffer[strcspn(buffer, "\n")] = '\0';  // Replace newline with null terminator
    strncpy(dest, buffer, 20);  // Copy at most 20 characters to dest

    return dest;
}

// Concatenate two user inputs into dest
char* concatenate_inputs(char* dest) {
    char firstInput[20];
    char secondInput[20];

    process_input(firstInput, " - ");
    process_input(secondInput, "- ");
    strcpy(dest, firstInput);
    strcat(dest, secondInput);  // Concatenate second input to dest

    return dest;
}

// Main program function
int main(int argc, char** argv) {
    char combinedInput[42];

    concatenate_inputs(combinedInput);
    puts(combinedInput);  // Output the result

    return 0;
}
