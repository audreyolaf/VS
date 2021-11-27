#include <stdio.h>

void main(int v[], int i, int j) {
	int temp;
	
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}