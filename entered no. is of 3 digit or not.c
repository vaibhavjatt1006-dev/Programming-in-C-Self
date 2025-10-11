#include<stdio.h>
int main () 
{
int n;
printf("Enter three digit integers : ");
scanf("%d",&n);
if (n/100 !=0 && n/1000 ==0)
{
printf("Given number is three digit number");
}
else
{
printf("Given number is not three digit number");
}
return 0;
}