#include<bits/stdc++.h>
using namespace std;

int n,m;  //rows & cols

vector<vector<int>> g; // grid

vector<pair<int,int>>monsters; // coridinates of monsters

map<pair<int,int>,pair<int,int>>pm;  // parent map to store 

pair<int,int>si,se;  // staarting source and ending destination 

vector<pair<int,int>>moves={{0,1},{-1,0},{0,1},{-1,0}};  // movement

bool isvalid(int x,int y,int timer)
{
	if(x<0||x>=n||y<0||y>=m)
	return false;
	if(g[x][y]<=timer)
	return false;               // most important condition
	return true;
}

bool isescape(int x,int y,int timer)
{
	if(!isvalid(x,y,timer))
	return false;
	
	if(x==0||y==0||x==n-1||y==m-1)
	return true;
	
	return false;
}

bool standarad_bfs()
{
	
	queue<pair<pair<int,int>,int>>q;
	q.push({si,0});
	
	pm[si]={-1,-1};
	
	
	while(!q.empty())
	{
		int cx=q.front().first.first;
		int cy=q.front().first.second;
		int timer=q.front().second;
		timer++;
		q.pop();
		for(auto mv:moves)
		{
			int tx=cx+mv.first;
			int ty=cy+mv.second;
			
			if(isescape(tx,ty,timer)==true)
			{
				pm[{tx,ty}]={cx,cy};
				se={tx,ty};
				return true;
			}
			if(isvalid(tx,ty,timer))
			{
				pm[{tx,ty}]={cx,cy};
				g[tx][ty]=timer;
				q.push({{tx,ty},timer});
			}
		}
		
		
	}

    return false;	
}


void preprocess_lava_flow()
{
 
 queue<pair<pair<int,int>,int>>q;
	
 // prrprocessing the monsters
 
 for(auto m:monsters)
 {
 	q.push({m,0});
 }

  // standarad bfs search
  
  while(!q.empty())
  {
  	
  	int cx=q.front().first.first;
  	int cy=q.front().first.second;
  	int timer=q.front().second;
  	
  	timer++;
  	q.pop();
  	
  	for(auto mv:moves)
  	{
  		int tx=cx+mv.first;
  		int ty=cy+mv.second;
  		if(isvalid(tx,ty,timer))
  		{
  			g[tx][ty]=timer;
  			q.push({{tx,ty},timer});
  			
		  }
	  }
  	
  }
	
}




int main()
{
	cin>>n>>m;
	g.resize(n);
	
	for(int i=0;i<n;i++)
	g[i].resize(m);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		g[i][j]=INT_MAX;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			char c;
			cin>>c;
			
			if(c=='#')
			{
				g[i][j]=0;
			}
			else if(c=='M')
			{
				g[i][j]=0;
				monsters.push_back({i,j});
			}
			else if(c=='A')
			{
				g[i][j]=0;
				si={i,j};
			}
			else
			{
				g[i][j]=INT_MAX;
			}
		}
	}
	
	
	if(si.first==0||si.first==n-1||se.second==0||se.second==m-1)
	{
		cout<<"YES"<<endl;
		cout<<0;
		return 0;
	}
	
	preprocess_lava_flow();
	
	if(!standarad_bfs())
	{
		cout<<"NO"<<endl;
		return 0;
	}
	
	cout<<"YES"<<endl;
	
	pair<int,int>temp=se;
	pair<int,int>temp1=pm[se];
	pair<int,int>ed={-1,-1};
	
	
	vector<char>ans;
	
	
	while(temp!=ed)
	{
		if(temp.second-temp1.second==1&&temp.first-temp1.first==0)
		{
			ans.push_back('R');
		}
		if(temp.second-temp1.second==-1&&temp.first-temp1.first==0)
		{
			ans.push_back('L');
		}
		if(temp.second-temp1.second==0&&temp.first-temp1.first==-1)
		{
			ans.push_back('U');
		}
		if(temp.second-temp1.second==0&&temp.first-temp1.first==1)
		{
			ans.push_back('D');
		}
		temp=pm[temp];
		temp1=pm[temp];
	}
	
	reverse(ans.begin(),ans.end());
	
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
}
