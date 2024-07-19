#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {

	int h, m, s;
	scanf("%d:%d:%d", &h, &m, &s);

	int h2, m2, s2;
	scanf("%d:%d:%d", &h2, &m2, &s2);

	if (s > s2) {
		m2 = m2 - 1;
	}
	if (m > m2) {
		h2 = (h2 - 1);
	}

	h = h2 - h;
	m = m2 - m;
	s = s2 - s;

	if (h < 0) {
		h = 24 + h;
	}
	if (m < 0) {
		m = 60 + m;
	}
	if (s < 0) {
		s = 60 + s;
	}

	cout << setw(2) << setfill('0') << h;
	cout << ":";
	cout << setw(2) << setfill('0') << m;
	cout << ":";
	cout << setw(2) << setfill('0') << s;
	

}
