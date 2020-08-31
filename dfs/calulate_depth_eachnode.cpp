
#include<bits/stdc++.h>
using namespace std;

vector<int>tree[10000];
vector<int>depth(10000);


void cal_depth(int src,int parent)
{
	
	int src_depth=0;
	
	for(int x:tree[src])
	{
		if(x!=parent)
		{
			cal_depth(x,src);
			src_depth=max(src_depth,1+depth[x]);
		}
	}
	
	depth[src]=src_depth;
}

int main()
{
	
	int n;
	cin>>n;
	
	for(int i=1;i<=n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		tree[a].push_back(b);
		tree[b].push_back(a);
			}
	
	cal_depth(1, 0);
	
	for(int i=1;i<=n;i++)
	cout<<depth[i];
	
}
