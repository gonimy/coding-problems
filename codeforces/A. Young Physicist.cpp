#include<iostream>
using namespace std;
int main() {
	int n, x, y, z, cntX = 0, cntY = 0, cntZ = 0;
	cin >> n;
	while (n--) {
		cin >> x >> y >> z;
		cntX += x;
		cntY += y;
		cntZ += z;
	}
	if (cntX == 0 && cntZ == 0 && cntY == 0) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}
