#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int cnt = 1;
	while (cnt <= n) {
		for (int i = 0; i < n; i++) {
			if (arr[i] == cnt) {
				cout << i + 1 << " ";
				cnt++;
				break;
			}
		}
	}

}
