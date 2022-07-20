#include <stdio.h>
#include "task3.h"

#define N 1000
int main() {

	FILE* filePointer;
	char in_str[N];
	char out_str[N];
	
	filePointer = fopen("text.txt", "r");
	while (fgets(in_str, N, filePointer) != NULL) {
		mixLine(in_str, out_str);
		printf("%s", out_str);
	}


}