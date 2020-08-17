// prefix sum

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin>>s;
	
	int n=s.length();
//	cout<<s[n-1]-'0';
	vector<int>v(n+1);
	if((s[n-1]-'0')%2==0)
{
	v[n]=1;
	
}
else
v[n]=0;


	for(int i=n-2;i>=0;i--)
	{
	//	cout<<"x";
		if((s[i]-'0')%2==0)
		{
		v[i+1]=v[i+2]+1;
		
		//	cout<<v[i+1];
		}
		else
		v[i+1]=v[i+2];
	}
	
	for(int i=0;i<s.length();i++)
	{
		cout<<v[i+1]<<"\t";
	}
	
}
int main()
{
	
	solve();
}
