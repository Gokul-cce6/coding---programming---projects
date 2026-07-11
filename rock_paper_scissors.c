#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main(){

    srand(time(NULL));

    printf("***ROCK PAPER SCISSORS***\n");

    int userChoice     = getUserChoice();
    int computerChoice = getComputerChoice();

    checkWinner(userChoice, computerChoice);

    return 0;
}

int getComputerChoice(){
    return (rand() % 3) + 1;
}

int getUserChoice(){

    int choice = 0;

    do{
        printf("\nchoose an option\n");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("enter your choice: ");
        scanf(" %d", &choice);

    }while(choice < 1 || choice > 3);

    return choice;
}

void checkWinner(int userChoice, int computerChoice){

    printf("\n");

    if(userChoice == computerChoice){
        printf("IT'S A TIE!\n");
    }
    else if(userChoice == 1 && computerChoice == 2){
        printf("COMPUTER WINS! Paper covers Rock!\n");
    }
    else if(userChoice == 1 && computerChoice == 3){
        printf("YOU WIN! Rock crushes Scissors!\n");
    }
    else if(userChoice == 2 && computerChoice == 1){
        printf("YOU WIN! Paper covers Rock!\n");
    }
    else if(userChoice == 2 && computerChoice == 3){
        printf("COMPUTER WINS! Scissors cuts Paper!\n");
    }
    else if(userChoice == 3 && computerChoice == 1){
        printf("COMPUTER WINS! Rock crushes Scissors!\n");
    }
    else if(userChoice == 3 && computerChoice == 2){
        printf("YOU WIN! Scissors cuts Paper!\n");
    }
}