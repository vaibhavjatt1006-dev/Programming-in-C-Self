#include<stdio.h>
#include<math.h>
void calculateSquare(int n);
int main() {
int n;
printf("Enter no. n:");
scanf("%d",&n);
calculateSquare(n);
return 0;
}
void calculateSquare(int n) {
int S=pow(n,2);
printf("Square of no. n is %d",S);
}