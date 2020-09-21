#include<bits/stdc++.h>
using namespace std;


// some not working shit..................................................................


int main()
{
	int r=4;
	int c=4;
    int dx[]={0,-1,0,1};
	int dy[]={1,0,-1,0};
		
	int matrix[r][c]={{2,0,1,0},{1,0,1,2},{0,0,2,2}};
	
	// 0 and 2 can be sources
	
	vector<pair<int,int>>source={{0,0},{0,1},{0,3},{1,1},{1,3},{2,0},{2,1},{2,2},{2,3}};
	
	int distance=INT_MAX;
	
	int s=source.size();
	
	//cout<<s;
//	int distance=INT_MAX;
	for(int i=0;i<s;i++)
	{
		int distancenow=0;
		pair<int,int>dest=source[i];
	//	int destx=dest.first;
	//	int desty=dest.second;
	//	queue<pair<int,int>>q=q.push(begin);
		for(int j=0;j<s;j++)
		{
		    	pair<int,int>src=source[j];	
			//int sourcex=source.first;
			//int sourcey=source.second;
			queue<pair<int,int>>q;
			q.push(src);
			int d=0;
			while(!q.empty())
			{
				auto x=q.front();
				q.pop();
				if(x.first==dest.first&&x.second==dest.second)
				
				{
					distancenow+=d;
					break;
				}
				
				for(int i=0;i<4;i++)
				{
					if(x.first+dx[i]>=0&&x.first+dx[i]<r&&x.second+dy[i]>=0&&x.second+dy[i]<c&&matrix[x.first+dx[i]][x.second+dy[i]!=1])
					{
						d++;
						q.push({x.first+dx[i],x.second+dy[i]});
					}
				}
				
				
			}
			
			
		}
		
		cout<<distancenow;
		cout<<endl;
		 distance=min(distancenow,distance);
	}
	
	
		cout<<distance;
}
