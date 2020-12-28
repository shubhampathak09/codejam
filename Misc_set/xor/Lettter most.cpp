// some applications of map

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	
	int n;
	
	cin>>n;
	
	string temp;
	
	cin>>temp;
	
	map<char,int>mp;
	
	for(int i=0;i<n;i++)
	{
		mp[temp[i]]++;
	}
	
	map<char,int>::iterator it;
	int mx=INT_MIN;
	for(it=mp.begin();it!=mp.end();++it)
	{
		mx=max(mx,it->second);
	}
	cout<<mx<<endl;
}

int main()
{
	
	solve();
	
	
	
}
