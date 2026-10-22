#include<stdio.h>
int main()
{
    int a,b,c,d,e,total,avg,grade;
    printf("Enter you marks in 5 subjects out of 100: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    total=avg/10;
    switch(total)
    {
        case 10:
        printf("O Grade");
        break;
        case 9:
        printf("O Grade");
        break;
        case 8:
        printf("E Grade");
        break;
        case 7:
        printf("A Grade");
        break;
        case 6:
        printf("B Grade");
        break;
        case 5:
        printf("C Grade");
        break;
        case 4:
        printf("D Grade");
        break;
        default:
        printf("Wrong Input");
    }
}