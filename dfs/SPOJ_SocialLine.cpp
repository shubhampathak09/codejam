/*
for(int k=0;k<n;k++)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(d[i][k]<INF&&d[k][j]<INF)
			d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
		}
	}
}

*/

// SPOJ SOCILALINE Possible freinds

#include<bits/stdc++.h>
using namespace std;

vector<int>neig(1000);

void solve(vector<vector<int>>m)
{

int n=m[0].size();

for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(m[i][j]!=1&&i!=j)
		{
			for(int k=0;k<i;k++)
			{
			if(m[i][k]==1&&m[k][j]==1)
			{
				neig[i]++;
				neig[j]++;
				break;
				}	
			}
		}
	}
}

int val=0;
	int index=0;
	

for(int i=0;i<n;i++)
	{
		if(neig[i]>val)
		{
			val=neig[i];
			index=i;
		}
	}
	
	cout<<index<<" "<<val;
	
}


	



int main()
{
	
//	 solve()
//vector<vector<int>>m={{0,1,0},{1,0,1},{0,1,0}};
//vector<vector<int>>m={{0,1,1,1},{1,0,0,1},{1,0,0,0},{1,1,0,0}};
vector<vector<int>>m={{0,0,1,0,0,0,0},{0,0,1,0,0,0,0},{1,1,0,1,0,0,0},{0,0,1,0,1,0,0},{0,0,0,1,0,1,1},{0,0,0,0,1,0,0},{0,0,0,0,1,0,0}};


solve(m);
}
 
