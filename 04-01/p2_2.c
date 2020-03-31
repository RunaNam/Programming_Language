
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
	float ave[30];
	float li_ave, ma_ave, sc_ave, av_ave =0;
	int ma_sum =0;
	int li_sum = 0;
	int sc_sum = 0;
	int av_sum = 0;


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

	fprintf(fpout, "  Name   Literature   Math   Science    Ave.\n");

	for (int i = 0; i < num; i++) {
		students[i].name = (char*)malloc(sizeof(char) * 30);
		fscanf(fp, "%s %d %d %d", students[i].name, &students[i].literature, &students[i].math, &students[i].science);
		ave[i] = (students[i].literature + students[i].math + students[i].science) / 3;
		fprintf(fpout, "  %7s   %7d   %7d   %7d   %9.2f\n", students[i].name, students[i].literature, students[i].math, students[i].science, ave[i]);
		
		li_sum += students[i].literature;
		ma_sum += students[i].math;
		sc_sum += students[i].science;
		av_sum += ave[i];
	}
	li_ave = li_sum / num;
	ma_ave = ma_sum / num;
	sc_ave = sc_sum / num;
	av_ave = av_sum/num;

	fprintf(fpout, "   Ave. %9.2f %9.2f %9.2f %9.2f\n ", li_ave, ma_ave, sc_ave, av_ave);


	fclose(fp);
	return 0;
}