#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,root1,root2;
    printf("Enter the values of a, b and c of a quadratic equation: ");
    scanf("%d%d%d",&a,&b,&c);
    root1=(-b+(sqrt((b*b)-4*a*c)/2*a));
    root2=(-b-(sqrt((b*b)-4*a*c)/2*a));
    printf("\nThe roots of quadratic equation having a=%d, b=%d and c=%d are %d and %d",a,b,c,root1,root2);
}