#include<iostream>
using namespace std;
float x,i;
int n;
float Fact2(int N) {
	if (N % 2 == 0) {
		x = 1;
		for (i = 2; i <= N; i+=2) {
			x *= i;
		}
	}
	else {
		x = 1;
		for (i = 1; i <= N; i+=2) {
			x *= i;
		}
	}
	return x;
}
void main() {
	cin >> n;
	cout << " Fact2 = " <<  Fact2(n);
}