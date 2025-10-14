#include<stdio.h>
int main () 
{
int r;
printf("Enter odd number of rows : ");
scanf("%d",&r);
char ch='*';
if (r%2==0)
{
printf("Enter odd number of rows");
}
else
{
for(int i=1; i<=r; i++)
{
for (int j=1; j<=r; j++)
{
if (j==r/2 + 1)
{
printf("%c ",ch);
}
else if (i==r/2 + 1)
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
}
return 0;
}