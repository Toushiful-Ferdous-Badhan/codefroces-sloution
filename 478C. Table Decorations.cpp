//https://codeforces.com/problemset/problem/478/C


#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	long long r, g, b, ans;
	cin>>r>>g>>b;
	ans=min(min(min((r+g+b)/3, r+g), g+b), b+r); 
	cout<<ans<<endl;
	return 0;
}
