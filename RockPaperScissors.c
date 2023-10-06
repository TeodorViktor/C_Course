#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>


int main(void){

    // Seed the random number generator
    srand(time(NULL));

    // Array of moves
    char *moves[] = {"scissors", "paper", "rock"};

    // Prompt the player for their move
    printf("Enter your move (scissors, paper, or rock): ");
    char player_move[10];
    scanf("%s", player_move);

    // Choose a random move for the computer
    int random_index = rand() % 3;
    char *computer_move = moves[random_index];

    // Determine the winner
    int player_wins = 0;
    int computer_wins = 0;

    if (strcmp(player_move, "scissors") == 0) {
        if (strcmp(computer_move, "paper") == 0) {
            player_wins = 1;
        } else if (strcmp(computer_move, "rock") == 0) {
            computer_wins = 1;
        }
    } else if (strcmp(player_move, "paper") == 0) {
        if (strcmp(computer_move, "rock") == 0) {
            player_wins = 1;
        } else if (strcmp(computer_move, "scissors") == 0) {
            computer_wins = 1;
        }
    } else if (strcmp(player_move, "rock") == 0) {
        if (strcmp(computer_move, "scissors") == 0) {
            player_wins = 1;
        } else if (strcmp(computer_move, "paper") == 0) {
            computer_wins = 1;
        }
    } else {
        printf("Invalid move!\n");
        return 1;
    }

    // Print the results
    printf("You chose %s\n", player_move);
    printf("The computer chose %s\n", computer_move);
    if (player_wins) {
        printf("You win!\n");
    } else if (computer_wins) {
        printf("The computer wins!\n");
    } else {
        printf("It's a tie!\n");
    }

    return 0;

}