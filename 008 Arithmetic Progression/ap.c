/*
gcc ap.c -o ap
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int calculate();
int ap(int, int, int);

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
	int a;
	int b;
	int n;
	int sum = 0;
	fgets(input, sizeof(input), stdin);
	token = strtok(input, white_spaces);
	sscanf(token, "%d", &a);
	token = strtok(NULL,white_spaces);
	sscanf(token, "%d", &b);
	token = strtok(NULL,white_spaces);
	sscanf(token, "%d", &n);
	return ap(a,b,n);
}

int ap(int a, int b, int n) {
	int res = 0;
	for (int i = 0; i<n; i++) {
		res += a;
		a += b;
	}
	return res; 
}

/*
$ cat DATA.lst | ./ap
40290 4329 14760 63342 2288 7485 17550 34950 1800
*/
