#include <iostream>

#include <cstdio>

using namespace std;

int main() {

    // Complete the code.
    int x, y;
    cin >> x >> y;
    string arr[] = {
      "zero",
      "one",
      "two",
      "three",
      "four",
      "five",
      "six",
      "seven",
      "eight",
      "nine"
    };

    for (int i = x; i <= y; i++) {
      if (i >= 1 && i <= 9) {
        cout << arr[i] << endl;
      } else {
        if (i % 2 == 0) {
          cout << "even" << endl;
        } else {
          cout << "odd" << endl;
        }
      }
    }

      return 0;
    }
