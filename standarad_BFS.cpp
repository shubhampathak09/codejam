

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>>g(n+1);

    int prev[n+1];
	bool visited[n+1];
	for(int i=1;i<=n;i++)
	visited[i]=0;
	
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	int src,dst;
	cin>>src>>dst;
	queue<int>q;
	
	q.push(src);
	int len=0;
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		if(u==dst)
		{
		//len++;
		break;
	}
	    visited[u]=1;
	    for(auto x: g[u])
	    {
	    //	cout<<x;
	    
	    if(x==dst)
	    {
	    	len++;
	    	break;
		}
	    	if(!visited[x]&&x!=dst)
	    	{
			len++;
	    //	cout<<len;
	    visited[x]=1;
	    		 
	    		prev[x]=u;
	    		q.push(x);
			}
		}
	}
	cout<<"Shortes path from given Source to destination is.."<<len;
}

int main()
{
	
	solve();
}

