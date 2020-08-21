#include<bits/stdc++.h>
using namespace std;

#define M 3
#define N 4


bool perfectsq(int n)
{
	
	double s=sqrt(n);
	return s-floor(s)==0;
	
}

bool checkfibonacci(int n)
{
	
	return perfectsq(5*n*n+4)||perfectsq(5*n*n-4);
}

int goodcell(int mat[M][N])
{
	//int sum
	int count=0;
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
	        int sum=mat[i][j];		
			if(i==0&&j==0||i==M-1&&j==0||i==0&&j==N-1||i==M-1&&j==N-1)
			sum+=2;
			else if(i==0||i==M-1||j==0||j==N-1)
			sum+=3;
			else
			sum+=4;
			
			if(checkfibonacci(sum)==true)
			count++;
		}
	}
	
	return count;
}

int main()
{
	
     int mat[M][N]={{1,0,5,3},{2,17,5,6},{5,8,15,11}};
                      
      cout<<goodcell(mat);                
	
}
