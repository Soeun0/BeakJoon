#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;

	long long file[50];
	for (int i = 0; i < T; i++) {
		cin >> file[i];
	}

	long long size;
	cin >> size;

	long long sum = 0;
	for (int i = 0; i < T; i++) {
		if (file[i] % size != 0) {
			sum += ((file[i] / size) + 1) * size;
		}
		else if (file[i] % size == 0) {
			sum += (file[i] / size) * size;
		}
	}

	cout << sum;
}