#include<stdio.h>
int main () 
{
int n,a=0;
printf("Enter positive number : ");
scanf("%d",&n);
for (int i=2; i<n; i++)
{
if (n%i==0)
{
a=1;
break;
}
}
if(a==1)
{
printf("%d is not a prime number",n);
}
else if ( n==1)
{
printf("%d is not a prime number",n);
}
else
{
printf("%d is a prime number",n);
}
return 0;
}