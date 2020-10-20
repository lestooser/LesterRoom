#include<stdio.h>
#include<math.h>
void main() {
	int n, k, a, b, c,c1 = 0,c2=0;
	scanf_s("%d", &n);
	printf("result : %.1f", n - floor(n/60) * 60);

	scanf_s("%d", &k);
	printf("result : %.1f", k - floor(k/7)*7);

	scanf_s("%d%d", &k, &n);
	if (n == 0) {n = 1;}
	a = k - floor(k / 7) * 7 + n - 1;
	if (a >= 7) { a -= 7; }
	printf("result : %d", a);

	scanf_s("%d%d%d", &a, &b, &c);
	n = a * b;
	while (c <= a) {
		a -= c;
		c1++;
	}
	while (c <= b) {
		b -= c;
		c2++;
	}
	printf("Result : %d, %d", c1*c2 , n - c1*c2*(c * c));

	scanf_s("%d", &n);
	k = n / 100;
	if (n < k * 100 + 1) { printf("result : %d", k); }
	else { printf("result : %d", k + 1); }

}