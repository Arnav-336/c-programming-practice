#include<stdio.h>
int main()
{
    int day,y,m,d,temp;
    printf("Enter the number of days: ");
    scanf("%d",&day);
    temp=day;
    y=day/365;
    day=day%365;
    m=day/30;
    day=day%30;
    d=day;
    printf("%d days is equal to %d years, %d months and %d days",temp,y,m,d);
}