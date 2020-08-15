// set matrix zeroes


#include<bits/stdc++.h>
using namespace std;


void solution(vector<vector<int>>&matrix)
{
	
int H=matrix.size();
int W=matrix[0].size();


//vector<bool> rowzero(H);
//vector<bool> colzero(W);
bool rowzero[H];	
bool colzero[W];

memset(rowzero,0,sizeof(rowzero));
memset(colzero,0,sizeof(colzero));

for(int i=0;i<H;i++)
{
	for(int j=0;j<W;j++)
	{
		if(matrix[i][j]==0)
		{
			rowzero[i]=true;
			colzero[j]=true;
		}
	}
	}
	
for(int i=0;i<H;i++)
{
	for(int j=0;j<W;j++)
	{
		
		if(rowzero[i]==true||colzero[j]==true)
		matrix[i][j]=0;
	}
	}	
	
	for(int i=0;i<H;i++)
	{
		for(int j=0;j<W;j++)
		{
			cout<<matrix[i][j]<<"\t";
		}
		cout<<"\n";
	}
		
}

int main(){
	
	vector<vector<int>>matrix={{1,1,1},{1,0,1},{1,1,1}};
	
	
	solution(matrix);   // 1 1 1
	                    // 1 0 1
	                    // 1 1 1
	                    
	                    
} 
