#include<iostream>
using namespace std;
void main() {
	int k=0,s = 1000;
	float p,pr;
	scanf_s("%f", &p);
	pr = 1+(p/100);
	while (s <= 1100) {
		s *= pr;
		k++;
	}
	cout << k << ' ' << s;
}