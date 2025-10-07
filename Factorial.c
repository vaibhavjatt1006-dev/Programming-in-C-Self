#include <stdio.h>
int main(){
int n,fact=1;
printf("Enter no. n:");
scanf("%d",&n);
for(int i=n;i>=1;i--) {
fact=fact*i;
}
printf("The factorial of no. is %d",fact);
return 0;
}
