#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task3.h"


#define M 50
char* mixChars(char* in, char* out) {

	char tmp;
	int i = 0;
	int randInd = 0;
	int length = 0;

	// COUNTING THE LENGTH OF THE WORD
	for (int i = 0; in[i] != '\0' && in[i] != '\n' && in[i] != ' '; i++) {
		out[i] = in[i];
		length++;
		i++;
	}
	// MIXING LETTERS IN THE WORD
	srand(time(NULL));
	for (int i = 1; i < length - 1; i++) {
		randInd = rand() % (length - 2) + 1;
		tmp = out[i];
		out[i] = out[randInd];
		out[randInd] = tmp;
		printf("\n%s", out);
	}
	printf("\n%s", out);
	return out;
}

char* mixLine(char* instr, char* outstr) {

	char* word;
	char out_word[100];
	int i = 0;
	int out_str_ind = 0;

	// SPLITTING THE STRING INTO WORDS
	while (instr[i] != '\0' && instr[i] != '\n') {
		if (instr[i] >= 'A' && instr[i] <= 'Z' || instr[i] >= 'a' && instr[i] <= 'z') {	
			word = &instr[i];
			mixChars(word, out_word);
			while (instr[i] >= 'A' && instr[i] <= 'Z' || instr[i] >= 'a' && instr[i] <= 'z') {				
				i++;
			}			
			// FORM THE OUTPUT STRING
			for (int i = 0; out_word[i] != '\0'; i++) {
				outstr[out_str_ind++] = out_word[i];
			}
			if (instr[i + 1] != '\0' || instr[i + 1] != '\n') {
				outstr[out_str_ind++] = ' ';
			}
		}
		else i++;
	}
	return outstr;
}