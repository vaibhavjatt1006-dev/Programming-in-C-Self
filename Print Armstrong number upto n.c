#include<stdio.h>
int main () 
{
int n;
printf("Enter positive number : ");
scanf("%d",&n);

for ( int i=1; i<=n;i++)
{
int arm=0;
int m=i;
while (i>0)
{
int c=i%10;
arm=arm+c*c*c;
i=i/10;
}
i=m;
if ( arm == m)
{
printf("%d is an armstrong number\n",m);
}
}

return 0;
}