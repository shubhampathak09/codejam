
#include<bits/stdc++.h>
using namespace std;

int main()
{
	//
//	cout<<"1";

int v=3;

vector<int>adj[v];

adj[0].push_back(1);

adj[0].push_back(2);

adj[1].push_back(2);


//cout<<adj[1].size();
vector<int>::iterator it;
for(int i=0;i<v;i++)
{
	
	for(it=adj[i].begin();it!=adj[i].end();++it)
	{
		cout<<i<<"->"<<(*it)<<"\t";
		
	}
	cout<<"\n";
}
 
// reverse graph

vector<int>adj1[v];

for(int i=0;i<v;i++)
{
	
	for(it=adj[i].begin();it!=adj[i].end();++it)
	{
		adj1[*it].push_back(i);
	}
 } 

 
cout<<"Reverse Graph"<<endl;

for(int i=0;i<v;i++)
{
	
	for(it=adj1[i].begin();it!=adj1[i].end();++it)
	{
		cout<<i<<"->"<<(*it)<<"\t";
		
	}
	cout<<"\n";
}
 
 
 
}
