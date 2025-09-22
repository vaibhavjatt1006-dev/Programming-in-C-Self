#include<stdio.h>
int main() { 
int row;
char a;
printf("No. of rows :");
scanf("%d", &row);

printf("enter symbol:");
scanf(" %c", &a);

for(int i=1;i<=row;i=i+1) {
for(int j=0;j<i;j=j+1) {
printf("%c",a);
}
printf("\n");
}
return 0;
}