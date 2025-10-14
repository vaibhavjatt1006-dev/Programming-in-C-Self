#include<stdio.h>
int main () 
{
int row;
printf("Enter number of rows : ");
scanf("%d",&row);
int column;
printf("Enter number of column : ");
scanf("%d",&column);
char ch='*';
for(int i=1; i<=row; i++)
{
for(int j=1;j<=column;j++)
{
printf("%c",ch);
}
printf("\n");
}
return 0;
}
