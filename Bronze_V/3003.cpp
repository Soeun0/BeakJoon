#include <iostream>
using namespace std;

int main() {
	int king, queen, look, bishop, knights, pawn;
	cin >> king >> queen >> look >> bishop >> knights >> pawn;

	if (king != 1) {
		king = -(king - 1);
	}
	else {
		king = 0;
	}

	if (queen != 1) {
		queen = -(queen - 1);
	}
	else {
		queen = 0;
	}

	if (look != 2) {
		look = -(look - 2);
	}
	else {
		look = 0;
	}

	if (bishop != 2) {
		bishop = -(bishop - 2);
	}
	else {
		bishop = 0;
	}

	if (knights != 2) {
		knights = -(knights - 2);
	}
	else {
		knights = 0;
	}

	if (pawn != 8) {
		pawn = -(pawn - 8);
	}
	else {
		pawn = 0;
	}

	cout << king << ' ' << queen << ' ' << look << ' ' << bishop << ' ' << knights << ' ' << pawn;
}