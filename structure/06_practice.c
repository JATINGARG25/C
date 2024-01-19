#include <stdio.h>
typedef struct timestamp
{
    int year;
    int month;
    int date;
    int hour;
    int min;
    int sec;
} ts;
void display(ts dt)
{
    printf("Timestamp is %d/%d/%d %d:%d:%.2d\n", dt.year, dt.month, dt.date, dt.hour, dt.min, dt.sec);
}
int datefun(ts dt1, ts dt2)
{
    // Make decision on the basis of year comparision
    if (dt1.year > dt2.year)
    {
        return 1;
    }
    if (dt1.year < dt2.year)
    {
        return -1;
    }
    // Make decision on the basis of month comparision
    if (dt1.month > dt2.month)
    {
        return 1;
    }
    if (dt1.month < dt2.month)
    {
        return -1;
    }
    // Make decision on the basis of date comparision
    if (dt1.date > dt2.date)
    {
        return 1;
    }
    if (dt1.date < dt2.date)
    {
        return -1;
    }
    // Make decision on the basis of hour comparision
    if (dt1.hour > dt2.hour)
    {
        return 1;
    }
    if (dt1.hour < dt2.hour)
    {
        return -1;
    }
    // Make decision on the basis of minute comparision
    if (dt1.min > dt2.min)
    {
        return 1;
    }
    if (dt1.min < dt2.min)
    {
        return -1;
    }
    // Make decision on the basis of second comparision
    if (dt1.sec > dt2.sec)
    {
        return 1;
    }
    if (dt1.sec < dt2.sec)
    {
        return -1;
    }
    return 0;
}
int main()
{
    ts dt1 = {2022, 10, 10, 10, 44, 01};
    ts dt2 = {2022, 10, 10, 10, 44, 00};
    display(dt1);
    display(dt2);
    int a = datefun(dt1, dt2);
    printf("Date comparision function returns : %d\n", a);
    return 0;
}