//    https://codeforces.com/problemset/problem/1433/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int dig=s[0]-'0'-1;
		int len=s.length();
		cout<<dig*10+len*(len+1)/2<<endl;
	}
}1433
