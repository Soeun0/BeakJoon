#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a, count = 0;
	vector<string>sit(200);
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (sit[a] == "1") {
			count++;
		}
		else {
			sit[a] = "1";
		}
	}

	cout << count;
}
