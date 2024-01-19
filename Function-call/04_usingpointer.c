#include<stdio.h>
int sumandavg(int x ,int y, int *sum,float *avg){
    *sum=x+y;
    *avg=(float)(*sum)/2;
}
int main()
{
    int a,b;
    int sum;
    float avg;
printf("Enter the value of a\n");
scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
sumandavg(a,b,&sum,&avg);
printf("Value of sum is %d.\n",sum);
printf("Value of avg is %f.\n",avg);
    return 0;
}