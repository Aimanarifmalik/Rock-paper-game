#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_user_choice() {
    int choice;
    printf("Enter your choice:\n");
    printf("0 - Rock\n");
    printf("1 - Paper\n");
    printf("2 - Scissors\n");
    scanf("%d", &choice);
    return choice;
}

int get_computer_choice() {
    srand(time(NULL));
    return rand() % 3;
}

void print_choices(int choice) {
    switch (choice) {
        case 0:
            printf("Rock.\n");
            break;
        case 1:
            printf("Paper.\n");
            break;
        case 2:
            printf("Scissors.\n");
            break;
    }
}

void determine_winner(int user_choice, int computer_choice) {
    if (user_choice == computer_choice) {
        printf("It's a tie!\n");
    } else if ((user_choice == 0 && computer_choice == 2) ||
               (user_choice == 1 && computer_choice == 0) ||
               (user_choice == 2 && computer_choice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    int user_choice, computer_choice;

    printf("Welcome to Rock-Paper-Scissors!\n");

    user_choice = get_user_choice();
    computer_choice = get_computer_choice();

    printf("You chose ");
    print_choices(user_choice);

    printf("Computer chose ");
    print_choices(computer_choice);

    determine_winner(user_choice, computer_choice);

    return 0;
}

