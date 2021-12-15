#include <stdio.h>
#include <stdlib.h>

typedef struct _student {

	char num[7]; //SID
	char class[20]; //Class
	char name[20]; //Name
	int score[3]; //score[0]CH score[1]ENG score[2]MATH

}student;

void sub(student *p);

int main() {

	int i;
	student stud[3] = { {"970101","Y41A","W",61,71,81},
						{"970102","Y41A","LEE",92,82,72},
						{"970103","Y41A","CHANG",73,63,83} };

	student *ps;
	ps = stud; //ps to stu[0]
	printf("\n");
	printf("=================================================\n");
	printf(" SID  Class\t  Name\t  CH  ENG  MATH\n");
	printf("=================================================\n");

	for (i = 0; i < 3; i++) {
		printf("%-10s %-8s %4s %4d %4d %4d\n", (ps + i)->num, (ps + i)->class, 
			(ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}

	printf("\tBefore Call\n\n");
	sub(ps);
	printf("\n\tAfter Call\n");

	for (i = 0; i < 3; i++) {
		printf("%-10s %-8s %4s %4d %4d %4d\n", (ps + i)->num, (ps + i)->class, 
			(ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}

	printf("\n");
	system("pause");
	return 0;
}

void sub(student *p) {
	for (int i = 0; i < 3; i++) {
		(p + i)->score[0] += 10;
		(p + i)->score[1] += 10;
		(p + i)->score[2] += 10;
	}
}