#include<stdio.h>
int main() { 
int i,n,sum=0;
printf("enter no. n:");
scanf("%d",&n);
for(i=1;i<=n;i=i+1) {
printf("%d\n",i);
sum=sum+i;
}
printf("The sum of first n natural no.:%d",sum);
return 0;
}