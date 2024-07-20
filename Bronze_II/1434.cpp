#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int a, b, book = 0, box = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		box += a;
	}
	for (int i = 0; i < m; i++) {
		cin >> b;
		book += b;
	}

	cout << box - book;

}
