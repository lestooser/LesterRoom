using namespace std;
#include <iostream>
void main (){
	int a, b;
	cin >> a >> b;
	while (a >= b) {
		a -= b;
	}
	cout << a;
}