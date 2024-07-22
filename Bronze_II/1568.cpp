#include <iostream>
using namespace std;

int main() {
	long long N;
	cin >> N;

	long long i = 1, count = 0;
	while (1) {
		N = N - i;
		i++, count++;
		if (N <= 0) break; //멈추기
		if (N < i) {
			i = 1;
		}

	}
	cout << count;
}
