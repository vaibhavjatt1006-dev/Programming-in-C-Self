#include<stdio.h>
int main () 
{
int n,a,b,c,s;
printf("Enter three digit no. : ");
scanf("%d",&n);
a=n/100;
b=(n-a*100)/10;
c=n-a*100-b*10;
s=a+b+c;
printf("The sum of %d digits is : %d",n,s);
return 0;
}