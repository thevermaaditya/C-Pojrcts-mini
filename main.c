#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    srand(time(NULL)); // seed the random number generator
    int cMove = rand() % (3-1+1) + 1; // generate a random number between 1 and 3
    int uMove;
    while(1){
        printf("You shall choose you move.\n");
        printf("1)R --- 2)P --- 3)S\n");
        printf("Enter your choise for your selected move: ");
        scanf("%d", &uMove);

        Sleep(3000);

        if(uMove == 1 && cMove == 3){
            printf("Computer\'s move: %d\n", cMove);
            printf("Your move: %d\n", uMove);
            printf("You win!\n");
        }
        else if(uMove == 2 && cMove == 1){
            printf("Computer\'s move: %d\n", cMove);
            printf("Your move: %d\n", uMove);
            printf("You win!\n");
        }
        else if(uMove == 3 && cMove == 2){
            printf("Computer\'s move: %d\n", cMove);
            printf("Your move: %d\n", uMove);
            printf("You win!\n");
        }
        else if(uMove == cMove){
            printf("Computer\'s move: %d\n", cMove);
            printf("Your move: %d\n", uMove);
            printf("It's a tie!\n");
        }
        else{
            printf("Computer\'s move: %d\n", cMove);
            printf("Your move: %d\n", uMove);
            printf("OOPs!, Better luck next time!\n");
        }

        printf("Would you like to play again?(y/n): ");
        char choice;
        scanf(" %c", &choice);
        if(choice == 'y'){
            cMove = rand() % (3-1+1) + 1; // generate
        }
        else if(choice == 'n'){
            break;
        }
        else{
            printf("Invalid choice. Please enter y or n.\n");
            scanf(" %c", &choice);
        }
    }




    return 0;
}
