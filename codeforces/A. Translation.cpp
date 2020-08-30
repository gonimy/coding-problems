#include<iostream>
#include<string>
using namespace std;
int main() {
	string str1, str2;
	cin >> str1 >> str2;
	if (str1.length() != str2.length()) {
		cout << "NO" << endl;
		return 0;
	}
	for (int j = (str1.length()) - 1, i = 0; i < str1.length(); i++, j--) {
		if (str1[i] != str2[j]) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES";
}
