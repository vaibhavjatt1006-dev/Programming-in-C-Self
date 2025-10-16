#include<stdio.h>
int main () 
{
int r;
printf("Enter number of rows : ");
scanf("%d",&r);
for (int i=1; i<=r; i++)
{
for (int j=1; j<=r; j++)
{
if (i+j<=r)
{
printf("  ");
}
else if (i+j==r+1)
{
for (char ch='A'; ch<='A'+i-1; ch++)
{
printf("%c ",ch);
}
}
else
{
continue;
}
}
printf("\n");
}
return 0;
}