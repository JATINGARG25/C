#include<stdio.h>
int main()
// array is a collection of similar elements     **
{
    // naive(masoom) way to create 4 integers 
   // int marks1,marks2,marks3,marks4;
   // marks1=34;
   // marks2=56;
   // marks3=67;
   // marks4=49;

   int marks[4];                         // using array 
   marks[0]=45;
   marks[1]=56;
   marks[2]=89;
   marks[3]=24;
printf("Marks in hindi is %d.\n",marks[0]);
printf("Marks in english is %d.\n",marks[1]);
printf("Marks in sanskrit is %d.\n",marks[2]);
printf("Marks in urdu is %d.\n",marks[3]); 
    return 0;
}