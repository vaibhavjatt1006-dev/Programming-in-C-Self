#include<stdio.h>
int main () 
{
int n;
printf("Enter nth term of fibonacci series : ");
scanf("%d",&n);
int fibo1=1,fibo2=1,fibo;
if (n==1)
{
printf("The 1 term of fibonacci series is : 1");
}
else if ( n==2)
{
printf("The 1 term of fibonacci series is : 1\n");
printf("The 2 term of fibonacci series is : 1\n");
}
else
{
printf("The 1 term of fibonacci series is : 1\n");
printf("The 2 term of fibonacci series is : 1\n");
for ( int i =3; i<=n; i++)
{
fibo=fibo1 + fibo2;
fibo1 = fibo2;
fibo2 = fibo;
printf("The %d term of fibonacci series is : %d\n",i,fibo);
}
}
return 0;
}