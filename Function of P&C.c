#include<stdio.h>
int fact(int x)
{
int fact = 1;
for(int i=1; i<=x; i++)
{
fact=fact*i;
}
return fact;
}
int comb(int a, int b, int c)
{
return a/(b * c);
}
int permu(int x, int y)
{
return x/y;
}
int main()
{
int n,r;
printf("Enter number : ");
scanf("%d",&n);
printf("Enter number(<n) : ");
scanf("%d",&r);
int nfact = fact(n);
int rfact = fact(r);
int nrfact = fact(n-r);
int c = comb(nfact, rfact, nrfact);
printf("The combination is : %d\n",c);
int p = permu(nfact, nrfact);
printf("The permutation is : %d",p);
return 0;
}