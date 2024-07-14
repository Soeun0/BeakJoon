#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
char A[1000001];

int main() {
	int count = 0;

	fgets(A, 1000001, stdin);

	int len = strlen(A)-2;
	for (int i = 0; A[i] != '\0'; i++) {
		if (A[i - 1] < '!' && A[i] >= '!') {
			count++;
		}
	}
	cout << count << "\n";
}