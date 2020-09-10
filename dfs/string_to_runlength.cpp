// string to run length

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	string s="aabbd";
	map<char,int>m;
	set<char>se;
	
	int n=s.length(); 
	for(int i=0;i<n;i++)
	{
	
	m[s[i]]++;	
	se.insert(s[i]);	
	}
	
	map<char,int>::iterator it;
	string sample="";
	for(it=m.begin();it!=m.end();it++)
	{
		 sample+=it->first+to_string(it->second);
		//cout<<it->first<<it->second;
	}
	cout<<sample;
}

