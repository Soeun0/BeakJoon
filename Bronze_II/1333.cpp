#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, L, D;
	cin >> N >> L >> D;
	
	vector<int>music;

	for (int i = 0; i < N; i++) {
		//음악 재생
		for (int j = 0; j < L; j++) {
			music.push_back(1);
		}
		//전화 받을 수 있는 시간
		for (int j = 0; j < 5; j++) {
			music.push_back(0);
		}
	}

	for (int i = 0; i < D; i++) {
		music.push_back(0);
	}

	int count = 1;
	while (1) {
		if (music[D*count] == 0) {
			cout << D * count;
			break;
		}
		count++;
	}
}