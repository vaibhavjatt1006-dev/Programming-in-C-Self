#include<stdio.h>
int main () 
{
int n;
printf("Enter any digit number : ");
scanf("%d",&n);
int m=n;
int rev=0;
while (n>0)
{
int d=n%10;
rev=rev*10+d;
n=n/10;
}
int sum=m+rev;
printf("Reverse of %d is : %d\n",m,rev);
printf("Sum of %d and %d is : %d",m,rev,sum);
return 0;
}