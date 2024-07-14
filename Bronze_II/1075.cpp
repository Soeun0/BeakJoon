#include <iostream>
#include<cmath>
using namespace std;

int main() {
	long long a, b, fix, answer = 00;
	cin >> a >> b;

	fix = (a / 100) * 100;
	for (int i = 0; i < 100; i++) {
		if (((fix + i) % b) == 0) {
			answer = (fix + i) % 100;
			break;
		}
	}

	//답 출력
	if (answer < 10) {
		cout << "0" << answer;
	}
	else {
		cout << answer;
	}
}