#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char **argv) {
    char buffer[40];          // Buffer to hold data
    int num;
    
    num = atoi(argv[1]);  // Convert argument to integer
    if (num > 9)
        return 1;  // Argument value check

    memcpy(buffer, argv[2], 4 * num);  // Copy data based on input

    if (num == 1464814662) // == 0x574F4C46 == "WOLF"
        execl("/bin/sh", "sh", NULL);  // Security flaw: potential buffer overflow

    return 0;
}