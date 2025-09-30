#include<stdio.h>
void printHW(int n);
int main(){
int n;
printf("Enter n:");
scanf("%d",&n);
printHW(n);
return 0;
}
void printHW(int n) {
if(n==0){
return;
}
printf("Hellow World\n");
printHW(n-1);
}