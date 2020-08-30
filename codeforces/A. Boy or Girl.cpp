#include<iostream>
#include<set>
#include<string>
using namespace std;
int main() {
	string s;
	set<char> ss;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		ss.insert(s[i]);
	}
	if (ss.size() % 2 == 0) {
		cout << "CHAT WITH HER!" << endl;
	} else {
		cout << "IGNORE HIM!" << endl;
	}
}
