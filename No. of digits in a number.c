#include<stdio.h>
int main () 
{
int n,m;
printf("Enter any digit number : ");
scanf("%d",&n);
m=n;
int count=0;
while (n>0)
{
n=n/10;
count++;
}
printf("Total number of digits in %d is %d",m,count);
return 0;
}