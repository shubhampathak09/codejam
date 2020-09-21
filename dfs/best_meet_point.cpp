
#include<bits/stdc++.h>
using namespace std;

#define row 3
#define col 5

int mindistance(int grid[][col])
{
	
	if(row==0||col==0)
	return 0;
	
	vector<int>horizontal;
	vector<int>vertical;
	
    for(int i=0;i<row;i++)
    {
    	for(int j=0;j<col;j++)
    	{
    		if(grid[i][j]==1)
    		{
    			horizontal.push_back(i);
    			vertical.push_back(j);
			}
    		
		}
	}
	
	sort(vertical.begin(),vertical.end());
	sort(horizontal.begin(),horizontal.end());
	
	int mid=horizontal.size()/2;
	
	int x=horizontal[mid];
	int y=vertical[mid];
	
	int distance=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(grid[i][j]==1)
			{
				distance+=abs(x-i)+abs(y-j);
			}
		}
	}
	
	return distance;
}


int main()
{
	
	int grid[row][col] = {{1, 0, 1, 0, 1}, {0, 1, 0, 0, 0},{0, 1, 1, 0, 0}}; 
	
	cout<<mindistance(grid);
	
}
