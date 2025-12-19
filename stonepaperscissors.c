#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    char playAgain;

    // Initialize random number generator
    srand(time(NULL));

    do {
        printf("\n--- STONE PAPER SCISSORS GAME ---\n");
        printf("1. Stone\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &userChoice);

        // Computer choice (1 to 3)
        computerChoice = (rand() % 3) + 1;

        // Display choices
        printf("\nYou chose: ");
        if (userChoice == 1) printf("Stone");
        else if (userChoice == 2) printf("Paper");
        else if (userChoice == 3) printf("Scissors");
        else {
            printf("Invalid Choice!");
            continue;
        }

        printf("\nComputer chose: ");
        if (computerChoice == 1) printf("Stone");
        else if (computerChoice == 2) printf("Paper");
        else printf("Scissors");

        // Game logic
        printf("\n\nResult: ");
        if (userChoice == computerChoice) {
            printf("It's a Draw!");
        }
        else if ((userChoice == 1 && computerChoice == 3) ||
                 (userChoice == 2 && computerChoice == 1) ||
                 (userChoice == 3 && computerChoice == 2)) {
            printf("You Win!");
        }
        else {
            printf("Computer Wins!");
        }

        printf("\n\nDo you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\nThank you for playing!\n");

    return 0;
}
