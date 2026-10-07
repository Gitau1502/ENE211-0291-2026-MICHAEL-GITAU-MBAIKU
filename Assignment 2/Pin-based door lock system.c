#include <stdio.h>
#include <string.h>

#ifdef _WIN32
    #include <windows.h> // Sleep(1000) on Windows
#else
    #include <unistd.h>  // sleep(1) on Linux/macOS
#endif

int main() {
    const char CORRECT_PIN[] = "1234";
    char pin[50];
    int attempts = 3;
    int authenticated = 0;

    // PIN Authentication Loop
    while (attempts > 0) {
        printf("Enter 4-digit PIN: ");
        scanf("%49s", pin);

        int len = strlen(pin);

        // PIN length validation using if-else-if
        if (len < 4) {
            printf("PIN is too short (must be 4 digits)\n");
        } else if (len > 4) {
            printf("PIN is too long (must be 4 digits)\n");
        } else {
            printf("PIN is exactly 4 digits\n");
        }

        // Check PIN accuracy
        if (strcmp(pin, CORRECT_PIN) == 0) {
            authenticated = 1;
            break;
        } else {
            attempts--;
            if (attempts > 0) {
                printf("Incorrect PIN! Remaining attempts: %d\n\n", attempts);
            }
        }
    }

    // Handle Lockout or Success
    if (!authenticated) {
        printf("\nSystem locked! Wait for 5 seconds...\n");
        for (int i = 5; i >= 1; i--) {
            printf("%d... ", i);
            fflush(stdout);
            #ifdef _WIN32
                Sleep(1000);
            #else
                sleep(1);
            #endif
        }
        printf("\nYou can try again now.\n");
        return 0;
    }

    // Device Menu
    int choice;
    printf("\n=== Device Menu ===\n");
    printf("1. Open Door\n");
    printf("2. Change Username\n");
    printf("3. Change PIN\n");
    printf("4. Exit\n");
    printf("Select an option: ");
    scanf("%d", &choice);

    // Menu options handling via switch-case
    switch (choice) {
        case 1:
            printf("Access granted. Door unlocked\n");
            break;
        case 2:
            printf("Change username feature coming soon.\n");
            break;
        case 3:
            printf("Change PIN feature coming soon.\n");
            break;
        case 4:
            printf("Exiting system.\n");
            break;
        default:
            printf("Invalid option! Please try again.\n");
            break;
    }

    return 0;
}
