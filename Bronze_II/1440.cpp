#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

vector<string> split(string str, char Delimiter) {
	istringstream iss(str);             // istringstream에 time을 담는다.
	string buffer;                      // 구분자(:)를 기준으로 절삭된 문자열이 담겨지는 버퍼

	vector<string> result;

	while (getline(iss, buffer, Delimiter)) { //iss에 있는 문자열을 구분자(:) 기준으로 buffer에 담는다.
		result.push_back(buffer);               // 구분된 문자열을 vector에 저장
	}

	return result;
}


int main() {
	string time;
	cin >> time;

	vector<string> time2 = split(time, ':');
	/*for (int i = 0; i < time2.size(); i++) {
		cout << time2[i] << '\n'; //잘 나옴 (문자열임)
	}*/

	int x = stoi(time2[0]);
	int y = stoi(time2[1]);
	int z = stoi(time2[2]);

	int count = 0;

	//0이 시간일때
	if (x <= 12 && x >= 1) {
		if (y >= 0 && y <= 59 && z >= 0 && z <= 59) {
			count += 2;
		}
		else if (y != 0 && y != 59 && z != 0 && z != 59) {
			count += 0;
		}
		else {
			count++;
		}
	}
	//1이 시간일떄
	if (y <= 12 && y >= 1) {
		if (x >= 0 && x <= 59 && z >= 0 && z <= 59) {
			count += 2;
		}
		else if (x != 0 && x != 59 && z != 0 && z != 59) {
			count += 0;
		}
		else {
			count++;
		}
	}
	//2가 시간일떄
	if (z <= 12 && z >= 1) {
		if (y >= 0 && y <= 59 && x >= 0 && x <= 59) {
			count += 2;
		}
		else if (y != 0 && y != 59 && x != 0 && x != 59) {
			count += 0;
		}
		else {
			count++;
		}
	}

	cout << count;
}
