#include<stdio.h>
float CtoF(float c);
int main() {
float c;
printf("Enter value of celsius:");
scanf("%f",&c);
 CtoF(c);
return 0;
}
float CtoF(float c) {
float f=(9.0/5.0 * c) +32;
printf("Value of Fahrenheit is %f",f);
}
