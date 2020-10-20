#include<stdio.h>
#include<math.h>
void main() {
	float x;
	int a, b, c;
	scanf_s("%f", &x);
	printf("Result : %.1f", ceil(x / 8));

	scanf_s("%d%d", &a,&b);
	printf("Result : %.1f", floor(a / b));

	scanf_s("%d%d", &a, &b);
	c = floor(a / b);
	printf("Result : %.1d", a - b*c);

	scanf_s("%d", &a);
	b = a % 10;
	a = b * 10 + a/10;
	printf("result : %d", a);

	scanf_s("%d", &a);
	b = a / 100;
	a = a % 100 * 10 + b;
	printf("result : %d", a);
}