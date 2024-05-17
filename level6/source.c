#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Main function controls the program's primary logic
int main(int argc, char **argv) {
    int (**functionPointer)(void);
    char *buffer;

    buffer = (char *)malloc(64);
    functionPointer = (int (**)(void))malloc(sizeof(int (*)(void))); // Allocate a function pointer with type : int fun(void)
    *functionPointer = m; // Set function pointer to point to function m
    strcpy(buffer, argv[1]); // Copy command line argument to buffer
    return (*functionPointer)(); // Return the call of the function pointed by functionPointer
}

// Function that prints "Nope"
int m() {
    return puts("Nope");
}

// Function that executes a system command to display file contents
int n() {
    return system("/bin/cat /home/user/level7/.pass");
}
