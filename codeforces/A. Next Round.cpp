#include<iostream>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	int cnt = 0, zcnt = 0;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] == 0)
			zcnt++;
	}
	if (zcnt == n) {
		cout << 0 << endl;
	} else {
		for (int i = 0; i < n; i++) {
			if (arr[k - 1] == 0) {
				if (arr[i] > arr[k - 1])
					cnt++;
			} else {
				if (arr[i] >= arr[k - 1])
					cnt++;
			}
		}
		cout << cnt << endl;
	}
}
