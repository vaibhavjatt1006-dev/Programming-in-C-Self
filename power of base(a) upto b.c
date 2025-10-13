#include<stdio.h>
int main () 
{
int a;
printf("Enter base : ");
scanf("%d",&a);
int b;
printf("Enter power : ");
scanf("%d",&b);
int pow=1;
for ( int i=1; i<=b; i++)
{
pow = pow * a;
printf("%d to the power %d is : %d\n",a,i,pow);
}
if ( b==0)
{
printf("%d to the power 0 is : 1",a);
}
return 0;
}