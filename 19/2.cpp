#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <iostream>
using namespace std;
int main(void) {
	setlocale(LC_ALL, "Rus");
	int* a;
	int* b;
	int* c;
	int n, m, k, i, sh, j;
	m = 2;
	printf("n = \n");
	scanf_s("%i", &n);
	a = (int*)malloc(n * sizeof(int));
	k = 10;
	for (i = 0; i < n; i++) {
		a[i] = rand() % k;
	}
	for (i = 0; i < n; i++) {
		printf("%i ", a[i]);
	}
	printf("\n");
	b = (int*)malloc(2 * k * sizeof(int));
	for (i = 0; i < k; i++) {
		*(b + 0 * k + i) = i;
	}
	for (i = 0; i < k; i++) {
		*(b + 1 * k + i) = 0;
	}
	for (i = 0; i < n; i++) {
		*(b + 1 * k + a[i]) = *(b + 1 * k + a[i]) + 1;
	}
	
	sh = 0;
	for (i = 0; i < n; i++) {
		if (*(b + 1 * k + i) == 2) {
			sh = sh + 2;
		}
	}
	sh = n - sh;
	printf("Long = %i", sh);
	printf("\n");
	if (sh == 0) {
		return 0;
	}

	c = (int*)malloc(sh * sizeof(int));
	i = 0;
	sh = 0;
	while (i < n) {
		if (*(b + 1 * k + a[i]) != 2) {
			c[sh] = a[i];
			i++;
			sh++;
		}
		else {
			i++;
		}
	}
	for (i = 0; i < (sh); i++) {
		printf("%i ", c[i]);
	}
	return 0;
}