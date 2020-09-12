#include<bits/stdc++.h>
using namespace std;

#define max_nodes 100

vector<int>in(max_nodes);
vector<int>out(max_nodes);


void dfs1(vector<int>g[],int u,int parent)
{
	
	in[u]=0;
	for(int child:g[u])
	{
		if(child==parent)
		continue;
		dfs1(g,child,u);
	    in[u]=max(in[u],1+in[u]);	
	}
	
}


void dfs2(vector<int>g[],int u,int parent)
{
	
	int max1=-1,max2=-1;
	
	for(int child:g[u])
	{
		if(child==parent)
		continue;
		
		if(in[child]>=max1)
		{
			max2=max1;
			max1=in[child];
		}
		else if(in[child]>max2)
		{
			max2=in[child];
		}
		
	}
	
	for(int child:g[u])
	{
		if(child==parent)
		continue;
		
		int longest=max1;
		
		if(in[child]==max1)
		longest=max2;
		
		out[child]=1+max(out[u],1+longest);
		
		dfs2(g,child,u);
	}
	
	
}

 

int main()
{

int n = 11; 
    vector<int> v[n + 1]; 
  
    // initialize the tree given in the diagram 
    v[1].push_back(2), v[2].push_back(1); 
    v[1].push_back(3), v[3].push_back(1); 
    v[1].push_back(4), v[4].push_back(1); 
    v[2].push_back(5), v[5].push_back(2); 
    v[2].push_back(6), v[6].push_back(2); 
    v[3].push_back(7), v[7].push_back(3); 
    v[7].push_back(10), v[10].push_back(7); 
    v[7].push_back(11), v[11].push_back(7); 
    v[4].push_back(8), v[8].push_back(4); 
    v[4].push_back(9), v[9].push_back(4); 
  
     dfs1(v,1,0);	
	 dfs2(v,1,0);
	for(int i=1;i<=10;i++)
	cout<<in[i];
	
	cout<<endl;
	
	for(int i=1;i<=10;i++)
	cout<<out[i];
	
	vector<int>longest_path(n+1);
	for(int i=1;i<=n;i++)
	{
		
		//cout<<i<<"....."<<max(in[i],out[i])<<endl;
		longest_path[i]=max(in[i],out[i]);
		
	}
	
	// longest path printing
	
	cout<<"\n";
	for(int i=1;i<=n;i++)
	cout<<longest_path[i]<<" ";
}

 
