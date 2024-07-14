#include <iostream>
#include<cmath>
using namespace std;

long long lastNum(long long a, long long b) {
	b = (b % 4);
	if (b == 0) { b = 4; }
	long long c;
	c = pow(a, b);
	c = c % 10;
	if (c == 0) { c = 10; }
	return c;
}

int main() {
	long long T, a, b, c;
	cin >> T;
	while (T--) {
		cin >> a >> b;
		c = lastNum(a, b);
		cout << c << '\n';
	}
}