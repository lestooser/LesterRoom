#include<iostream>
using namespace std;
int Sign(float x) {
	if (x < 0) return -1;
	else if (x == 0) return 0;
	else return 1;
}
void main() {
	float a, b;
	cin  >> a >> b;
	cout << "Sign(A) + Sign(B) = " << Sign(a) + Sign(b);

}