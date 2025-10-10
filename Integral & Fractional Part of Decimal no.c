#include<stdio.h>
int main () 
{
float a;
printf("Enter decimal no.:");
scanf("%f",&a);
int b;
b=a;
printf("Integral part of %f is : %d\n",a,b);
float c;
c=a-b;
printf("The fractional part of %f is : %f",a,c);
return 0;
}