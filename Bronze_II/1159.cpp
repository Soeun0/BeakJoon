#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
	int T = 0;
	cin >> T;	
	vector<string> v(T);

	for (int i = 0; i < T; i++) {
		cin >> v[i];
	}

	// 검사하기
	unordered_map<char, int> charCount;
	for (const auto& str : v) {
		charCount[str[0]]++; // 각 문자열의 첫 글자 카운트
	}

	//사전순으로 정렬
	vector<pair<char, int>> sortedCharCount(charCount.begin(), charCount.end());
	sort(sortedCharCount.begin(), sortedCharCount.end());

	int null = 0;
	for (const auto& pair : sortedCharCount) {
		if (pair.second >= 5) {
			cout << pair.first;
			null++;
		}
	}


	if (null == 0) {
		cout << "PREDAJA";
	}
}