#include<stdio.h>
int main () 
{
int r;
printf("Enter odd number of rows : ");
scanf("%d",&r);
int c;
printf("Enter odd number of columns : ");
scanf("%d",&c);
char ch='*';
for (int i=1; i<=r; i++)
{
for (int j=1; j<=c; j++)
{
if ( i==1 || i==r)
{
printf("%c ",ch);
}
else if (j==1 || j==c)
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