#include<stdio.h>
int main()
{
    int sec,num;
    printf("Enter the time in sec: ");
    scanf("%d",&sec);
    num=sec;
    int hour,minute;
    hour=sec/(60*60);
    minute=(sec-(hour*60*60))%60;
    printf("%d seconds can also be written as %d hours and %d minutes",num,hour,minute);
}