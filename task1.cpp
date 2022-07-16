#include "task1.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define M 200

char* randomWords(char* in, char* out) {

	char* pArray[M];
	char* tmpPointer = NULL;
	int randNum = 0;
	int pIndex = 0;
	int i = 0;
	int newStrInd = 0;

	while (in[i] != '\0' && in[i] != '\n') {
		if (in[i] >= 'A' && in[i] <= 'Z' || in[i] >= 'a' && in[i] <= 'z') {
			pArray[pIndex++] = &in[i];
			while (in[i] >= 'A' && in[i] <= 'Z' || in[i] >= 'a' && in[i] <= 'z')
				i++;
		}
		else i++;
	}

	pArray[pIndex] = NULL;
	i = 0;
	printf("\n");
	// PRINTING AN ARRAY OF POINTERS BEFOR MIXING
	while (pArray[i] != NULL) {
		printf(" %c ", *pArray[i]);
		i++;
	}
	printf("\n");
	i = 0;
	// FISHER-YATES MIXING
	srand(time(NULL));

	for (int i = 0; i < pIndex; i++) {
		randNum = rand() % pIndex;
		tmpPointer = pArray[i];
		pArray[i] = pArray[randNum];
		pArray[randNum] = tmpPointer;
	}

	printf("\n");
	i = 0;
	// PRINTING AN ARRAY OF POINTERS AFTER MIXING
	while (pArray[i] != NULL) {
		printf(" %c ", *pArray[i]);
		i++;
	}

	// FORM A NEW STRING USING JUMBLED POINTERS
	for (int i = 0; i < pIndex; i++) {
		tmpPointer = pArray[i];
		for (int j = 0; tmpPointer[j] != ' ' && tmpPointer[j] != '\0' && tmpPointer[j] != '\n'; j++) {
			out[newStrInd++] = tmpPointer[j];
		}
		if (i < pIndex - 1) {
			out[newStrInd++] = ' ';
		}

	}
	out[newStrInd] = '\0';

	return out;	
} 