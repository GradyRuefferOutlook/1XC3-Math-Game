#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char username[20] = "user";
char password[20] = "pass";

int get_random_number() {
    // Generate a random number between 10 and 50
    srand(time(NULL));
    return rand() % 40 + 10;
}

int main_menu() {
    printf("1. The + game\n");
    printf("2. The - game\n");
    printf("3. The * game\n");
    printf("4. The / game\n");
    printf("5. Change username\n");
    printf("6. Change password\n");
    printf("7. Logout\n");
    printf("8. Exit\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

int login() {
    char input_username[20];
    char input_password[20];

    printf("Enter your username: ");
    scanf("%s", input_username);
    printf("Enter your password: ");
    scanf("%s", input_password);

    // TODO: use a loop to check username and password
    // If the user enters the wrong username or password 3 times, return 0
    // If the login is successful but the user is using the default username and password,
    // ask the user to change the username and password and return 1
    // If the login is successful, return 1
    return 0;
}

void plus_game() {
    int correct = 0;
    int i;
    for (i = 0; i < 10; i++) {
        int a = get_random_number();
        int b = get_random_number();
        int result = a + b;
        int user_result;
        printf("%d + %d = ", a, b);
        scanf("%d", &user_result);

        if (user_result == result) {
            printf("Correct\n");
            correct++;
        } else {
            printf("Incorrect. The correct answer is %d\n", result);
        }
    }

    printf("You have answered %d questions correctly. Your accuracy is %d%%\n", correct, correct * 10);

}

void minus_game() {
    int correct = 0;
    int i;
    for (i = 0; i < 10; i++) {
        int a = get_random_number();
        int b = get_random_number();
        int result = a - b;
        int user_result;
        printf("%d - %d = ", a, b);
        scanf("%d", &user_result);

        if (user_result == result) {
            printf("Correct\n");
            correct++;
        } else {
            printf("Incorrect. The correct answer is %d\n", result);
        }
    }
    printf("You have answered %d questions correctly. Your accuracy is %d%%\n", correct, correct * 10);
}

void multiply_game() {
    int correct = 0;
    int i;
    for (i = 0; i < 10; i++) {
        int a = get_random_number();
        int b = get_random_number();
        int result = a * b;
        int user_result;
        printf("%d * %d = ", a, b);
        scanf("%d", &user_result);

        if (user_result == result) {
            printf("Correct\n");
            correct++;
        } else {
            printf("Incorrect. The correct answer is %d\n", result);
        }
    }
    printf("You have answered %d questions correctly. Your accuracy is %d%%\n", correct, correct * 10);
}

void divide_game() {
    int correct = 0;
    int i;
    for (i = 0; i < 10; i++) {
        int a = get_random_number();
        int b = get_random_number();
        int result = a / b;
        int user_result;
        printf("%d / %d = ", a, b);
        scanf("%d", &user_result);

        if (user_result == result) {
            printf("Correct\n");
            correct++;
        } else {
            printf("Incorrect. The correct answer is %d\n", result);
        }
    }
    printf("You have answered %d questions correctly. Your accuracy is %d%%\n", correct, correct * 10);

}

void change_username() {
    printf("Enter your new username: ");
    char new_username[20];
    scanf("%s", new_username);

    if (strstr(new_username, "admin") != NULL) {
        printf("You can't have admin in your username\n");
        main_menu();
        return;
    } else if (strstr(new_username, "root") != NULL) {
        printf("You can't have admin in your username\n");
        main_menu();
        return;
    } else if (strstr(new_username, "guesr") != NULL) {
        printf("You can't have admin in your username\n");
        main_menu();
        return;
    }

    strcpy(username, new_username);
    printf("Your username has been changed to %s\n", username);

}

void change_password() {

}

int main() {
    int logged_in = 0;

    while (1) {
        if (!logged_in) {
            // Login process
            printf("Please login\n");
            if (!login()) {
                printf("Login failed\n");
                return 1;
            }
            logged_in = 1;
            // TODO: print "welcone, <username>"
        }
        
        // Main menu
        int choice = main_menu();
        // TODO: check user's choice and invoke the corresponding function
        // If the user has entered an invalid choice, print "Invalid choice"
    }

    return 0;
}
