#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int a;
	string b;
	cin >> a >> b;

	vector<string>num(0);
	bool check = true;
	int i = 1;
	while (1) {
		check = true;
		string x = to_string(i);
		for (int j = 0; j < x.size(); j++) {
			if (b == x.substr(j, 1)) {
				check = false;
			}
		}
		if (check == true) {
			num.push_back(x);
		}
		if (num.size() == a) break;
		i++;
	}

	cout << num[num.size() - 1];
}