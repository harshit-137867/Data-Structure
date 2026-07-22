#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student {
	int rollno;
	char name[20];
};

void main(){
	struct student s1;

	printf("Enter Roll Number Here : ");
	scanf("%d", &s1.rollno);

    fflush(stdin);

	printf("\nEnter Name : ");
	gets(s1.name);

	printf("\nStudent Data is as follows : ");
	printf("\n****************************");

	printf("\nRoll no is : %d", s1.rollno);
	printf("\nName is : %s", s1.name);

	getch();
}
