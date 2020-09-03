// Tour 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	long long N;
	cin>>N;
	string first;
	map<string,long long>m;
	for(long long i=1;i<=N;i++)
	{
		string s1;
		cin>>s1;
		if(i==1)
		{
			first=s1;
		}
		
		m[s1]=i;
	}
	
	long long cost[N+1][N+1];
	
	for(long long i=1;i<=N;i++)
	{
		for(long long j=1;j<=N;j++)
		cin>>cost[i][j];
	}
	
	long long total_cost=cost[m[first]][m[first]];
	
	long long num_cities;
	cin>>num_cities;
	
	for(long long i=1;i<=num_cities;i++)
	{
		string s;
		cin>>s;
		total_cost+=cost[m[first]][m[s]];
		first=s;
	}
	cout<<total_cost;
}
