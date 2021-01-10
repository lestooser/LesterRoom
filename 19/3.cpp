#include<iostream>
using namespace std;
void main() {
	int i, min1, max1, kx, kn, n, mink, maxk, z;
	z = 10;
	//int* a;
	int* b;
	int a[] = {1,7,4,0,4,9,8,8,2,4};
	n = sizeof(a) / sizeof(int);
	b = new int[n+2];
	for (i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	mink = 0; maxk = 0;
	min1 = a[0]; max1 = a[0];
	cout << '\n';
	for (i = 1; i < n; i++) {
		if (a[i] < min1) {
			min1 = a[i];
			mink = i;
		}
		else if (a[i] > max1) {
			max1 = a[i];
			maxk = i;
		}
	}
	cout << '\n';
	kn = min(mink, maxk);
	kx = max(mink, maxk);
	for (i = 0; i < n; i++) {
		if (i < kn)
			b[i] = a[i];
		else if (i<kx-1) {
			b[i + 2] = a[i+1];
		}
		else {
			b[i + 4] = a[i+2];
		}
		
	}
	if (kn == mink) {
		b[kn] = 0;
		b[kn + 1] = min1;
		b[kx+2] = 0;
		b[kx+1] = max1;
	}
	else {
		b[kn] = max1;
		b[kn + 1] = 0;
		b[kx + 2] = min1;
		b[kx+1] = 0;
	}

	for (i = 0; i < n+2; i++) {
		cout << b[i] << " ";
	}
}