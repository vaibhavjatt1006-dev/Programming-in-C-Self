#include <stdio.h>
int main(){
int a;
do{
printf("Enter no. multiple of 7:");
scanf("%d",&a);
if(a%7==0) {
break;
}
} while(1);
printf("Thank You");
return 0;
}
