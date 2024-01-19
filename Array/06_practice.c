#include<stdio.h>
void multiply(int *mul,int m,int n){
    printf("The multiplication table of %d is ; \n",m);
    for(int i=0;i<n;i++){
        mul[i]=m*(i+1);
    }for(int i =0;i<n;i++){
        printf("%d*%d = %d\n",m,i+1,mul[i]);
    }
    printf("OOOOOOOOOOOOOOOMMMMMMMMMMMMMMMMMMMMMMFFFFFFFFFFFFFFFFFOOOOOOOOOOOOOOOOOO  \n");
}
int  main()
{
    int m;
    int n;
printf("Enter the value of m\n");
scanf("%d",&m);
printf("Enter the value of n\n");
scanf("%d",&n);
    int mul[m][n];
    multiply(mul[m],m,n);

    return 0;

}