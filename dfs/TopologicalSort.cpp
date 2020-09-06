
#include<bits/stdc++.h>
using namespace std;

void dfs(int source,vector<int>*adj,bool *visited,stack<int>&s)
{
	visited[source]=true;
	
	cout<<source;
	
	for(auto x: adj[source])
	{
		if(!visited[x])
		dfs(x,adj,visited,s);
	}
	s.push(source);
	
	//cout<<s.size();
}

int main()
{
	int n=3;
	vector<int>adj[3];
	
	stack<int>s;
	
	adj[0].push_back(1);
	adj[1].push_back(2);
	bool visited[n];
	for(int i=0;i<n;i++)
	visited[i]=false;
	
	dfs(0,adj,visited,s);


    cout<<"\n";	
	cout<<"........."<<endl;
	
//	cout<<s.size();
	while(!s.empty())
	{
		//cout<<"here";
		cout<<s.top();
		s.pop();
	}
	// imp concept pass by ref , called function variable changes made inside the function to variable has an effect on it
}
