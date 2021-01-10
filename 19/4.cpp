#include<iostream>
using namespace std;
void main() {
	int i, n,k=0,j,i1;
	int a[] = { -1,11,1,5,-5,-5,6,0,-2,10 };
	n = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < n + k; i++) {
		cout << a[i] << ' ';
	}
	for (i = 0; i < n; i++) {
		if (a[i] < 0) k += 1;
	}
	int* b;
	b = new int[n + k];
	cout << '\n';
	for (i=0,j=0; i < n; i++) {
		b[j] = a[i];
		i1 = i;
		if (a[i] < 0) {
			j++;
		}
		j++;
		i = i1;
	}
	for (i = 0; i < n + k; i++) {
		if (b[i] == -842150451) 
			b[i] = 0;
		
	}
	for (i = 0; i < n + k; i++) {
		cout << b[i] << ' ';
	}
}