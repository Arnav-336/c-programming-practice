#include<stdio.h>
int main()
{
    int total,gst,disc,bill1,bill2,final;
    printf("Enter the total cost of food: ");
    scanf("%d",&total);
    gst=(12*total)/100;
    disc=(5*total)/100;
    bill1=total+gst-disc;
    bill2=total+gst;
    final=(1000<bill1)?bill1:bill2;
    printf("Your total bill is %d",final);
}