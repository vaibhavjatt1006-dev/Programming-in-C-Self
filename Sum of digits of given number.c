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
sum=sum+(n%10);
n=n/10;
}
printf("Sum of digits of %d is : %d",m,sum);
return 0;
}