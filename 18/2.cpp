#include<iostream>
using namespace std;
void main() {
	int* a;
	float* b;
	int i, z=0;
	int n;
	float res;
	cin >> n;
	a = new int[n];
	b = new float[n];
	for (i = 0; i < n; i++) {
		a[i] = rand() % 10;
	}
	for (i = 0; i < n; i++) {
		printf("a[%d] = %d\t", i, a[i]);
	}
	cout << '\n';
	for (i = 0; i < n; i++) {
		if (i > 0) {
			z += a[i];
			res = (float)(z) / i;
			b[i] = res;
		}
		else b[i] = a[i];
	}
	for (i = 0; i < n; i++) {
		printf("b[%d] = %.2f\t", i, float(b[i]));
	}
}