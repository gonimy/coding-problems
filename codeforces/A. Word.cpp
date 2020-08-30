#include<iostream>
#include <stdio.h>
#include <ctype.h>
#include<string>
#include <algorithm>
using namespace std;
int main() {

	string s;
	cin >> s;
	int lowerCnt = 0, upperCnt = 0;
	for (int i = 0; i < s.length(); i++) {
		if (islower(s[i]))
			lowerCnt++;
		else
			upperCnt++;
	}
	if (lowerCnt >= upperCnt) {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		cout << s << endl;
	} else {
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		cout << s << endl;
	}

}
