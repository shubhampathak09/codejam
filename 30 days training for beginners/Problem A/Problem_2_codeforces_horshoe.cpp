// problem 2
// is your horshoe on other roof

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	set<int>s;
	s={a,b,c,d};
	int si=s.size();  // uniuq item the person already has. he need total of 4
	cout<<4-si;
	
}
