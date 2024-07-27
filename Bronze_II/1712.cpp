#include <iostream>
using namespace std;

int main() {
	long long a, b, c;
	cin >> a >> b >> c;

	if (c - b > 0) {
		if (a == 0) {
			cout << c / b;
		}
		else {
			if (a / (c - b) >= 0) {
				cout << (a / (c - b)) + 1;
			}
			else {
				cout << "-1";
			}
		}
	}
	else {
		cout << "-1";
	}
}