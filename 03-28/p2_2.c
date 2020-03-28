#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

typedef struct studentT {
	char *name;
	int literature;
	int math;
	int science;
}studentT;

int main(int argc, char* argv[]) {
	FILE* fp;
	FILE* fpout;
	int num;
	studentT students[30] = { 0 };
	int i ;
	char buffer[1000]={0};

		char *name = malloc(sizeof(char) * 10);



	fp = fopen(argv[1], "r");
	if (fp == NULL) {
		printf("입력파일을 열수 없습니다");
		return 0;
	}

	fpout = fopen(argv[2], "w");
	if (fpout == NULL) {
		printf("출력파일을 열수 없습니다");
		return 0;
	}

	fscanf(fp, "%d", &num);
	printf("%d \n", num);

	name = "jhi";

	strcpy(students[0].name, name);
	printf("%s %d %d %d \n", students[0].name, students[0].literature, students[0].math, students[0].science);
	

	
	/*
	while (!feof(fp))
	{
		fscanf(fp, "%s %d %d %d", &students[i].name, &students[i].literature, &students[i].math, &students[i].science);
		printf("%s %d %d %d \n", students[i].name, students[i].literature, students[i].math, students[i].science);
		fprintf(fpout, "%s %d %d %d\n", students[i].name, students[i].literature, students[i].math, students[i].science);
		i++;
	}

	for (i = 0; i < num; i++) {
		fscanf(fp, "%s %d %d %d", &students.name, &students.literature, &students.math, &students.science);
		printf("%s %d %d %d \n", students.name, students.literature, students.math, students.science);
	
	}

		for (int i = 0; i < num; i++) {

		fscanf(fp, "%s %d %d %d", name, &students[i].literature, &students[i].math, &students[i].science);
		strcpy(students[i].name, name);
		printf("%s %d %d %d \n", students[i].name, students[i].literature, students[i].math, students[i].science);
	}

	*/
	free(name);
	fclose(fp);
	return 0;
}