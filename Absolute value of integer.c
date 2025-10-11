#include<stdio.h>
int main () 
{
int n;
printf("Enter integer number : ");
scanf("%d",&n);
if (n>=0)
{
printf("Absolute value of %d is %d",n,n);
}
else
{
printf("Absolute value of %d is %d",n,(-n));
}
return 0;
}