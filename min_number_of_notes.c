#include<stdio.h>
int main()
{
    int note500,note200,note100,note50,note20,note10,no,num;
    printf("Enter the value: ");
    scanf("%d",&no);
    num=no;
    note500=no/500;
    no=no%500;
    note200=no/200;
    no=no%200;
    note100=no/100;
    no=no%100;
    note50=no/50;
    no=no%50;
    note20=no/20;
    no=no%20;
    note10=no/10;
    no=no%10;
    printf("%d require notes of 500=%d, 200=%d, 100=%d, 50=%d, 20=%d, 10=%d and %d",num,note500,note200,note100,note50,note20,note10,no);
}