#include<stdio.h>
#include<string.h>
int main() {
char name[100];

printf("My name is:");
scanf("%s",name);

int length=strlen(name);

printf("Length is %d",length);
return 0;
}