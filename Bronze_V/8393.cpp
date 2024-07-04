#include <iostream>
using namespace std;

int main() {
	int a, sum = 0;
	cin >> a;
	a = a + 1;
	while (a--) {
		sum += a;
	}
	cout << sum;
}