#include "task2.h"
#include <Windows.h>

#define M 20

int main() {

	char matrix[M][M];
	char pArray[M];

	while (1) {
		clearMatrix(matrix);
		fillMatrix(matrix);
		settMatrix(matrix);
		system("cls");
		printMatrix(matrix);
		Sleep(2000);
	}

	return 0;
}