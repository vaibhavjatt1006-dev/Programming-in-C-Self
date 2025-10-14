#include<stdio.h>
int main () 
{
int r;
printf("Enter odd number of rows : ");
scanf("%d",&r);
int a=0;
for (int i=1; i<=r; i++)
{
for (int j=1; j<=i; j++)
{
 a = a + 1;
 printf("%d ",a);
}
printf("\n");
}
return 0;
}