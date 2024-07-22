#include <iostream>
#include <vector>
using namespace std;
int a[51];

int main() {
	int N, M, L;
	cin >> N >> M >> L;

	int round = 0;
	int ball = 1;
	 
	while (1) {
		if (a[ball] % 2 == 1) {
			ball += L;
			if (ball > N) {
				ball -= N;
			}
			a[ball]++;
		}
		else if (a[ball] % 2 == 0) {
			ball -= L;
			if (ball < 1) {
				ball += N;
			}
			a[ball]++;
		}

		if (a[ball] >= M) {
			break;
		}
		round++;
	}

	cout << round;

}
