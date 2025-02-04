#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char username[20] = "user";
char password[20] = "pass";

int get_random_number()
{
    // Generate a random number between 10 and 50
    srand(time(NULL));
    return rand() % 40 + 10;
}

int main_menu()
{
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
void plus_game()
{
    // TODO: declare a counter to count how many correct answers the user has given
    int i;
    for (i = 0; i < 10; i++)
    {
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


        // TODO: check if the user's answer is correct
    }

    // TODO: print the number of correct answers and the accuracy of the user
    // E.g. "You have answered 7 questions correctly. Your accuracy is 70%"
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
void minus_game()
{
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
void multiply_game()
{
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

void divide_game()
{
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
void change_username()
{
    int good = 0;
    while (!good)
    {
        printf("Enter your new username: ");
        char proposed_username[20] = "user";
        scanf("%s", proposed_username);

        if (strlen(proposed_username) > 8)
        {
            strcpy(username, proposed_username);
            printf("Success! \n");
            good = 1;
        }
        else
        {
            printf("Invalid! Username must exceed 8 characters. \n");
        }
    }
}

void change_password()
{
    int good = 0;
    while (!good)
    {
        printf("Enter your new password: ");
        char proposed_password[20] = "user";
        scanf("%s", proposed_password);

        if (strlen(proposed_password) > 8)
        {
            strcpy(username, proposed_password);
            printf("Success! \n");
            good = 1;
        }
        else
        {
            printf("Invalid! Password must exceed 8 characters. \n");
        }
    }
}

int login()
{
    char input_username[20];
    char input_password[20];

    printf("Enter your username: ");
    scanf("%s", input_username);
    printf("Enter your password: ");
    scanf("%s", input_password);

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(input_username, username) == 0 && strcmp(input_password, password) == 0)
        {
            if (strcmp(username, "user") == 0)
            {
                printf("Please Change Your Login:\n");
                change_username();
                change_password();
            }
            return 1;
        }

        printf("Enter your username: ");
        scanf("%s", input_username);
        printf("Enter your password: ");
        scanf("%s", input_password);

        printf("Incorrect Password, Please Try Again\n");
    }

    printf("Too many failed attempts. Returning to main menu.\n");
    return 0;
}

int main()
{
    int logged_in = 0;
    int exit = 0;
    while (!exit)
    {
        char username[20];
        char password[20];

        while (!logged_in)
        {
            printf("Please login\n");
            logged_in = login();
        }

        logged_in = 0;

        // Main menu
        int logout = 0;
        while (!logout)
        {
            int choice = main_menu();

            switch (choice)
            {
            case 1:
                plus_game();
                break;
            case 2:
                minus_game();
                break;
            case 3:
                multiply_game();
                break;
            case 4:
                divide_game();
                break;
            case 5:
                change_username();
                break;
            case 6:
                change_password();
                break;
            case 7:
                logout = 1;
                printf("Back to main menu. \n");
                break;
            case 8:
                logout = 1;
                exit = 1;
                printf("Thanks for playing! \n");
                break;
            default:
                printf("Invalid Option\n");
                break;
            }
        }
    }

    return 0;
}
