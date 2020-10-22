#include<bits/stdc++.h>
using namespace std;

void solve()
{
	
	int n,m;
	
	cin>>n>>m;
	
	vector<vector<int>>g(n);
	vector<int>indegree(n);
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
		indegree[a]++;
		indegree[b]++;
	}
	
	cout<<"Printing the degrees..."<<"\n";
	
   	for(int i=0;i<n;i++)
   	{
   		cout<<i<<" "<<indegree[i]<<" ";
   		cout<<"\n";
	   }
	
}

int main()
{
	
	solve();
	
}
