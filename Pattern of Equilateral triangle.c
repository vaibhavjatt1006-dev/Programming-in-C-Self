#include<stdio.h>
int main()
{
int r,nos=1;
printf("Enter number of rows : ");
scanf("%d",&r);
for (int i=1; i<=r; i++)
{
for (int j=1; j<=r-i; j++)
{
printf("  ");
}
for (int k=1; k<=nos; k++)
{
printf("* ");
}
nos = nos + 2;
printf("\n");
}
return 0;
}