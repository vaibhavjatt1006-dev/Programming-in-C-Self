#include<stdio.h>
int main() { 
int n;
printf("Enter no. :");
scanf("%d",&n);
for(int i=1;i<=10;i=i+1) {
printf("%dx%d=%d\n",n,i,i*n);
}
return 0;
}