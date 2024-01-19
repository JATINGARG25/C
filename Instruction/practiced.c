#include<stdio.h>
int main()
{
    float income ;
    float  tax;
    printf("enter your income\n");
    scanf("%f",&income);

    if (income<250000){
        printf("NO NEED TO PAY INCOME TAX\n");
    }
        if (income>=250000 && income<=500000)
        {
            tax = tax + 0.05*(income-250000);
        }
        if (income>500000 && income<=1000000){
            tax = tax + 0.20*(income-500000);
        }
        if (income>1000000)
        {
            tax = tax + 0.30*(income-1000000);
        }
        printf("your total income tax to be paid is %f\n",tax);
    return 0;
}