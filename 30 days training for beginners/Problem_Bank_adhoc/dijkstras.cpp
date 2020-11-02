  /*Test Case;
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1
*/




#include<bits/stdc++.h>
using namespace std;

void dijkstras()
{
	
 
	
	int n,m;
	cin>>n>>m;
	
	vector<vector<pair<int,int>>>g(n+1);
	vector<int>dist(n+1);
	vector<int>parent(n+1);
	
	for(int i=0;i<m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		g[a].push_back({b,c});
		g[b].push_back({a,c});
	}
	
	
	
	for(int i=1;i<=n;i++)
	dist[i]=INT_MAX;
	
	dist[1]=0;
	parent[1]=-1;
	
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	
	pq.push({0,1});
	
	while(!pq.empty())
	{
		pair<int,int>u=pq.top();
		pq.pop();
		for(auto x:g[u.second])
		{
			if(dist[x.first]>x.second+dist[u.second])  //check inf>dis then updated inf to dis
			{
				dist[x.first]=x.second+dist[u.second];
				parent[x.first]=u.second;
				pq.push({dist[x.first],x.first});
			}
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		cout<<dist[i]<<" ";
	}
	
	cout<<endl;
	vector<int>ans;
	int i=n;
    while(i!=-1)
    {
    	ans.push_back(i);
    	i=parent[i];
	}
	
	cout<<endl;
	reverse(ans.begin(),ans.end());
	cout<<"printing the shortest path from 1 to n=5.."<<endl;
	for(auto r:ans)
	{
		cout<<r<<" ";
	}
}

int main()
{
	dijkstras();
}
