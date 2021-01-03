#include<iostream>
using namespace std;
float a, b;
float PowerA3(float a, float b) {
	b = pow(a, 3);
	return b;
}
void main() {
	int i;
	for (i = 0; i < 5; i++) {
		cin >> a;
		cout << PowerA3(a,b) << ' ';	
	}
}