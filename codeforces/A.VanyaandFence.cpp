#include <iostream>
using namespace std;
int main()
{
    int i, n,h,width=0;
cin>>n>>h;
while(n--){
cin>>i;
if(i<=h){
width++;
}else{
width +=2;}}
cout<<width<<endl;
   
    return 0;
}
