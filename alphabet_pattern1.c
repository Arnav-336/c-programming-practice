#include<stdio.h>
int main()
{
    int row,col,range;
    printf("Enter the range: ");
    scanf("%d",&range);
    for(row=1;row<=range;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c",col+64);
        }
        printf("\n");
    }
}