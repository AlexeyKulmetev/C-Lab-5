#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task3.h"


#define M 50
char* mixChars(char* in, char* out) {

	char in[M];
	char tmp;
	int i = 0;
	int randInd = 0;
	int length = 0;

	// COUNTING THE LENGTH OF THE WORD
	while (in[i] != '\0') {
		length++;
		i++;
	}
	// MIXING LETTERS IN THE WORD
	srand(time(NULL));
	for (int i = 1; i < length - 1; i++) {
		randInd = rand() % (length - 2) + 1;
		tmp = in[i];
		in[i] = in[randInd];
		in[randInd] = tmp;
		printf("\n%s", in);
	}	
	printf("\n%s", in);
}

char* mixLine(char* instr, char* outstr) {

	char* word;
	char out_word[70];
	int i = 0;
	int out_word_ind = 0;

	// SPLITTING A STRING INTO WORDS
	while (instr[i] != '\0' && instr[i] != '\n') {
		if (instr[i] >= 'A' && instr[i] <= 'Z' || instr[i] >= 'a' && instr[i] <= 'z') {
			word = &instr[i];
			while (instr[i] >= 'A' && instr[i] <= 'Z' || instr[i] >= 'a' && instr[i] <= 'z')
				i++;
			mixChars(word, out_word);
			outstr
		}
		else i++;

	}

}