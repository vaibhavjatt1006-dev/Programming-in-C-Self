#include<stdio.h>
int main () 
{
int r;
printf("Enter number of rows : ");
scanf("%d",&r);
for(int i=1; i<=r; i++)
{
if (i%2!=0)
{
for(int j=1;j<=i;j++)
{
printf("%d ",j);
}
printf("\n");
}
else
{
for(char j='A'; j<'A'+i; j++)
{
printf("%c ",j);
}
printf("\n");
}
}
return 0;
}