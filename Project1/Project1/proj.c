#include <stdio.h>

#include "audrey.h"
#define NAME "Audrey"
#define NAME 5
#define A_TRUE	(1==1)
#define A_FLASE (1!=1)
const int a = 17;
const __int64 b = 4294967296;
#ifdef _WIN32
#define EEOF 26
#else
#define EEOF 10
#endif
// 0x00000005
int main() {
	int x = EEOF;
	printf("Hello world!, %d\n", NAME);
	//printf("Hello world!, %s\n", 5);
	int c = add(1, 5);
	printf("%d\n", c);
	int m = multiply(3, 5);
	printf("%d\n", m);
	int s = sub(8, 5);
	printf("%d\n", s);
}
int add(int numOne, int numTwo) {
	int sum;
	sum = numOne + numTwo;
	return sum;
}