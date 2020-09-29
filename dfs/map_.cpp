#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	// freuency of each character in string
	
	string s1="geeksforgeeks";
	
	unordered_map<char,int>m;
	
	for(auto x: s1)
	{
		m[x]++;
	}
	
	unordered_map<char,int>::iterator it;
	
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" "<<it->second;
		cout<<endl;
	}
	
}
