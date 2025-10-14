#include<stdio.h>
int main () 
{
int r;
printf("Enter number of rows : ");
scanf("%d",&r);
for(int i=1; i<=r; i++)
{
for (char j='A'; j<'A'+r; j++)
{
printf("%c ",j);
}
printf("\n");
}
return 0;
}