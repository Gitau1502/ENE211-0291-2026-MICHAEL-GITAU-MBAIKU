#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Ask the user to enter a string
    printf("Enter your name: ");
    scanf("%99s", str);

    // Print the string back to the user
    printf("You entered: %s\n", str);

    // Find and display the length of the string
    printf("Length of string: %zu\n", strlen(str));

    return 0;
}
