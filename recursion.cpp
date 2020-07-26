#include<bits/stdc++.h>
using namespace std;
#define INF 1e9+7


void solve(string s, int n)
{
	
	if(n==0)
	return;
	cout<<s<<endl;
	solve(s,n-1);
	
}

int main()
{
	
	string s="Shubham";
	solve(s,10);
}
