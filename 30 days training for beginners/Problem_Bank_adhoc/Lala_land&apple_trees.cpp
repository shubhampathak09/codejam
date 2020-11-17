#include<bits/stdc++.h>
using namespace std;

void solve()
{
	
	int n;
	cin>>n;
	list<int>pos,neg;
	map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		mp[a]=b;
		if(a>=0)
		pos.push_back(a);
		else
		neg.push_back(a);
	}
	pos.sort();
	neg.sort();
	
	if(pos.size()==0)
	{
	
	cout<<mp[neg.front()];
	return;
}
	else if(neg.size()==0)
	{
		cout<<mp[pos.front()];
		return;
	}
	int sumr=0,suml=0;
	bool flag=true;
	while(flag)
	{
		if(pos.size()==0)
		flag=false;
		else
		{
		
		sumr+=mp[pos.front()];
		pos.pop_front();
	}
		if(neg.size()==0)
		flag=false;
		else
		{
			sumr+=mp[neg.front()];
			neg.pop_front();
		}
	}
	
	flag=true;
	while(flag)
	{
		if(neg.size()==0)
		flag=false;
		else
		{
		
		suml+=mp[neg.front()];
		neg.pop_front();
	}
		if(pos.size()==0)
		flag=false;
		else
		{
			suml+=mp[neg.front()];
			pos.pop_front();
		}
	}
	
	cout<<max(suml,sumr);
	
}

int main()
{
	
	int t;
	cin>>t;
	
	while(t--)
	{
	solve();
	cout<<endl;	
	}
	
	
	
}
