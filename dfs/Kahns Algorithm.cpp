
#include<bits/stdc++.h>
using namespace std;

void  addedge(vector<int>*adj,int u,int v)
{
	adj[u].push_back(v);
//	adj[v].push_back(u);
}


void kahns_algo(vector<int>*adj,int v)
{
	// calculate indegrees
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
	
	vector<int>top_order;
	int cnt=0;
	
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		top_order.push_back(u);
		vector<int>::iterator i;
		for(i=adj[u].begin();i!=adj[u].end();++i)
		{
			indegree[*i]=indegree[*i]-1;
			if(indegree[*i]==0)
			q.push(*i);
		}
		cnt++;
	}
//	
//	cout<<cnt;
//	cout<<endl;
	
	if(cnt!=v)
	{
		cout<<"cycle";
	    return;
	}
	
	for(int i=0;i<top_order.size();i++)
    cout<<top_order[i];
		
}

int main()
{
	
	int V=5;
	
	vector<int>adj[V];
	
	addedge(adj,0,1);
	addedge(adj,1,2);
	addedge(adj,3,4);
	addedge(adj,3,2);
	
	kahns_algo(adj,V);
}
