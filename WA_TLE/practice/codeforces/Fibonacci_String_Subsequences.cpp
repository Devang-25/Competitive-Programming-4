// https://codeforces.com/contest/946/problem/F
// wrong answer

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	long long cost=0;
	string s,t;
	cin>>n>>x;
	cin>>s;
	string m1,m0;
	m0="0";m1="1";
	for(int i=2;i<=x;i++)
	{
		t=m1+m0;
		m0=m1;
		m1=t;
	}
	for(int i=0;i<t.length();i++)
	{
		cout << i << " " << t << endl;
		if(t.find(s,i)<t.length())
			++cost;
		if (t.find(s,i) != string::npos) 
		i=t.find(s,i);
	}
	cout<<cost%1000000007;
}
