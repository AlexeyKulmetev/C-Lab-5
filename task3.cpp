#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task3.h"


#define M 100
char* mixChars(char* in, char* out) {

	char tmp;
	int randInd = 0;
	int length = 0;

	// COUNTING THE LENGTH OF THE WORD
	for (int i = 0; in[i] != '\0' && in[i] != '\n' && in[i] != ' '; i++) {
		out[i] = in[i];
		length++;
	}
	// MIXING LETTERS IN THE WORD
	srand(time(NULL));
	for (int i = 1; i < length - 1; i++) {
		randInd = rand() % (length - 2) + 1;
		tmp = out[i];
		out[i] = out[randInd];
		out[randInd] = tmp;
	}
	return out;
}

char* mixLine(char* instr, char* outstr) {

	char* word;
	char out_word[M];
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
			for (int j = 0; out_word[j] >= 'A' && out_word[j] <= 'Z' || out_word[j] >= 'a' && out_word[j] <= 'z'; j++) {
				outstr[out_str_ind++] = out_word[j];
			}
			// ADD A SPACE AFTER THE WORD IN OUTPUT STRING
			if (instr[i] != '\0' && instr[i] != '\n') { 
				outstr[out_str_ind++] = ' ';
			}
		}
		else i++;
		// CLEAR VARIABLE out_word
		for (int k = 0; k < M; k++){
			out_word[k] = '\0';
		}
	}
	outstr[out_str_ind] = '\0';
	return outstr;
}