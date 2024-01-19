#include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
} date;
void display(date d)
{
    printf("The date is %d/%d/%d.\n", d.date, d.month, d.year);
}
int datefun(date d1, date d2)
{
    // Make decision on the basis of year comparision
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    // Make decision on the basis of month comparision
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    // Make decision on the basis of date comparision
    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }
    return 0;
}
int main()
{
    date d1 = {04, 12, 2022};
    date d2 = {04, 12, 2022};
    display(d1);
    display(d2);
    int a= datefun(d1,d2);
    printf("Date comparision function returns : %d\n",a);
    return 0;
}