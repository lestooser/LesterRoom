#include<stdio.h>
#include<locale.h>
#include<math.h>
int a, b, c, sum;
int max(int a, int b) {
	if (a > b) { return a; }
	else { return b; }
}
int min(int a , int b ) {
	if (a > b) { return b; }
	else { return a; }
}
void main() {
	setlocale(LC_ALL, "Rus");
	scanf_s("%d%d", &a, &b);
	if (a != b) {
		printf("%d, %d\n", max(a, b), max(a, b));
	}
	else {
		a = 0, b = 0;
		printf("%d, %d\n", a, b);
	}
		

	scanf_s("%d%d%d", &a, &b, &c);
	sum = a + b + c;
	printf("Sum = %d\n",  sum-min(min(a,b),c));


	scanf_s("%d%d%d", &a, &b, &c);
	if (abs(a - b) < abs(a - c)) {
		printf("%d, Long: %d\n", b, abs(a - b));
	}
	else { printf("%d, Long: %d\n", c, abs(a - c)); }


	scanf_s("%d%d", &a, &b);
	if (a > 0){
		if (b > 0) {
			printf("1\n");
		}
		else { printf("4\n"); }
	}
	else if (b > 0) { printf("2\n"); }
	else { printf("3\n"); }


	scanf_s("%d", &a);
	if (a == 0) { printf("������� �����\n"); }
	if (a > 0) {
		if (a % 2 == 0) { printf("������������� ������ �����\n"); }
		else { printf("������������� �������� �����\n"); }
	}
	else {
		if (a % 2 == 0) { printf("������������� ������ �����\n"); }
		else { printf("������������� �������� �����\n"); }
	}


	scanf_s("%d", &a);
	if (a>=100) {
		if (a % 2 == 0) { printf("������ ���������� �����\n"); }
		else { printf("�������� ���������� �����\n"); }
	}
	else if (a>=10){
		if (a % 2 == 0) { printf("������ ���������� �����\n"); }
		else { printf("�������� ���������� �����\n"); }
	}
	else{
		if (a % 2 == 0) { printf("������ ����������� �����\n"); }
		else { printf("�������� ����������� �����\n"); }
	}
}
	