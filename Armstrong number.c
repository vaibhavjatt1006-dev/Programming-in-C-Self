#include<stdio.h>
int main () 
{
int n;
printf("Enter positive number : ");
scanf("%d",&n);
int m=n;
int arm=0;
while (n>0)
{
int c=n%10;
arm=arm+c*c*c;
n=n/10;
}
if ( arm == m)
{
printf("%d is an armstrong number",m);
}
else
{
printf("%d is not an armstrong number",m);
}
return 0;
}