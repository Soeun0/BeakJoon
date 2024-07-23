#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	vector<int>high;
	int a, count1 = 0, max = 0;
	for (int i = 0; i < T; i++) {
		cin >> a;
		high.push_back(a);

		if (max < a) {
			max = a;
			count1++;
		}
	}

	int count2 = 0;
	max = 0;
	for (int i = 0; i < T; i++) {
		if (high[T-i-1] > max) {
			max = high[T-i-1];
			count2++;
		}
	}

	cout << count1 << '\n' << count2;
}