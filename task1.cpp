#include "task1.h"
#include <stdio.h>

#define M 200

char* randomWords(char* in, char* out) {

	char* pArray[M];
	int pIndex = 0;
	int i = 0;


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
	while (pArray[i] != NULL) {
		printf("\n%c", *pArray[i]);
		i++;
	}

	// FORM A NEW LINE WITH JUMBLED WORDS
	// MAY BE IT IS POSSIBLE TO USE AN ADDITIONAL ARRAY WITH ORDINAL NUMBERS OF WORDS

	return out;	
}