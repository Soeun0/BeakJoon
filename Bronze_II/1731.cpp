#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;

	bool sum = false, mux = false;
	vector<int> num;
	for (int i = 0; i < T; i++) {
		long long a;
		cin >> a;
		num.push_back(a);
	}

	if (num[1] + (num[1] - num[0]) == num[2] && num[1] - num[0] != 0) {
		sum = true;
	}
	else if (num[1] * (num[1] / num[0]) == num[2]) {
		mux = true;
	}

	//cout << "sum: " << sum << ", mux: " << mux;

	if (sum == true) {
		cout << num[num.size()-1] + (num[1] - num[0]);
	}
	else if (mux == true) {
		cout << num[num.size()-1] * (num[1] / num[0]);
	}
}