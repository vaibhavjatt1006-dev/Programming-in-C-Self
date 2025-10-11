#include<stdio.h>
int main () 
{
int n;
printf("Enter number of terms in G.P : ");
scanf("%d",&n);
int a;
printf("Enter first term of G.P : ");
scanf("%d",&a);
int r;
printf("Enter common ratio in G.P : ");
scanf("%d",&r);
printf("G.P is :\n");
for(int i=1;i<=n;i++)
{
printf("%d\n",a);
a=a*r;
}
return 0;
}