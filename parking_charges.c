#include<stdio.h>
int main()
{
    int hours,bill;
    char vehicle;
    printf("Enter H for HEAVY VEHICLE\nEnter L for LIGHT VEHICLE: ");
    scanf("%c",&vehicle);
    switch(vehicle)
    {
        case 'H':
        case 'h':
        printf("Enter the hours for which your vehicle was parked: ");
        scanf("%d",&hours);
        if(hours>5)
        {
            bill=20*5+(hours-5)*40;
            printf("Please Pay %d",bill);
        }
        else
        {
            bill=hours*20;
            printf("Please pay %d",bill);
        }
        break;
        case 'L':
        case 'l':
        printf("Enter the hours for which your vehicle was parked: ");
        scanf("%d",&hours);
        if(hours>3)
        {
            bill=10*3+(hours-3)*30;
            printf("Please Pay %d",bill);
        }
        else
        {
            bill=hours*10;
            printf("Please pay %d",bill);
        }
        break;
        default:
        printf("WRONG VEHICLE INPUT");
    }
}