#include <iostream>
using namespace std;

int main() {
	int N, m, M, T, R, X, count = 0, work = 0;
	cin >> N >> m >> M >> T >> R;
	X = m;

	while (1) {
		//운동이 가능한지 아닌지
		if (M - m < T) {
			cout << "-1";
			break;
		}

		if (X + T <= M) {
			X = X+T;
			count++;
			work++;
		}
		else if (X-R < m) {
			X = m;
			count++;
		}
		else if (X - R >= m) {
			X = X - R;
			count++;
		}

		if (work == N) {
			cout << count;
			break;
		}
	}
}