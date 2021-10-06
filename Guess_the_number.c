#include<stdio.h>
#include<stdlib.h>                                              // this header file compulsory for generates random number   
#include<time.h>                                                 

int main() { 
    int number , guess , nguesses = 1;
    srand(time(NULL));                                        // the value ( the time in seconds ) isn't stored snywhere.
    number = rand() % 100;                                   // generates random number between 1 to 100
    // printf("The number is %d:", number);
    // keep running the loop until the number is guessed

  printf("Guess the number between 0 to 100 \n");
    do
    {
        printf("Guess the number :");
        scanf("%d", &guess);
        if (guess>number){
            printf("Lower number please!\n");
        }
        else if (guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    } while (guess!=number);
    
    return 0;
}