#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    unordered_map<char, int> letterCount;
    string a;

    while (true) {
        cin >> a;

        if (cin.eof()) break; //파일의 끝이면 멈춤
        else {
            for (char c : a) {
                letterCount[c]++;
            }
        }
    }

    int maxCount = 0;
    vector<char> maxChar;
    for (auto it = letterCount.begin(); it != letterCount.end(); ++it) {
        if (it->second > maxCount) {
            maxCount = it->second;
            maxChar.clear();
            maxChar.push_back(it->first);
        }
        else if (it->second == maxCount) {
            maxChar.push_back(it->first);
        }
    }

    sort(maxChar.begin(), maxChar.end());

    for (char c : maxChar) {
        cout << c;
    }

}
