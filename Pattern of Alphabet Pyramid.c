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
for (char k='A'; k<='A'+n-1; k++)
{
printf("%c ",k);
}
n=n+2;
printf("\n");
}
return 0;
}