#include<stdio.h>
int main () 
{
int r;
printf("Enter odd number of rows : ");
scanf("%d",&r);
char ch='*';
for (int i=1; i<=r; i++)
{
for (int j=1; j<=r;j++)
{
if ( i==j || j==r+1-i)
{
printf("%c ",ch);
}
else
{
printf("  ");
}
}
printf("\n");
}
return 0;
}