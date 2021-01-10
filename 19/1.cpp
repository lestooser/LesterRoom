#include<iostream>
using namespace std;
void main() {
	int i,n, z,j=0,k=0;
	int a[] = { 1,2,3,4,5,6 };
	int b[] = { 1 , 1, 1, 1, 2, 3 };
	int c[] = { 1 ,1 ,2 ,2 ,2 ,2 ,3 ,3 ,3 ,4,4,4 };
	

	cout << " Select mas[] (1-3) : "; cin >> z; cout << '\n'; // выбор массива
	int* d;
	int* e;
	if (z == 1) {
		n = sizeof(a) / sizeof(int);
		d = new int[n];
		for (i = 0; i < n; i++) {
			if (((a[i]!=a[i+1]) and (i!=n-1)) or (i==n-1)) {
				d[i] = a[i];
				k++;
			}
		}
		for (i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << '\n';
	}
	else if (z == 2) {
		n = sizeof(b) / sizeof(int);
		d = new int[n];
		for (i = 0; i < n; i++) {
			if (((b[i] != b[i + 1]) and (i != n - 1)) or (i == n - 1) ) {
				d[i] = b[i];
				k++;
				
			}
		}
		for (i = 0; i < n; i++) {
			cout << b[i] << " ";
		}
		cout << '\n';
	}
		
	
	else if (z == 3) {
		n = sizeof(c) / sizeof(int);
		d = new int[n];
		for (i = 0; i < n; i++) {
			if (((c[i] != c[i + 1]) and (i != n - 1)) or(i == n - 1) ) {
				d[i] = c[i];
				k++;
			}
		}
		for (i = 0; i < n; i++) {
			cout << c[i] << " ";
		}
		cout << '\n';
	}
	
	
	else {
		n = 1;
		d = new int[n];
		cout << " Error ";
	}
	e = new int[k];
	for (i = 0; i < n; i++) {
		if (d[i] != -842150451) {
			e[j] = d[i];
			j++;
		}
	}
	for (i = 0; i < k; i++) {
		cout << e[i] << " ";
	}
}