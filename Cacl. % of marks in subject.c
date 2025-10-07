#include<stdio.h>
float calPer(int M, int S, int A);
int main () {
int M,S,A;
printf("Enter marks of Maths:");
scanf("%d",&M);
printf("Enter marks of Science:");
scanf("%d",&S);
printf("Enter marks of Sanskrit:");
scanf("%d",&A);
calPer(M,S,A);
return 0;
}
float calPer(int M, int S, int A) {
float P=(M+S+A)/300.0 *100;
printf("Total percentage is %f",P);
}
