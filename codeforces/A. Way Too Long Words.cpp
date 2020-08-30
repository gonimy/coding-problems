#include<iostream>
using namespace std;
int main() {
	int n;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		(str.length() > 10) ?cout << str[0] << str.length() - 2 << str[str.length() - 1]<< endl :cout << str << endl;
	}

}
