#include<stdio.h>
int main () 
{
int r;
printf("Enter number of rows : ");
scanf("%d",&r);
for (int i=1; i<=r; i++)
{
for (int j=1; j<=2*i-1; j++)
{
if (j%2!=0)
{
printf("%d ",j);
}
}
printf("\n");
}
return 0;
}