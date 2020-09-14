#include<bits/stdc++.h>
using namespace std;

#define INF 1e7

void solve()
{
	
	int n,m;
	cin>>n>>m;
	vector<vector<pair<int,int>>>g(n+1);
	vector<int>d(n+1);
	
	for(int i=0;i<m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		g[a].push_back({b,c});
		g[b].push_back({a,c});
	}
	
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	
	for(int i=1;i<=n;i++)
	d[i]=INF;
	
	int source=1;
	d[source]=0;
	
	pq.push({source,d[source]});
	
	while(!pq.empty())
	{
		
		auto u=pq.top();
		pq.pop();
		
		for(auto x: g[u.first])
		{
			if(d[x.first]>x.second+d[u.first])
			{
				d[x.first]=x.second+d[u.first];
				pq.push({x.first,d[x.first]});
			}
		}
		
	}
	
	cout<<"Printing the Shortest paths form city "<<1<<endl;
	
	for(int i=1;i<=n;i++)
	{
		if(d[i]==INF)
		{
			cout<<"no path"<<endl;
		}
		else
		cout<<"city "<<1<<"to "<<i<<".."<<d[i]<<endl;
	}
	
}

int main()
{
	solve();
	
}
