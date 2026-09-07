#include<stdio.h>
int main()
{
    int gross, da, hra, oa, base;
    printf("Enter your base package salary to know your gross salary: ");
    scanf("%d",&base);
    hra=(30*base)/100;
    da=(42*base)/100;
    oa=2000;
    gross=hra+da+oa+base;
    printf("Your gross salary is %d",gross);
}