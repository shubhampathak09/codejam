//

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	map<char,int>mp;
	
	
	string s;
	//char s[100];
	
    cin>>s;	
//	cin.getline(s,sizeof(s));
	
	for(auto x:s)
	mp[x]++;
	
	char temp;
	
	map<char,int>::iterator it;
	
	int mx=INT_MIN;
	
	for(it=mp.begin();it!=mp.end();++it)
	{
	 
	if(mx<it->second)
	{
		mx=it->second;
		temp=it->first;
	}
	 
	}
	
	
	cout<<temp<<" "<<mx;
	
	
}
