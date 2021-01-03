#include<iostream>
float const pi = 3.14;
using namespace std;
void RingS(float r1, float r2) {
	float(bol) = r1 - r2;
	r1 = pi * r1*r1;
	r2 = pi * r2*r2;
	bol = pi * bol*bol;
	cout << "S(r1) = " << r1 << "\t S(r2) = " << r2 << "\t S() = "<< bol;
}
void main() {
	float a, b;
	cin >> a >> b;
	RingS(a, b);
}