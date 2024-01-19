#include<stdio.h>
float faharanite(celsius);
int main()
{
    int celsius;
    printf("Enter the value of celsius\n");
    scanf("%d",&celsius);
    printf("Value od faharanite is %f", faharanite(celsius));
    return 0;
}
float faharanite(celsius){
    
    float result ;
    result = (celsius * 9/5) +32;
    return result;
}