#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string a;
	getline(cin, a);

	string key;
	getline(cin, key);

	while (key.size() < a.size()) {
		key += key;
	}

	vector<char> lock;
	for (int i = 0; i < a.length(); i++) {
			int x = (int)(a.at(i)) - (int)(key.at(i));

			if (x < 1) {
				x += 26;
			}

			if (a.at(i) >= 97 && a.at(i) <= 122) {
				lock.push_back(static_cast<char>(x + 96));
			}
			else {
				lock.push_back(' ');
			}
	}

	for (int i = 0; i < lock.size(); i++) {
		cout << lock[i];
	}

}