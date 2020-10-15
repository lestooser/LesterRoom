#include<stdio.h>
#include<math.h>
void main() {
	float a, b, c;
	printf("Enter A , B  : ");
	scanf_s("%f%f", &a,&b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("new variable A = %.2f, B = %.2f\n", a, b);
	printf("Enter A , B, C  : ");
	scanf_s("%f%f%f", &a, &b, &c);
	a = a + b + c;
	b = a - b - c; // a
	c = a - b - c; // b
	a = a - b - c; // c
	printf("new variable A = %.2f, B = %.2f, C = %.2f \n", a, b, c);
	printf("Enter A , B, C  : ");
	scanf_s("%f%f%f", &a, &b, &c);
	a = a + b + c;
	c = a - b - c; //a
	b = a - b - c; //c
	a = a - b - c; //b
	printf("new variable A = %.2f, B = %.2f, C = %.2f \n", a, b, c); 
	printf("Enter X for y = 3x^6 - 6x^2 - 7 \n");
	scanf_s("%f", &a);
	a = (3 * pow(a, 6)) - (6 * pow(a, 2)) - 7;
	printf("Result : %.2f \n", a);
	printf("Enter A : ");
	scanf_s("%f", &a);
	b = a * a;
	a = b * b;
	a = a * a; 
	printf("Result %.2f\n", a);
	printf("Enter A again : ");
	scanf_s("%f", &a);
	b = a * a;
	c = b * b * a;
	a = c * c * c;
	printf("Result %.2f", a);
}