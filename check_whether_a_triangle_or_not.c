#include<stdio.h>
int main()
{
    int ang1,ang2,ang3,sum;
    printf("Enter the angles of the triangle to check: ");
    scanf("%d%d%d",&ang1,&ang2,&ang3);
    sum=ang1+ang2+ang3;
    if(sum==180&&ang1==ang2&&ang2==ang3&&ang1>0&&ang2>0&&ang3>0)
    printf("The triangle is an equilateral triangle");
    else if(sum==180&&(ang1==ang2||ang1==ang3||ang2==ang3)&&ang1>0&&ang2>0&&ang3>0)
    printf("The triangle is an isoceles triangle");
    else if(sum==180&&ang1>0&&ang2>0&&ang3>0)
    printf("The triangle is a scalene traingle");
    else
    printf("The triangle doesn't exist");
}