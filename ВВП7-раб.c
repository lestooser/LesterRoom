#include <stdio.h>
#include<math.h>
#define PI 3.14159265
void main() {
	float x, a, y, res;
	printf("enter your num : ");
	scanf_s("%f", &x);
	printf("Result : %.2f\n", x * PI / 180 );
	printf("enter num again : ");
	scanf_s("%f", &x);
	printf("Result : %.2f\n", x * 180 / PI );
	printf("enter your numbers : ");
	scanf_s("%f%f%f", &x, &a, &y);
	x = a / x;
	y *= x;
	printf("1 = %.2f, Y = %.2f\n", x, y);
	printf("enter your numbers : ");
	scanf_s("%f%f%f%f", &x, &a, &y, &res);
	if (x < a) x = a - x; 
	else { x -= a; } // x - разность скоростей
	x *= res; // х - пройденное расстояние
	printf("distance = %.2f\n", x + y);
	printf("Enter A and B for Ax+B=0: ");
	scanf_s("%f%f", &a, &x);
	printf("X = %.2f\n", -x / a);
	printf("Enter numbers : ");
	float a1, a2, b1, b2, c1, c2;
	scanf_s("%f%f%f%f%f%f", &a1, &b1, &c1, &a2, &b2, &c2);
	a = a1 + a2;
	b1 = b1 + b2;
	c1 += c2;
	if (a == 0 && b1 != 0)
		printf("Y = %.2f", c1 / b1);
	if (a == 0 && b1 == 0 && c1 == 0)
		printf("Y = any num");
	if (a == 0 && b1 == 0 && c1 != 0)
		printf("doesn't have an answer");
	if (a != 0 && b1 == 0)
		printf("Y = %.2f", c1 / a);
	if (a != 0 && b1 != 0)
		x = -b1 / a;
}