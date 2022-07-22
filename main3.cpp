#include <stdio.h>
#include "task3.h"

#define N 1000
int main() {

	FILE* filePointer;
	char in_str[N];
	char out_str[N];
	
	printf("Enter text in one line: ");
	gets_s(in_str, N);
	
	
	mixLine(in_str, out_str);
	//filePointer = fopen("\\TEHPOD-8\\C-Lab5-(task3)\\text.txt", "r");
	//if (filePointer == NULL) {
	//	printf("cannot open file");
	//	return 777;
	//}
	//while (!feof(filePointer)) {
	//	printf("\ncheck");
	//	fgets(in_str, N, filePointer);
	//	mixLine(in_str, out_str);
	//	printf("%s", out_str);
	//}
	printf("\n");
	printf("%s", out_str);
}