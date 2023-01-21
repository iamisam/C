#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

 int main()
{ 
    int num,guess,ng=1;
    srand(time(0));
    num = rand()%100 +1;
    //keep running the loop until the number is guessed
    do{
        printf("Guess the number between 1 and 100\n");
        scanf("%d",&guess);
        if(guess>num)
        {
            printf("Lower number please \n");
        }
        else if(num>guess)
        {
            printf("Higher number please \n");
        }
        else
        {
            printf("You guessed the number in %d attempts \n",ng);
        }
        ng++;
    }while(guess!=num);
     return 0; 

}