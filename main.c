#include<stdio.h>
#include<locale.h>
#include <math.h>
float P, S, a, b , D, Sum, Dif, Pr;
float res, mod;
float Pi = 3.14;
float per(float a, float b) {
	P = 2 * (a + b);
	S = a * b;
	return P, S;
}
float diam(float D) {
	res = D * Pi;
	return res;
}
float qd(float a , float b) {
	Sum = a + b;
	Dif = a > b ? a - b : b - a;
	Pr = a * b;
	mod = a > b ? a/ b : b/ a;
	return Sum, Dif, Pr, mod;
}
void main() {
	setlocale(LC_ALL, "RUS");
	printf("������� ������� �������������� : \n");
	scanf_s("%f%f", &a, &b);
	per(a, b);
	printf("P = %.2f , S = %.2f \n", P, S);
	printf("������� ������� : \n");
	scanf_s("%f", &D);
	diam(D);
	printf("L = %.2f\n", res);
	printf("������� 2 ����� : \n");
	scanf_s("%f%f", &a, &b);
	res = (a + b) / 2;
	printf("������� �������������� = %.2f \n ", res);
	printf("������� 2 ����� : \n");
	scanf_s("%f%f", &a, &b);
	a = pow(a, 2);
	b = pow(b, 2);
	qd(a, b);
	printf("����� = %.2f, �������� = %.2f, ������������ = %.2f, ������� ��������� = %.2f\n", Sum, Dif, Pr, mod);
	printf("������� ��������� 2 ����� : \n");
	scanf_s("%f%f", &a, &b);
	a = fabsf(a);
	b = fabsf(b);
	qd(a, b);
	printf("����� = %.2f, �������� = %.2f, ������������ = %.2f, ������� ��������� = %.2f\n", Sum, Dif, Pr, mod);
	system("pause")
}