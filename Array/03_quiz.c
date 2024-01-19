#include<stdio.h>
int display(int x,int y){
       int result={x,y};
       return result;                             // wrong answer********
}
int main()
{
    int qnt;
    int prc;
    printf("Enter the value of quantity\n");
    scanf("%d",&qnt);
    printf("Enter the value of price\n");
    scanf("%d",&prc);
    int array[qnt][prc];
for(int i=0;i<qnt;i++){
    for( int j=0;j<prc;j++){
printf("Price for quantity %d is %d\n",qnt+1,prc+1);
    }
}
    return 0;
}