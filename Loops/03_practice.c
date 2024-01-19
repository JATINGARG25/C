#include<stdio.h>
int main()
{
  //  int i=0,n=3,factorial=1;
    //for(i=1;i<=n;i++){
      //  factorial*=i;
    //}
    //printf("the value of factorial %d is %d ",n,factorial);
    int n ,i=1,factorial=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    while(i<=n){
        factorial*=i;
        i++;
    }
    printf("the value of factorial %d is %d ",n,factorial);
    return 0;

}