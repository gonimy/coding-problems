#include<iostream>
using namespace std;
int main() {
	int n, p, q, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p >> q;
		int x = q - p;
		if (x >= 2)
			cnt++;
	}
	cout << cnt << endl;
}
