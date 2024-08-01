#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	b += 1;
	vector<int>flare(b);
	for (int i = 0; i < a; i++) {
		int x;
		cin >> x;

		int j = 1;
		while (b > j * x) {
			flare[x * j] = 1;
			j++;
		}
	}

	int i = 0, count = 0;
	while (b--) {
		if (flare[i] == 1) {
			count++;
		}
		i++;
	}

	cout << count;
}