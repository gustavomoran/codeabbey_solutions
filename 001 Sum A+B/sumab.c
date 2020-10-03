/*
$ gcc sumab.c -o sumab
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) {
	char input[80];
	const char delim[2] = " ";
	char *token;
	int result = 0;
	int value;

	fgets(input, sizeof(input), stdin);
	token = strtok(input, delim);

	while( token != NULL) {
		sscanf(token, "%d", &value);
		result += value;
		token = strtok(NULL, delim);
	}
	printf("%d\n", result);
}

/*
cat DATA.lst | ./sumab
26458
*/
