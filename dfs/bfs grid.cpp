 


//
// 
//int searchgrid(char matrix[R][C],int srcx,int srcy,bool visited[R][C])
//{
//	
//	int dis=0;
//	int dx[]={0,-1,1,0};
//	int dy[]={1,0,0,-1};
//	
//	queue<pair<int,int>>q;
//	q.push({srcx,srcy});
//	visited[srcx][srcy]=1;
//	while(!q.empty())
//	{
//		int xp=q.front().first;
//		int yp=q.front().second;
//		q.pop();
//		for(int i=0;i<4;i++)
//		{
//			if(xp+dx[i]>=0&&xp+dx[i]<=R&&yp+dy[i]>=0&&yp+dy[i]<=C&&matrix[xp+dx[i]][yp+dy[i]]!='0'&&!visited[xp+dx[i]][yp+dy[i]])
//			{   
//			    visited[xp+dx[i]][yp+dy[i]]=1;
//				dis++;
//				if(matrix[xp+dx[i]][yp+dy[i]]=='d')
//				return dis;
//				q.push({xp+dx[i],yp+dy[i]});
//			}
//			
//		}
//		
//	}
//	return 0;
//}
 
 
 int main()
 {
 	
 }
