#include<stdio.h>
int main()
{
    int sec=7468;
    int hour,minute;
    hour=sec/(60*60);
    minute=(sec-(hour*60*60))%60;
    printf("7468 seconds can also be written as %d hours and %d minutes",hour,minute);
}