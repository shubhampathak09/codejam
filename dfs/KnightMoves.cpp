// Minimum knight movrs to reach end of board

#include<bits/stdc++.h>

using namespace std;


int calcKnight(int sx,int sy,int dx,int dy,bool visited[9][9])
{
	
	if(sx==dx&&sy==dy)
	return 0;
	
	visited[sx][sy]=1;
//	int sourcdis=0;
	int knx[]={2,1,-1,-2,-2,-1,1,2};
	int kny[]={1,2,2,1,-1,-2,-2,-1};
//    int knx[] = { -2, -1, 1, 2, -2, -1, 1, 2 }; 
//    int kny[] = { -1, -2, -2, -1, 1, 2, 2, 1 }; 
	
	queue<pair<pair<int,int>,int>>q;
	q.push({{sx,sy},0});
	while(!q.empty())
	{
		//cout<<"here";
		auto u=q.front();
		q.pop();
		
		
		 if(u.first.first==dx&&u.first.second==dy)
				{ // if(u.second==0)   
				   //  return 1;
					return u.second;
				}
		
		for(int i=0;i<8;i++)
		{
			
				int curx=u.first.first+knx[i];
			    int cury=u.first.second+kny[i];
                int curd=u.second+1;
			
			 		
					
		    
			
			if(curx>=1&&curx<=8&&cury>=1&&cury<=8&&visited[curx][cury]==false)  //[1-8][-8]
			{
	//			cout<<curx<<cury<<endl;
	           
	            visited[curx][cury]=true;    
	            q.push({{curx,cury},curd});
	                 //u.second++;		
				
			}
		}
		
	}
	
	return -1;
}

int main()
{
	
//	int board[8][8];        incorrect took 1hr 45 min to find this error
	
	bool visited[9][9];
	
    memset(visited,0,sizeof(visited));
	
	string s1,s2;
	cin>>s1>>s2;
// preprocessing the inputs	
	int sx=s1[0]-'a'+1;
	int sy=s1[1]-'0';
	
	int dx=s2[0]-'a'+1;
	int dy=s2[1]-'0';
	
	cout<<sx<<"\t"<<sy<<endl<<dx<<"\t"<<dy;

cout<<endl;
     
  cout<<calcKnight(sx,sy,dx,dy,visited);

}
