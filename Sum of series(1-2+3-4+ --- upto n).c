#include<stdio.h>
int main () 
{
int n;
printf("Enter number to terms to find the sum : ");
scanf("%d",&n);
int sum=0;
for ( int i=1; i<=n; i++)
{
if (i%2==0)
{
sum=sum-i;
}
else
{
sum=sum+i;
}
}
printf("Sum of given series is : %d",sum);
return 0;
}