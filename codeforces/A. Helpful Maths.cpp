#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	string str;
	cin >> str;
	int n = (str.length() / 2) + 1;
	int arr[n];
	int pos = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] != '+') {
			arr[pos] = (int) str[i] - 48;
			pos++;
		}
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		cout << arr[i];
		if (i != (n - 1)) {
			cout << "+";
		}
	}
	cout << endl;
}
 
