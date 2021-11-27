#include <stdio.h>

charInputOutput() {
	/* 
	int c;
	c = getChar();
	while (c != EOF) {
		if (getchar() != EOF == 0 || EOF == 1) {
			putchar(c);
			c = getchar();
			printf(EOF + "\n");
		}
		
	}
	*/
	int c;
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}

	double nc;
	for (nc = 0; getchar() != EOF; ++nc)
		printf("%.0f\n", nc);
	/*nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%1d\n", nc);

	int c, nl;
	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl); */
}