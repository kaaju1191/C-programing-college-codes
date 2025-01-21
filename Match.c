#include <stdio.h>
#include <conio.h>

int main() {
    int matchsticks = 21;
    int userPick, computerPick;

    clrscr();
    printf("Welcome to the matchstick game!\n");
    printf("There are 21 matchsticks. You can pick 1, 2, 3 or 4 matchsticks.\n");

    while (matchsticks > 0) {
        printf("Enter the number of matchsticks you want to pick (1-4): ");
        scanf("%d", &userPick);

        if (userPick < 1 || userPick > 4) {
            printf("Invalid input. Please enter a number between 1 and 4.\n");
            getch();
            clrscr();
            continue;
        }

        matchsticks -= userPick;
        printf("You picked %d matchsticks. Remaining matchsticks: %d\n", userPick, matchsticks);

        if (matchsticks <= 0) {
            printf("You lost! The computer wins!\n");
            getch();
            break;
        }

        // Computer's turn
        computerPick = 5 - userPick;
        if (computerPick > matchsticks) {
            computerPick = matchsticks;
        }
        matchsticks -= computerPick;
        printf("Computer picked %d matchsticks. Remaining matchsticks: %d\n", computerPick, matchsticks);

        if (matchsticks <= 0) {
            printf("Computer lost! You win!\n");
            getch();
            break;
        }

        getch();
        clrscr();
    }

    return 0;
}