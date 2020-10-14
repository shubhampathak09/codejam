// map 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	vector<string>list={"abc","bac","cab","a","b","abcd"};
	
	map<string,vector<string>>mp;
	
	mp["a"].push_back("crimson");

	
	mp["b"].push_back("stuart");
	mp["b"].push_back("gold");
	mp["b"].push_back("rusty");
	
    	mp["c"].push_back("frisbee");
	    mp["c"].push_back("nove");	
	
	
	map<string,vector<string>>::iterator it;
	
	for(it=mp.begin();it!=mp.end();++it)
	{
		  
		for(int i=0;i<it->second.size();i++)
		cout<<it->second[i];
		cout<<endl;
	}
}
