/*
gcc rounding.c -o rounding
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int calculate();
int round_f(double);

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
	float dividend;
	float divider;
	float result;
	int rounded;
	fgets(input, sizeof(input), stdin);
	token = strtok(input, white_spaces);
	sscanf(token, "%f", &dividend);
	token = strtok(NULL,white_spaces);
	sscanf(token, "%f", &divider);
	result = dividend / divider;
	return round_f(result);
}

int round_f(double number) {
	return (number >= 0) ? (int)(number + 0.5) : (int)(number - 0.5);
}

/*
$ cat DATA.lst | ./rounding
3446 -2 20 20 17 2 -1 2 0 -2 -6 1 11 6 2 78084 2 -1 13 6 19035 4 -6 2
*/

