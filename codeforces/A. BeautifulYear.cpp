#include<iostream>
#include<set>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	long n;
	cin >> n;
	set<long> x;
	for (long i = n + 1; i < 90000; i++) {
		string y = to_string(i);
		//1987	cout << y << endl;
		for (long j = 0; j < 4; j++) {
			x.insert(y[j]);
		}
		if (x.size() == 4) {
			long z = stoi(y);
			cout << z << endl;
			return 0;
		} else {
			x= {};
		}
	}

}
