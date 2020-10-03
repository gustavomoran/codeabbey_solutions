/*
$ gcc f2c.c -o f2c
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int round_f(double);

int main(int argc, char *argv[]) {
	char input[256];
	const char white_spaces[2] = " ";
	char *token;
	float value;
	float f2c;

	fgets(input,sizeof(input), stdin);
	token = strtok(input, white_spaces);
	token = strtok(NULL, white_spaces);

	while( token != NULL) {
		sscanf(token, "%f", &value);
		f2c = (value - 32)*5/9 ;
		printf("%d ", round_f(f2c));
		token = strtok(NULL, white_spaces);
	}
	printf("\n");
}

int round_f(double number) {
	return (number >=0) ? (int)(number + 0.5) : (int)(number -0.5);
}

/*
$ cat DATA.lst | ./f2c
274 64 202 212 121 176 190 133 115 111 232 79 267 22 159 92 11 72 3 282 222 266 51 147 268 204 146 93 114 208 266 73 272 151 286
*/
