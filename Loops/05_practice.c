#include<stdio.h>
int main()
{
    int n , i,prime ;
    printf(" enter the value of n\n ");
    scanf("%d",&n);

    for(i=2;i<n;i++){
    if (n%i==0)
    {prime==1;
    
        break;
    }
    }
    if(prime==1){
    printf("this is not  prime number");
    }
    else{
        printf("this is  a prime number ");
    }
    return 0;
}