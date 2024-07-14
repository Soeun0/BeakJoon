#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0;
	char chess[8][8];

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> chess[i][j];
		}
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (chess[i][j] == 'F') {
				if ((i + j) % 2 == 0) {
					count++;
				}
			}
		}
	}

	cout << count;
}