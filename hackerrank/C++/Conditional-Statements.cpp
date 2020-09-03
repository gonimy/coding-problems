#include <bits/stdc++.h>
#include<string>

using namespace std;



int main()
{
    string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
if (n>=1&&n<=9) {
cout<<arr[n]<<endl;
}
else {
    cout<<"Greater than 9"<<endl;
}
    return 0;
}
