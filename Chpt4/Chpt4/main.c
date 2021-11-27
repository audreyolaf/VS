#include <stdio.h>

# define MAXLINE 100

/*int main() {
	int paren = (6 * 8) - 1;
	int polRev = 6 8 * 1 - ;
	polishCalc();
	return 0;
}
*/


run() {
	double sum, atof(char[]);
	char line[MAXLINE];
	int getline(char line[], int max);

	sum = 0;
	while (getline(line, MAXLINE) > 0)
		printf("\t%g\n", sum += atof(line));
}