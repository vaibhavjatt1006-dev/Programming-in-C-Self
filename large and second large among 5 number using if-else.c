#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("Enter first number : ");
scanf("%d",&a);
printf("Enter second number : ");
scanf("%d",&b);
printf("Enter third number : ");
scanf("%d",&c);
printf("Enter fourth number : ");
scanf("%d",&d);
printf("Enter fifth number : ");
scanf("%d",&e);

int l,sl;
if(a>b)
{
l=a;
sl=b;
}
else
{
l=b;
sl=a;
}
if(c>l)
{
sl=l;
l=c;
}
else if (c>sl)
{
sl=c;
}
if(d>l)
{
sl=l;
l=d;
}
else if (d>sl)
{
sl=d;
}
if(e>l)
{
sl=l;
l=e;
}
else if (e>sl)
{
sl=e;
}
printf("The largest number is %d\n",l);
printf("The second largest number is %d\n",sl);
return 0;
}