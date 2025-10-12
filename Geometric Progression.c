#include<stdio.h>
int main () 
{
int n;
printf("Enter number of terms in G.P : ");
scanf("%d",&n);
float a;
printf("Enter first term of G.P : ");
scanf("%f",&a);
float r;
printf("Enter common ratio in G.P : ");
scanf("%f",&r);
printf("G.P is :\n");
for(int i=1;i<=n;i++)
{
printf("%f\n",a);
a=a*r;
}
return 0;
}
