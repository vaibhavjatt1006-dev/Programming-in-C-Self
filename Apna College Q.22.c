#include <stdio.h>
int main(){
int n;
printf("Enter no. n:");
scanf("%d",&n);
for(int i=10;i>=1;i--) {
printf("%dx%d=%d\n", i,n,i*n);
}
return 0;
}