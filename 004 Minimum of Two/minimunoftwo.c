/*
gcc minimumoftwo.c -o minimumoftwo
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
	int minimum;
	fgets(input, sizeof(input), stdin);
	token = strtok(input, white_spaces);
	sscanf(token, "%d", &minimum);
	while( token != NULL) {
		sscanf(token, "%d", &value);
		if( minimum > value)
			minimum = value;
		token = strtok(NULL, white_spaces);
	}
	return minimum;
}

/*
$ cat DATA.lst | ./minimumoftwo
-9156950 -6437747 -2845199 -3120195 -9510110 -8886241 2008100 -8361246 -1334088 1999141 -9133509 -4906754 -6548403 -5233260 -7401474 2459242 -1534850 5619950 -7098700 -2671838 -5379168 -9329039
*/
