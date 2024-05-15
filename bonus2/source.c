#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Global variable for storing the current language setting
int language = 0;

// Function to greet user based on language setting
int greetuser(char* username)
{
    char greeting[100];  // Buffer to hold the greeting message

    // Choose greeting based on the current language setting
    switch (language)
    {
        case 1:  // Finnish
            strcpy(greeting, "Hei ");
            break;
        case 2:  // Dutch
            strcpy(greeting, "Goedemiddag! ");
            break;
        default:  // Default to English
            strcpy(greeting, "Hello ");
            break;
    }

    // Concatenate the username to the greeting
    strcat(greeting, username);

    // Output the complete greeting to the console
    return puts(greeting);
}

// Main function
int main(int argc, const char **argv)
{
    char combinedInput[76];  // Buffer to combine command line arguments

    // Check for correct number of arguments
    if (argc != 3)
        return 1;

    // Clear the buffer and combine first two arguments
    memset(combinedInput, 0, sizeof(combinedInput));
    strncpy(combinedInput, argv[1], 40);
    strncat(combinedInput, argv[2], 35);

    // Check environment variable LANG to set the language
    char *langEnv = getenv("LANG");
    if (langEnv)
    {
        if (!memcmp(langEnv, "fi", 2))
            language = 1;  // Set language to Finnish
        else if (!memcmp(langEnv, "nl", 2))
            language = 2;  // Set language to Dutch
    }

    // Greet the user with combined input as their name
    return greetuser(combinedInput);
}
