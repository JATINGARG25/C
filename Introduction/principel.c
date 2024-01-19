#include <stdio.h>
int main()
{
    int principle=10, rate=1, time=10;
    int simpleinterest = (principle * rate * time) / 100;
    printf("simple interest %d", simpleinterest);
    return 0;
}
