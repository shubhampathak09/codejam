//
#include<bits/stdc++.h>
using namespace std;

#define N 10001

vector<int>adj[N];

int dp1[N];  // when v is included
int dp2[N];  // when v is not included

vector<int>a;

void dfs(int v,int pv)
{
	
	int sum1=0;
	int sum2=0;
	
	// traverse childred
	for(auto x:adj[v])
	{
		
		if(x==pv)
		continue;
		
		dfs(x,v);
		sum1+=dp2[x];
		sum2+=max(dp1[x],dp2[x]);
	}
	
	dp1[v]=a[v-1]+sum1;
	dp2[v]=sum2;
}

void solve()
{
	
	int n=5;
	int m=4;
	
	a.resize(n);
	
	
	a={3,2,4,5,1};
	
	
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	
    
    
	
	int v=1;
	
	dfs(v,-1);
	
	
	cout<<max(dp1[1],dp2[1]);	
}

int main(){
	
 
	solve();
	
	
}
