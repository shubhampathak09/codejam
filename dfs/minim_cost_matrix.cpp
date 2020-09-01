// minimum cost path
#include<bits/stdc++.h>
using namespace std;

#define R 3
#define C 3

int getminimum(int matrix[R][C],int m,int n)
{
	if(m<0||n<0)
	return INT_MAX;
	
	else if(m==0&&n==0)
	return matrix[m][n];
	
	else
	return matrix[m][n] +  min(getminimum(matrix,m-1,n),min(getminimum(matrix,m,n-1),getminimum(matrix,m-1,n-1)));
	
}

int main()
{
	
	int matrix[R][C]={{1,2,3},{4,8,2},{1,5,3}};
	
	// get minim cost to reach from 0,0 to 2 2
	
	cout<<getminimum(matrix,2,2);
	
 } 
