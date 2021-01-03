#include <stdio.h>
void ref() {
	float n, k,m=1;
	int i;
	k = 1.1;
	scanf_s("%f", &n);
	for (i = 0; i < n; i++) {
		m *= k;
		k = k + 0.1;
		printf("%.2f \n", m);
	}
}

