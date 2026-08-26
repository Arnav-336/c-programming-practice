#include<stdio.h>
int main()
{
    int tot;
    printf("Enter the total amount: ");
    scanf("%d",&tot);
    if(0<tot&&tot<=1000)
    printf("Sorry, No discount for you");
    else if(1000<=tot&&tot<=4999)
    printf("Congrations, You are eligible for 10%% discount");
    else if(4999<=tot&&tot<=9999)
    printf("Congrations, You are eligible for 20%% discount");
    else if(tot>=9999)
    printf("Congrations, You are eligible for 30%% discount");
    else
    printf("What are you looking at?, get lost");
}