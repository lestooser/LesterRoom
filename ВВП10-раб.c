#include<stdio.h>
#include<math.h>
void main() {
	int a, b, c;
	scanf_s("%d%d", &a, &b);
	if (a > 2 && b <= 3) {
		printf("YES");
	}
	else { printf("NO"); }


	scanf_s("%d%d%d", &a, &b, &c);
	if (a < b && b < c) {
		printf("YES");
	}
	else { printf("no"); }


	scanf_s("%d", &a);
	if ((a < 100 && a >= 10) && (a % 2 == 0)) { printf("YES"); }
	else { printf("NO"); }

	scanf_s("%d", &a);
	c = a % 10;
	b = a % 100 / 10;
	a /= 100;
	if ((a < b && b < c) || (a > b && b > c)) {
		printf("YES");
	}
	else { printf("NO"); }


	scanf_s("%d", &a);
	if ((a / 1000 == a % 10) && (a % 1000 / 100 == a % 100 / 10)) {
		printf("YES");
	}
	else { printf("NO"); }

	scanf_s("%d%d%d", &a, &b, &c);
	if (b > c && b > a) { 
		a = a + b;
		b = a - b;
		a = a - b;
	}
	else if (c > a && c > b) { 
		a = a + c;
		c = a - c;
		a = a - c;
	}
	if (a * a == b * b + c * c) { printf("yes"); }
	else { printf("no"); }


	scanf_s("%d%d%d", &a, &b, &c);
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		printf('yes');
	}
	else { printf("no"); }
}