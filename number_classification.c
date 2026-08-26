#include<stdio.h>
int main()
{
   int no;
   printf("Enter the number: ");
   scanf("%d",&no);
   if(no>0)
   printf("Positive number");
   else if(no<0)
   printf("Negative number");
   else
   printf("Zero");
}