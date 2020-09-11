#include<iostream>
using namespace std;
int main() {
	int n, cnt = 0, cur = 0;
	cin >> n;
	int tmp;
	while (n--) {
		cin >> tmp;
		if (tmp != cur) {
			cnt++;
			cur = tmp;
		}

	}
	cout << cnt << endl;
}
