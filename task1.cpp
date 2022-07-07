#include "task1.h"
#include <stdio.h>

#define M 200

char* randomWords(char* in, char* out) {

	char* pArray[M];
	int pIndex = 0;
	int i = 0;

	while (in[i] != '/0') {
		if (in[i] >= 'A' && in[i] <= 'Z' || in[i] >= 'a' && in[i] <= 'z') {
			pArray[pIndex++] = &in[i];
			while (in[i] >= 'A' && in[i] <= 'Z' || in[i] >= 'a' && in[i] <= 'z')
				i++;
		}
		else i++;
	}
	//while (i <  10)  {
	//	printf("\t%c", pArray[i]);
	//	i++;
	//}

	return out;	
}