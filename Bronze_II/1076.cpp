#include <iostream>
#include <string>
using namespace std;

int main() {

	string colors[] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
	int values[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int mul[] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000 };

	string a, b, c;
	cin >> a >> b >> c;

	long long aNum, bNum, cNum;
	for (int i = 0; i < 10; i++) {
		if (colors[i] == a) {
			aNum = i;
		}
		if (colors[i] == b) {
			bNum = i;
		}
		if (colors[i] == c) {
			cNum = i;
		}
	}

	aNum = values[aNum] * 10 + values[bNum];
	aNum = aNum * mul[cNum];

	cout << aNum;
}

//제출하는데 검사 시간 오래걸림