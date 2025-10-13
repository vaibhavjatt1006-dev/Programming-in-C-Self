#include<stdio.h>
int main () 
{
int n;
printf("Enter any digit number : ");
scanf("%d",&n);
int m=n;
int sum=0;
while(n>0)
{
int e=n%10;
if (e%2==0)
{
sum=sum+e;
}
n=n/10;
}
printf("Sum of even digits in %d is : %d",m,sum);
return 0;
}