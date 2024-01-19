#include<stdio.h>
#include<string.h>
typedef struct complex{
    int real;
    char complex;
}comp;
void display(comp c){
    printf("The value of real part is %d\n",c.real);
    printf("The value of Imaginary part is %d",c.complex);
}
int main()
{
    comp nums[5];
    for( int i=0;i<5;i++){
        printf("Enter the real value for %d num\n",i+1);
        scanf("%d",&nums[i].real);
        printf("Enter the complex value for %d num\n",i+1);
        scanf("%d",&nums[i].complex);
    }
    for( int i=0;i<5;i++){
        display(nums[i]);
    }
    return 0;
    
}