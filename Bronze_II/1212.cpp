#include <iostream>
#include <vector>
#include <math.h>


using namespace std;

int main() {

	vector<string>a;
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '0') { a.push_back("000"); }
		else if (s[i] == '1') { a.push_back("001"); }
		else if (s[i] =='2') { a.push_back("010"); }
		else if (s[i] == '3') { a.push_back("011"); }
		else if (s[i] == '4') { a.push_back("100"); }
		else if (s[i] == '5') { a.push_back("101"); }
		else if (s[i] == '6') { a.push_back("110"); }
		else if (s[i] == '7') { a.push_back("111"); }
	}

	if (a[0] == "001") {
		a[0] = "1";
	}
	else if (a[0] == "010") {
		a[0] = "10";
	}
	else if (a[0] == "011") {
		a[0] = "11";
	}
	else if (a[0] == "000") {
		a[0] = "0";
	}

	for (int i = 0; i < a.size(); i++) {
		cout << a[i];
	}



}
