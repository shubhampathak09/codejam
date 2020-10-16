#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	map<char,int>fmap;
	
	
	string s="gegge";
	
	for(int i=0;i<s.length();i++)
	{
		fmap[s[i]]++;
	}
	
	
	map<char,int>::iterator it;
	bool flag=0;
	int count=0;
	for(it=fmap.begin();it!=fmap.end();++it)
	{
		if((fmap[it->first]&1))
		{   
		     count=count+1;
		     if(count>1)
		     {
		     	flag=1;
		     	cout<<"Not possible to make palindrome";
		     	break;
			 }
		}
	}
	
	if(flag==0)
	cout<<"psossible to make palindrome";
	
}
