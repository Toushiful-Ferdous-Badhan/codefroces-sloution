//    https://codeforces.com/problemset/problem/1437/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, l, r;
    cin>>t;
    
    while(t--)
    {
        cin>>l>>r;
        
        if(2*l>r)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
