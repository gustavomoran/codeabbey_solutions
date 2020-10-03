/*
gcc triangles.c -o triangles
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int calculate();
int triangles(int, int, int);

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
	int c;
	int sum = 0;
	fgets(input, sizeof(input), stdin);
	token = strtok(input, white_spaces);
	sscanf(token, "%d", &a);
	token = strtok(NULL,white_spaces);
	sscanf(token, "%d", &b);
	token = strtok(NULL,white_spaces);
	sscanf(token, "%d", &c);
	return triangles(a,b,c);
}

int triangles(int a, int b, int c) {
	int res = 1;
	if (a > b + c || b > a + c || c > a + b)
		res = 0;
	return res; 
}

/*
$ cat DATA.lst | ./triangles
1 1 1 1 1 0 0 0 0 0 1 0 0 0 1 1 0 0 1 0 0 0 0 0
*/
