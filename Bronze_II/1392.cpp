#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, Q;
	cin >> N >> Q;

	vector<int>music;
	int a, count = 1;
	for (int i = 0; i < N; i++) {
		cin >> a;
		for (int j = 0; j < a; j++) {
			music.push_back(count);
		}
		count++;
	}


	vector<int>quest;
	for (int i = 0; i < Q; i++) {
		cin >> a;
		quest.push_back(a);
	}

	for (int i = 0; i < Q; i++) {
		cout << music[quest[i]] << '\n';
	}
}
