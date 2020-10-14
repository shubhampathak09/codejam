// group all anagrams together

#include<bits/stdc++.h>
using namespace std;




int main()
{
	
vector<string>list={"abc","bac","cab","a","b","fdi","difi","abc"};


map<string,vector<string>>mp;

for(auto x:list)
{
   string temp=x;
   sort(temp.begin(),temp.end());	
  	mp[temp].push_back(x);
	}	
	
	 
 	
	map<string,vector<string>>::iterator it;
	int mx=0;
	for(it=mp.begin();it!=mp.end();++it)
	{
	    int x=it->second.size();	  
	//	for(int i=0;i<it->second.size();i++)
	//	cout<<it->second[i];
		//cout<<x;
		mx=max(mx,x);
	}
	
	cout<<mx;
}

