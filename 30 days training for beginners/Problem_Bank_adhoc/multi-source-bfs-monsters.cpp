#include<bits/stdc++.h>  // straange output ????
using namespace std;

vector<vector<int>>g;
vector<pair<int,int>>monster;
map<pair<int,int>,pair<int,int>>pmap;
int n,m;
pair<int,int>si,se;
vector<pair<int,int>>moves={{0,1},{0,-1},{1,0},{-1,0}};


bool issafe(int x,int y,int timer)
{
	if(x<0||x>=n||y<0||y>=m)
	return false;
	if(g[x][y]<=timer)
	return false;
	return true;
}


bool isescape(int x,int y,int timer)
{
	if(!issafe(x,y,timer))
	return false;
	if(x==0||y==0||x==n-1||y==m-1)
	return true;
	return false;
}




void preprocess_laval_flow()
{
queue<pair<pair<int,int>,int>>q;

for(auto m:monster)
{
q.push(make_pair(m,0));
	
}

while(!q.empty())
{
	int cx=q.front().first.first;
	int cy=q.front().first.second;
	int timer=q.front().second;
	timer++;
	q.pop();
	for(auto mx:moves)
	{
		int tx=cx+mx.first;
		int ty=cy+mx.second;
		if(issafe(tx,ty,timer))
		{
			g[tx][ty]=timer;  // preprocessing when the lava reaches that location
		    q.push({{tx,ty},timer});
		}
	}
	
}
	
}


bool bfs_begin()
{
	queue<pair<pair<int,int>,int>>q;
	q.push({si,0});
	pmap[si]={-1,-1};
	
	while(!q.empty())
	{
		int cx=q.front().first.first;
		int cy=q.front().first.second;
		int timer=q.front().second;
		for(auto mv:moves)
		{
			int tx=cx+mv.first;
			int ty=cy+mv.second;
			if(isescape(tx,ty,timer))
			{
				pmap[{tx,ty}]={cx,cy};
				se={tx,ty};
				return true;
			}
			if(issafe(tx,ty,timer))
			{
				pmap[{tx,ty}]={cx,cy};
				g[tx][ty]=timer;
				q.push({{tx,ty},timer});
			}
		}
		
	}
	return false;
}


int main()
{
	cin>>n>>m;
	
	g.resize(n);
	
	for(int i=0;i<n;i++)
	{
		g[i].resize(m);
	}
	
	
	 for(int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      g[i][j] = INT_MAX;
    }
  }  
 
  for(int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      char c; cin >> c;
      if(c == '#')
      {
        g[i][j] = 0;
      }
      else if(c == 'M')
      {
        g[i][j] = 0;
 
          monster.push_back({i,j});
      }
      else if(c == 'A')
      {
        g[i][j] = 0;
        si = {i,j};
      }
      else
      {
        g[i][j] = INT_MAX;
      }
    }
  }
  if(si.first == 0 or si.second == 0 or si.first == n-1 or si.second == m-1) 
  {
    cout << "YES" << endl;
    cout << 0;
    return 0;
  }
  preprocess_laval_flow();
 
  if(!bfs_begin())
  {
    cout << "NO";
    return 0;
  }
  cout << "YES" << endl;
  pair<int,int> tmp = se;
  pair<int,int> tmp1 = pmap[se];
  pair<int,int> ed = {-1,-1};  // end case
  vector<char> ans;
  while(tmp1 != ed)
  {
 
    if((tmp.second - tmp1.second) == 1 and (tmp.first - tmp1.first) == 0)
    {
      ans.push_back('R');
    }
    if((tmp.second - tmp1.second) == -1 and (tmp.first - tmp1.first) == 0)
    {
      ans.push_back('L');
    }
    if((tmp.second - tmp1.second) == 0 and (tmp.first - tmp1.first) == 1)
    {
      ans.push_back('D');
    }
    if((tmp.second - tmp1.second) == 0 and (tmp.first - tmp1.first) == -1)
    {
      ans.push_back('U');
    }
    tmp = pmap[tmp];
    tmp1 = pmap[tmp];
  }
  reverse(ans.begin(), ans.end());
  cout << ans.size() << endl;
  for(auto c: ans)
  {
    cout << c;
  }
	
}
