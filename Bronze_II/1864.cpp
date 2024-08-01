#include <iostream>
#include <cmath>
using namespace std;

int main() {
	string a;
	string octor[9] = { "-","\\","(","@","?",">","&","%","/" };

	while (1) {
		cin >> a;
		if (a == "#") break;
		int line = a.length();
		int num = 0, sum = 0;

		for (int i = 0; i < line; i++) {
			for (int j = 0; j < 9; j++) {
				if (a.substr(i, 1) == octor[j]) {
					num = j;
					if (num == 8) num = -1;
					break;
				}
			}
			sum += pow(8, (line - 1)-i) * num;
		}

		cout << sum << '\n';
	}
}