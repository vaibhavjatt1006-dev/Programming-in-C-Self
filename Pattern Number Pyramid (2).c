#include<stdio.h>
int main()
{
int r,n=1;
printf("Enter number of rows : ");
scanf("%d",&r);
for (int i=1; i<=r; i++)
{
for (int j=1; j<=r-i; j++)
{
printf("  ");
}
for (int k=1; k<=n; k++)
{
printf("%d ",k);
}
for (int p=n-1; p>=1; p--)
{
printf("%d ",p);
}
n=n+1;
printf("\n");
}
return 0;
}