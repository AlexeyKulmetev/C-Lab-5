#include "task2.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 20

void clearMatrix(char (* arr)[M]) {
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++) {
			arr[i][j] = ' ';
		}
	}
}

void fillMatrix(char(* arr)[M]) {
	int flag = 0;
	srand(time(NULL));
	for (int i = 0; i < M / 2; i++) {
		for (int j = 0; j < M / 2; j++) {
			flag = rand() % 2;
			if (flag == 1) {
				arr[i][j] = '*';
			}
			else
				arr[i][j] = ' ';
		}
	}
}

void settMatrix(char(*arr)[M])
{
	int i_ind = 0;
	int j_ind = 0;
	for (int i = 0; i < M / 2; i++) {
		for (int j = M / 2; j < M; j++) {
			arr[i][j] = arr[i][j_ind];
			j_ind++;
		}
		j_ind = 0;
	}
	i_ind = 0;
	j_ind = 0;
	for (int i = M / 2; i < M; i++) {
		for (int j = 0; j < M / 2; j++) {
			arr[i][j] = arr[i_ind][j];
		}
		i_ind++;
	}
	i_ind = 0;
	j_ind = 0;
	for (int i = M / 2; i < M; i++) {
		for (int j = M / 2; j < M; j++) {
			arr[i][j] = arr[i_ind][j_ind];
			j_ind++;
		}
		i_ind++;
		j_ind = 0;
	}
}

void printMatrix(char(* arr)[M]) {
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++) {
			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}
}