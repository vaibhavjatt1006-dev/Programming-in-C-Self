#include<stdio.h>
void printNamaste();
void printBonjour();
int main() {
char c;
printf("Enter f for french and i for indian: ");
scanf("%c",&c);
if(c=='i') {
printNamaste();
}
else {
printBonjour();
}
return 0;
}
void printNamaste() {
printf("Namaste\n");
}
void printBonjour() {
printf("Bonjour\n");
}
