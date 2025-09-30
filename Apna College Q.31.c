#include<stdio.h>
float calculateAreaofSquare(float a);
float calculateAreaofCircle(float r);
float calculateAreaofRectangle(float l,float b);
int main() {
float a,r,l,b;
printf("Enter no. a:");
scanf("%f",&a);
printf("Enter no. r:");
scanf("%f",&r);
printf("Enter no. l:");
scanf("%f",&l);
printf("Enter no. b:");
scanf("%f",&b);
calculateAreaofSquare(a);
calculateAreaofCircle(r);
calculateAreaofRectangle(l,b);
return 0;
}
float calculateAreaofSquare(float a) {
printf("Area of square is %f\n",a*a);
}
float calculateAreaofCircle (float r) {
printf("Area of Circle is %f\n",3.14*r*r);
}
float calculateAreaofRectangle(float l,float b) {
printf("Area of Rectangle is %f\n",l*b);
}