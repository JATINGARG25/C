#include<stdio.h>
int main()
{
   int age ;
   printf("Enter your age\n");
   scanf("%d",&age);
   if(age>=90){
    printf("you can not drive\n");


   }
   else{
    printf("you can drive\n");
   }
   if (age==50){
    printf("half century\n");

   }
   else {
    printf("not half century\n");
   }
    return 0;
}
