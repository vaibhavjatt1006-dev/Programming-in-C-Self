#include<stdio.h>
int main () 
{
int r;
printf("Enter number of rows : ");
scanf("%d",&r);
int ch='*';
for (int i=r; i>=1; i--)
{
for (int j=1; j<=i; j++)
{
printf("%c ",ch);
}
printf("\n");
}
return 0;
}