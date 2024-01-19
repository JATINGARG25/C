#include <stdio.h>
int main()
{
    int i =11;

    do{
        printf("the value of i is %d\n",i);
        if (i==100){
            break;
        }
        i++;
        

    }while(i>10);
    return 0;
}