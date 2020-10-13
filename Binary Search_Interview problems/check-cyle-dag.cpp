
#include<bits/stdc++.h>
using namespace std;




bool iscylcicutil(int v,bool *visited,bool *recstack,vector<vector<int>>g)
{
	if(visited[v]==false)
	{
		visited[v]=true;
		recstack[v]=true;
		
		for(auto x:g[v])
		{
			if(visited[x]==false&&iscylcicutil(x,visited,recstack,g))
			return true;
			
			else if(recstack[x])
			return false;
			
			
		}
		
	}
	
	recstack[v]=false;
	return false;
}

void cycle(int n,vector<vector<int>>g)
{
	
	bool visited[n],recstack[n];
	
	for(int i=0;i<n;i++)
	{
		visited[i]=false;
		recstack[i]=false;
	}
	
	for(int i=0;i<n;i++)
	{
		if(iscylcicutil(i,visited,recstack,g)==true)
		{
			cout<<"Cyle exisits";
			return;
		}
	}
	
	cout<<"Cycle does not exisit";
	return;
}

int main()
{
	
int v=4;
vector<vector<int>>g(4);

g[0].push_back(1);
g[1].push_back(2);
g[0].push_back(2);
g[2].push_back(0);
g[2].push_back(3);
g[3].push_back(3);


cycle(v,g);
	
}

 
