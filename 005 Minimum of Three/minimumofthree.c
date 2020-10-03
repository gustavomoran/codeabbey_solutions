/*
gcc minimumofthree.c -o minimumofthree
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
$ cat DATA.lst | ./minimumofthree
-8369841 -4868226 -9711499 -7970881 -6834303 -1633349 -9808302 -3663694 -9621775 1825557 -4114156 -2892685 -8884690 -6855571 -7891692 -8157714 -9080893 -9564475 -8422759 -8044534 -5814007 -4822248 -3490272 -6908414 -7777010 -7980453 -476903 -7629434
*/
