#include<stdio.h>
int main() 
{
int a,b,q,r;
printf("Enter no. a:");
scanf("%d",&a);
printf("Enter no. b:");
scanf("%d",&b);
q=a/b;
r=a-b*q;
printf("Remainder of no. a and b is:%d",r);
return 0;
}