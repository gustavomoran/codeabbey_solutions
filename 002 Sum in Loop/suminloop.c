/*
gcc suminloop.c -o suminloop
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) {
	char input[300];
	const char white_spaces[2] = " ";
	char *token;
	int result = 0;
	int value;
	int size;

	fgets(input, sizeof(input), stdin);
	sscanf(input, "%d", &size);

	fgets(input, sizeof(input),stdin);
	token = strtok(input, white_spaces);

	for(int i=0; i<size; i++) {
		sscanf(token, "%d", &value);
		result += value;
		token = strtok(NULL, white_spaces);
	}
	printf("%d\n", result);
}

/*
cat DATA.lst | ./suminloop
23975
*/