// application of kahns algo

#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int>*adj,int u,int v)
{
	adj[u].push_back(v);
}

void checkcyle_Dag(vector<int>*adj,int v)
{
	
	vector<int>indegree(v,0);
	for(int i=0;i<v;i++)
	{
		vector<int>::iterator it;
		for(it=adj[i].begin();it!=adj[i].end();++it)
		{
			indegree[*it]=indegree[*it]+1;
		}
	}
	queue<int>q;
	
	for(int i=0;i<v;i++)
	{
		if(indegree[i]==0)
		q.push(i);
		}
	
	int cnt=0;
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		vector<int>::iterator it;
		for(it=adj[u].begin();it!=adj[u].end();++it)
		{
			indegree[*it]=indegree[*it]-1;
			if(indegree[*it]==0)
			q.push(*it);
		}
		cnt++;
	}
	
	if(cnt!=v) // if cnt==v then cycle is not present other wise cycle is present
	{
		cout<<"Cycle present in dag";
		return ;
	}
	else
	{
		cout<<"Cycle not present";
		return;
	}
	
}

int main()
{
	
	int v=4;
	vector<int>adj[v];
	addedge(adj,0, 1); 
    addedge(adj,0, 2); 
    addedge(adj,1, 2); 
    addedge(adj,2, 0); 
    addedge(adj,2, 3); 
    addedge(adj,3, 3); 
	
	checkcyle_Dag(adj,v);
	
}
