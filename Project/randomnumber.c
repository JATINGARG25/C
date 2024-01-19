#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number;
    int guess;
    int nguesses=1;
    srand(time(0));
    number=rand()%100 + 1;                              // generate a random number between 1 and 100
    printf("THE NUMBER IS %d\n",number);

    return 0;
}