// DIRECTED GRAPH sum of dependencies
#include<bits/stdc++.h>
using namespace std;


int sum_dependecies(vector<vector<int>>g)
{
	int edge_sum=0;
	vector<int>::iterator it;
	for(int i=0;i<g.size();i++)
	{
		
		//for(int k=g[i][0];)
		for(it=g[i].begin();it!=g[i].end();++it)
		{
			if(*it)
			edge_sum++;
		}
	}
	
	return edge_sum;
	
}

int main()
{
	
	int n=3;
	vector<vector<int>>g(n);
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
	}
	
	cout<<sum_dependecies(g);
}
