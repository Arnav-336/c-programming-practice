#include<stdio.h>
int main()
{
    int no1,no2,gcd,lcm,temp1,temp2;
    printf("Enter two values: ");
    scanf("%d%d",&no1,&no2);
    temp1=no1;
    temp2=no2;
    while(no1!=no2)
    {
        if(no1>no2)
        {
            no1=no1-no2;
        }
        else
        {
            no2=no2-no1;
        }
    }
    gcd=no1;
    printf("GCD of %d and %d is %d\n",temp1,temp2,gcd);
    lcm=(temp1*temp2)/gcd;
    printf("LCM of %d and %d is %d",temp1,temp2,lcm);
}