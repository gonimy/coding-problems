#include<iostream>
using namespace std;
int main() {

	int n, cnt = 0;
	char x, x1;
	cin >> n >> x;
	n -= 1;
	while (n--) {
		cin >> x1;
		if (x == x1)
			cnt++;
		x = x1;
	}
	cout << cnt << endl;

}
