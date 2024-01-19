#include<stdio.h>
int main ()
{
    int a=5;
    int i=0;
    while(i<10){
        i++;
        if(i!=a){
            continue;
            printf("%d\n",i);
            
        }
        else {
            printf("%d\n",i);
        }

    }
    return 0;
}
