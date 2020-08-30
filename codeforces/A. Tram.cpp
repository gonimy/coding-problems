#include<iostream>
using namespace std;
int
main ()
{
  int n;
  cin >> n;
  n--;
  n *= 2;
  int minCap = 0,max=0;
  bool pos = true;
  int m;
  cin>>m;
  while (n--)
    {
      int x;
      cin >> x;
      if (pos)
	{
	  pos = !pos;
	  minCap += x;
	}
      else
	{
	  pos = !pos;
	  minCap -= x;
	}
	if(max<minCap)
	{
	    max=minCap;
	}
    }
    cout<<max<<endl;
    return 0;
}
