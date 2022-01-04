#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
  int t;
  cin >> t;
  while(t--)
  {
  	int a, b;
  	cin >> a >> b;
  	if(a > b)
  		swap(a,b);
  	if(2*a >= b and (a+b)%3 == 0)
  		cout << "YES";
  	else
  		cout << "NO";
  	cout << endl;
  }
  return 0;
}