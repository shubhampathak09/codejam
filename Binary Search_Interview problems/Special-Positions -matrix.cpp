// special positions in matrix

#include<bits/stdc++.h>
using namespace std;

// what is use two c1 and c2 matrix
// two for loops
// maybe adding the elements in matrix row wise and coloumn wise


int main()
{
	
	
    vector<vector<int>>a={{0,0,0,1},{1,0,0,0},{0,1,1,0},{0,0,0,0}};
    
	int w=a.size();
	
	int h=a[0].size();
	
//	cout<<w<<h;
	
	vector<int>c1(w),c2(h);
	
	for(int i=0;i<w;i++)
	{
		for(int j=0;j<h;j++)
		{
			c1[i]+=a[i][j];
			c2[j]+=a[i][j];
		}
		
		}
		int count=0;
		
		for(int i=0;i<w;i++)
		{
			for(int j=0;j<w;j++)
			{
				if(a[i][j]==1&&c1[i]==1&&c2[j]==1)
				count++;
			}
			}
			
			cout<<count;	
	
}
