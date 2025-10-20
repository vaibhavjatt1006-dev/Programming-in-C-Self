#include<stdio.h>
int main()
{
int r,nos=1;
printf("Enter odd number of rows : ");
scanf("%d",&r);
int m=r/2+1,nsp=m-1;
for (int i=1; i<=r; i++)
{
for (int j=1; j<=nsp; j++)
{
printf("  ");
}
for (int k=1; k<=nos; k++)
{
printf("* ");
}
if (i<m)
{
nsp--;
nos+=2;
}
else
{
nsp++;
nos-=2;
}
printf("\n");
}
return 0;
}