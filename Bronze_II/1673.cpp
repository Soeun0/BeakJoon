#include <iostream>
using namespace std;

int main() {
	long long a, b, sum;
	while (cin >> a >> b) {
		sum = a;
		while (1) {
			sum += a / b;
			a = (a / b) + (a % b);
			if (a < b) break;
		}

		cout << sum << '\n';
	}
}