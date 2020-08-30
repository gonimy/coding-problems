#include<iostream>
using namespace std;
int main() {

	int k, n, w;
	cin >> k >> n >> w;
	int tot = 0, i = 1;
	for (int i = 1; i <= w; i++) {
		int kk = k * i;
		tot += kk;
	}
	(tot > n) ? cout << tot - n : cout << 0;

}
