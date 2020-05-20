
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ENROLL 30

typedef struct student {
	char *name;
	int literature;
	int math;
	int science;
}student;


typedef struct courseT {
	student students[MAX_ENROLL];
	int numEnrolled;
}courseT;


int main(int argc, char* argv[]) {
	FILE* fp;
	FILE* fpout;
	int num;
	char *course_name;
	char *check;
	int i;

	courseT course_Inf;

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

	do {
		int ma_sum = 0;
		int li_sum = 0;
		int sc_sum = 0;
		int pass = 0;

		course_name = (char*)malloc(sizeof(char) * 30);
		fscanf(fp, "%s", course_name);
		fscanf(fp, "%d", &course_Inf.numEnrolled);

		printf("INFO ->%s %d \n", course_name, course_Inf.numEnrolled);

		for (i = 0; i < course_Inf.numEnrolled; i++) {
			check = (char*)malloc(sizeof(char) * 3);

			fscanf(fp, "%s", check);
			if (strcmp(check, "--") == 0 || feof(fp)) {
				course_Inf.numEnrolled = i;
				printf("STOP ->%d %s \n \n", course_Inf.numEnrolled, check);
				pass = 1;
				break;
			}
			else {
				int len = -strlen(check);
				printf("REWIND ->%d\n", len);
				fseek(fp, len, SEEK_CUR);
				student stu = course_Inf.students[i];
				stu.name = (char*)malloc(sizeof(char) * 30);

				fscanf(fp, "%s %d %d %d", stu.name, &stu.literature, &stu.math, &stu.science);
				printf("%s %d %d %d\n", stu.name, stu.literature, stu.math, stu.science);

				li_sum += stu.literature;
				ma_sum += stu.math;
				sc_sum += stu.science;
				printf("SUM->%d %d %d\n", li_sum, ma_sum, sc_sum);
			}
		}



		li_sum /= course_Inf.numEnrolled;
		ma_sum /= course_Inf.numEnrolled;
		sc_sum /= course_Inf.numEnrolled;

		fprintf(fpout, " %7s %7d %7d %7d \n ", course_name, li_sum, ma_sum, sc_sum);
		if (pass != 1) {
			fscanf(fp, "%s", check);
			printf("CHECK -> %s ---- %d \n\n", check, strcmp(check, "--"));
		}
	} while (strcmp(check, "--") == 0);


	/*
		for (int i = 0; i < num; i++) {
			course_Inf[i].numEnrolled = num;
			if (feof(fp))
				course_Inf[i].numEnrolled = i+1;
			course_Inf[i].students->name = (char*)malloc(sizeof(char) * 30);
			fscanf(fp, "%s %d %d %d", course_Inf[i].students->name, &course_Inf[i].students->literature, &course_Inf[i].students->math, &course_Inf[i].students->science);

			li_sum += course_Inf[i].students->literature;
			ma_sum += course_Inf[i].students->math;
			sc_sum += course_Inf[i].students->science;
		}li_sum /= num;
		ma_sum /= num;
		sc_sum /= num;

		fprintf(fpout, " %7s %7d %7d %7d \n ",course_name, li_sum, ma_sum, sc_sum);

		check = (char*)malloc(sizeof(char) * 3);

		fscanf(fp, "%s", check);
		printf("%s , %d \n", check, strcmp(check, "--"));
	} while (strcmp(check, "--")==0);
		*/

		

	fclose(fp);
	return 0;
}