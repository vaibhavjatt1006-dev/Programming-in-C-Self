#include<stdio.h>
int main () 
{
int n;
printf("Enter number of terms in A.P : ");
scanf("%d",&n);
int a;
printf("Enter first term of A.P : ");
scanf("%d",&a);
int d;
printf("Enter common difference in A.P : ");
scanf("%d",&d);
printf("A.P is :\n");
for(int i=1;i<=n;i++)
{
printf("%d\n",a);
a=a+d;
}
return 0;
}
