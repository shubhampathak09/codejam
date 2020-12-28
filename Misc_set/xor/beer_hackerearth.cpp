#include<bits/stdc++.h>
using namespace std;


bool check(string temp,set<char>s)
{
	bool flag=true;
	
	for(int i=0;i<temp.length();i++)
	{
		if(s.find(temp[i])==s.end())
		{
			flag=false;
		}
	}
	return flag;
}

int main()
{
	
	string in;
	
	cin>>in;
	
	set<char>s;
	
	for(auto x:in)
	{
		s.insert(x);
	}
	
	
	int n;
	cin>>n;
	int count=0;
	vector<string>list;
	for(int i=1;i<=n;i++)
	{
		string temp;
		cin>>temp;
	//	list.push_back(temp);
	
	    if(check(temp,s))
	    count++;
	}
	
	cout<<count;
}
