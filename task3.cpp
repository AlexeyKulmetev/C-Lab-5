#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define M 50
int main() {

	char word[M];
	char tmp;
	int i = 0;
	int randInd = 0;
	int length = 0;

	printf("Enter line: ");
	gets_s(word, M);

	while (word[i] != '\0') {
		length++;
		i++;
	}
	srand(time(NULL));

	for (int i = 1; i < length - 1; i++) {
		randInd = rand() % (length + 1);
		tmp = word[i];
		word[i] = word[randInd];
		word[randInd] = tmp;
	}
	
	printf("%s", word);

}