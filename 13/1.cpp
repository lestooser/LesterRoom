#include <stdio.h>
void main() {
	float n, k, s;
	int i;
	k = 1.1;
	scanf_s("%f", &n);
	for (i = 0; i < n; i++) {
		k *= k + 0.1;
		printf("%.2f \n", s);
	}
}