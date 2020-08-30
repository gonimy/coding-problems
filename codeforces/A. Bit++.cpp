#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	string str;
	int cnt = 0;
	while (n--) {
		cin >> str;
		if (str == "X++" || str == "++X")
			cnt++;
		else
			cnt--;
	}
	cout << cnt << endl;
}
