#include<stdio.h>
int main()
{
    int grade ;
    printf("enter your marks \n");
    scanf("%d",&grade);

    if (grade>=90 && grade<=100){
        printf("YOUR GRADE IS 'A'.\n");
    }
else if (grade>=80 && grade<=90){
    printf("YOUR GRADE IS 'B'.\n");
}
else if (grade>=70 && grade<=80){
    printf("YOUR GRADE IS 'C'.\n");
}
else if (grade>=60 && grade<=70){
    printf("YOUR GRADE IS 'D'.\n");
}
else if (grade>=50 && grade<=60){
    printf("YOUR GRADE IS 'E'.\n");
}
else if (grade>=40 && grade <=50){
    printf("YOUR GRADE IS 'F'.\n");
}
else {
    printf ("YOU ARE FAIL\n");
}






    return 0;
}
