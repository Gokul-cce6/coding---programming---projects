#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Number Guessing Game
 * Author  : Gokul
 * GitHub  : Gokul-cce6
 * Course  : BroCode - C Programming
 */

int main(){

    srand(time(NULL));

    int guess  = 0;
    int tries  = 0;
    int min    = 1;
    int max    = 100;
    int answer = (rand() % (max - min + 1)) + min;

    printf("\n");
    printf("================================\n");
    printf("      NUMBER GUESSING GAME      \n");
    printf("================================\n");
    printf(" Guess a number between %d - %d \n", min, max);
    printf("================================\n");
    printf("\n");

    do{
        printf("Enter your guess : ");
        scanf("%d", &guess);
        tries++;

        if(guess > answer){
            printf("Too high! Try lower.\n\n");
        }
        else if(guess < answer){
            printf("Too low! Try higher.\n\n");
        }

    }while(guess != answer);

    printf("\n");
    printf("================================\n");
    printf(" Correct! The answer was : %d\n", answer);
    printf(" Total tries             : %d\n", tries);

    if(tries <= 3){
        printf(" Rank : Genius\n");
    }
    else if(tries <= 6){
        printf(" Rank : Excellent\n");
    }
    else if(tries <= 10){
        printf(" Rank : Good\n");
    }
    else{
        printf(" Rank : Keep Practicing\n");
    }

    printf("================================\n");
    printf("\n");

    return 0;
}