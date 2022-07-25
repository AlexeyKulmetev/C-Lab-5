#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>

#define N 1000

int main() {

	FILE* filePointer;
	char str_in[N];
	char str_out[N];

	filePointer = fopen("text.txt", "r");
	if (filePointer == NULL) {
		printf("cannot open the file");
	}
	while (fgets(str_in, N - 1, filePointer)) {
		randomWords(str_in, str_out);
		puts(str_out);
	}


	return 0;
}