//problem link: https://codeforces.com/problemset/problem/515/C


#include <bits/stdc++.h>
using namespace std;

string ans[10]={"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
string s1, s2;

int main()
{
	int n;
	cin>>n;
	string s1, s2;
	cin>>s1;
	for (int i=0; i<s1.size(); i++)
	{
		s2+=ans[s1[i]-'0'];
	}
	sort(s2.begin(), s2.end());
	reverse(s2.begin(), s2.end());
	cout<<s2;
}


/*
　
   The question asks you to ask for the largest a

Consider 4! =3! *2! *2!

6! = 5! *3!

8! =7! *2! *2! *2!

9! =7! *3! *3! *2!

So we got f(4)=f(322) f(6)=f(53) f(8)=f(7222) f(9)=f(7332)


Title meaning: Give a string a containing n Arabic numerals only (may have leading 0s), and set the function F(a) = the factorial product of each digit. For example, F(135) = 1! * 3! * 5!. You need to find x so that F(x) = F(a), and there are no 0s and 1s in the numbers that make up x. What is the largest x?

　This is how I did it after reading the conversion of each number.

　　0, 1 ——> empty (represented by an empty string)

　　2 　 ——> 2

　　3 ——> 3

　　4 ——> 322

　　5 ——> 5

　　6 ——> 53

　　7 ——> 7

　　8 ——> 7222

　　9 ——> 7332　

Pay special attention to the size of the array opened by ans. The maximum value of n is 15. Consider the case of all 9, and convert to 4 numbers, that is, 4 * 15 = 60.

Define F(x) equal to the factorial sum of each bit of x.

Now give you an a, and let you find the largest x such that F(x)=F(a)

Define F(x) equal to the factorial sum of each bit of x.

Now give you an a, and let you find the largest x such that F(x)=F(a)

The order of a is obviously irrelevant. For the factorial of each number, there is actually only the longest one.

So it's violent to replace them directly, and then arrange them in order.


*/