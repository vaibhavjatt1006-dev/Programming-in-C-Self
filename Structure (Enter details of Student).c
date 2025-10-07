#include<stdio.h>
#include<string.h>
struct student{
char name[100];
int roll_no;
float cgpa;
};
int main() {
struct student s1;
strcpy(s1.name,"Ram");
s1.roll_no=125;
s1.cgpa=8.0;

printf("Student 1 name:%s\n",s1.name);
printf("Student 1 roll_no:%d\n",s1.roll_no);
printf("Student 1 cgpa:%f\n",s1.cgpa);

struct student s2;
strcpy(s2.name,"Abhay");
s2.roll_no=129;
s2.cgpa=7.5;

printf("Student 2 name:%s\n",s2.name);
printf("Student 2 roll_no:%d\n",s2.roll_no);
printf("Student 2 cgpa:%f\n",s2.cgpa);

struct student s3;
strcpy(s3.name,"Naveen");
s3.roll_no=133;
s3.cgpa=5.0;

printf("Student 3 name:%s\n",s3.name);
printf("Student 3 roll_no:%d\n",s3.roll_no);
printf("Student 3 cgpa:%f\n",s3.cgpa);
return 0;
}