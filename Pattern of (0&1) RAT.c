#include<stdio.h>
int main () 
{
int r;
printf("Enter odd number of rows : ");
scanf("%d",&r);
for (int i=1; i<=r; i++)
{
if (i%2!=0)
{
for (int j=1; j<=i; j++)
{
if (j%2!=0)
{
printf("1 ");
}
else 
{
printf("0 ");
}
}
}
else
{
for (int j=1; j<=i; j++)
{
if (j%2!=0)
{
printf("0 ");
}
else 
{
printf("1 ");
}
}
}
printf("\n");
}
return 0;
}