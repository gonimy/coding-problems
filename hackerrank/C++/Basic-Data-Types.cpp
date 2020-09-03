#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {
    // Complete the code.
    int  nInt;long long nLong; char  c; float nFloat; double nDble; 
    cin>>nInt>>nLong>>c>>nFloat>>nDble;
    cout<<nInt<<endl<<nLong<<endl<<c<<endl<<fixed<<setprecision(3)<<nFloat<<endl<<fixed<<setprecision(9)<<nDble<<endl;
    return 0;
}