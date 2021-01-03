#include<iostream>
using namespace std;
int Quarter(int x, int y) {
	if (x > 0) {
		if (y > 0) return(1);
		else return(4);
	}
	else {
		if (y > 0) return(2);
		else return(3);
	}
}
void main() {
	int i,x, y;
	for (i = 0; i < 3; i++) {
		cin >> x >> y;
		cout << " quart = " << Quarter(x, y) << '\n';
	}
}