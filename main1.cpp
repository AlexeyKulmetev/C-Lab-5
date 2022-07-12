#include <conio.h>
#include <stdio.h>
#include "task1.h"

#define N 1000 

int main() {

	char str_in[N];
	char str_out[N];

	
	printf("Enter text: ");

	fgets(str_in, N, stdin);

	randomWords(str_in, str_out);

	return 0;
}