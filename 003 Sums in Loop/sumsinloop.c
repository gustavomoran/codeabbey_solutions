/*
gcc sumsinloop.c -o sumsinloop
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int calculate();

int main(int argc, char *argv[]) {
	char input [256];
	int size;
	fgets(input, sizeof(input), stdin);
	sscanf(input, "%d", &size);
	for( int i=0; i<size; i++) {
		printf("%d ", calculate());
	}
	printf("\n");
}

int calculate() {
	char *token;
	char input[256];
	const char white_spaces[2] = " ";
	int sum = 0;
	int value;
	fgets(input, sizeof(input), stdin);
	token = strtok(input, white_spaces);
	while( token != NULL) {
		sscanf(token, "%d", &value);
		sum += value;
		token = strtok(NULL, white_spaces);
	}
	return sum;
}

/*
$ cat DATA.lst | ./sumsinloop
1094147 991920 831596 380586 294766 1270683 318986 1220766 1579352 1138233 852457
*/