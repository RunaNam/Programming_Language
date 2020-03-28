#include <stdio.h>
#include <string.h>

void recursive(int len, char* str, int count) {
	int i;
	char str_new[100];
	char tmp;


	 for (i = 0; i < len-count; i++) {
		 tmp = str[count];
		 str[count] = str[i+count];
		 str[i+count] = tmp;
		 
		 if (count < len - 2) {
			 strcpy(str_new, str);
			 recursive(len, str_new, count + 1);
		 }
		 else if (count == len - 2)
			 printf("%s\n", str);
	}
}

int main(int argc, char* argv[]) {
	char tmp;

	if (argc != 2) {
		printf("usage : p2_1 abc");
		return 0;
	}

	int len = strlen(argv[1]);

	recursive(len, argv[1],0);
}