// Lexicographically Topologcal sort

#include<bits/stdc++.h>
using namespace std;

void addedge(int u,int v,vector<int>*adj)
{
	adj[u].push_back(v);
}

void Lexicograph(vector<int>*adj,int v)
{
	
	vector<int>indegree(v,0);
	for(int i=0;i<v;i++)
	{
		for(auto x: adj[i])
		{
			indegree[x]=indegree[x]+1;
		}
	}
	
	multiset<int>s;
    vector<int>top_order;
	int cnt=0;	
	for(int i=0;i<v;i++)
	{
		if(indegree[i]==0)
		s.insert(i);
	}
	
	while(!s.empty())
	{
		int u=*s.begin();
		s.erase(s.begin());
		top_order.push_back(u);
		vector<int>::iterator i;
		
		for(i=adj[u].begin();i!=adj[u].end();i++)
		{
			indegree[*i]=indegree[*i]-1;
			if(indegree[*i]==0)
			s.insert(*i);
		}
		cnt++;
	}
	if(cnt!=v)
	{
		cout<<"Cycle present";
		return;
	}
	else
	{
		for(int i=0;i<top_order.size();i++)
		cout<<top_order[i];
	}
	
}

int main()
{
	int v=6;
	vector<int>adj[v];
	
	addedge(5, 2,adj); 
    addedge(5, 0,adj); 
    addedge(4, 0,adj); 
    addedge(4, 1,adj); 
    addedge(2, 3,adj); 
    addedge(3, 1,adj); 
	
	Lexicograph(adj,v);
	
}
