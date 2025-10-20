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
n=n+2;
printf("\n");
}
return 0;
}