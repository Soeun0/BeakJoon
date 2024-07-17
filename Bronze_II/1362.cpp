#include <iostream>
#include <vector>
using namespace std;

int main() {

	int cicle = 1;

	while (1) {
		bool life = true;
		int weight; //펫 체중
		int Cweight; //적정 체중
		cin >> Cweight >> weight;

		if(Cweight == 0 && weight == 0) {
			break;
		}

		while (1) {
			char a;
			int b;
			cin >> a >> b;

			//입력 받은 행동 검사
			if (a == 'E') {
				weight -= b;
				if (weight <= 0) {
					life = false;
				}
			}
			else if (a == 'F') {
				weight += b;
			}
			else if (a == '#') {
				break;
			}


		}

		//펫 검사
		if (life == false) {
			///펫 사망함
			cout << cicle << " RIP" << '\n';
		}
		else if (Cweight / 2 < weight && Cweight * 2 > weight) {
			//펫은 행복함
			cout << cicle << " :-)" << '\n';
		}
		else {
			//펫은 슬픔
			cout << cicle <<" :-(" << '\n';
		}

		cicle++;
	}


}