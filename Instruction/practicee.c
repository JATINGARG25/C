#include<stdio.h>
int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    printf("enter num1\n");
    scanf("%d",&num1);
printf("enter num2\n");
scanf("%d",&num2);
printf("enter num3\n");
scanf("%d",&num3);
printf("enter num4\n");
scanf("%d",&num4);
if (num1>=num2 && num1>=num3 && num1>=num4){
    printf("%d id the largest number ",num1);
}    
if (num2>=num1 && num2>=num3 && num2>=num4){
printf("%d is the largest number",num2);}
if (num3>=num1 && num3>=num2 && num3>=num4){
printf("%d is the largest number",num3);}
if (num4>=num1 && num4>=num3 && num4>=num2){
printf("%d is the largest number",num4);}
    return 0;
}