#include<stdio.h>
int main()
{
    int a,b,c,d,e,total,grade;
    printf("Enter your marks in the 5 subjects: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=(a+b+c+d+e)/5;
    grade=total/10;
    switch(grade)
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
        printf("A Grade");
        break;
        case 5:
        printf("B Grade");
        break;
        case 4:
        printf("C Grade");
        break;
        case 3:
        printf("C Grade");
        break;
        case 2:
        printf("C Grade");
        break;
        case 1:
        printf("C Grade");
        break;
        case 0:
        printf("C Grade");
        break;
    }
}