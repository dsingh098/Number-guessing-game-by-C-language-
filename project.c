#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
    srand(time(0));

    int randomNumber = (rand() % 100) +1;
    int No_of_guessess = 0;
    int guessed;

    do
    {
        printf("guess the number");
        scanf("%d", &guessed);
        No_of_guessess++;
        if (guessed > randomNumber){
            printf("please enter small number\n");
        } else
        {
            printf("please enter bigger number\n");
        }
        
    } while (guessed!=randomNumber);

    printf("you the guessed the number in %d", No_of_guessess);
    
    

    return 0;
}