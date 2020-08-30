#include <bits/stdc++.h>

using namespace std;

int sum1, sum2;

int main() {
	int n;
	cin >> n;
	int arr[1000];
	int t = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum1 += arr[i];
	}
	sort(arr, arr + n);
	for (int i = n - 1; i >= 0; i--) {
		sum2 += arr[i];
		t++;
		if (sum2 > sum1 / 2) {
			break;
		}
	}
	cout << t;
}
