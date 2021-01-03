#include <stdio.h>
void main() {
	float i,n, k;
	k = 0;
	scanf_s("%f", &n);
	for (i = 1; i <= n; i++) {
		k += (2*i - 1);
		printf("%.2f \n", k);
	}
}

