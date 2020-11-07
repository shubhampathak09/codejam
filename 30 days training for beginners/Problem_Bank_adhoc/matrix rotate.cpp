#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	int a[3][3]={{7,8,1},{3,4,5},{1,2,3}};
	int mat[3][3];
	
	for(int i=2;i>=0;i--)   // col
	{
		for(int j=0;j<=2;j++) // row
		{
			mat[i][j]=a[2-i][j];  //mat[2][0]=a[0][0]  mat[2][1]=a[0][1]  mat[2][2]=a[2][2];
		}                          //mat[1][0]=a[1][0]
	}
	
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

cout<<endl;
	
   	
	for(int i=0;i<=2;i++)   //first row->last col
	{
		for(int j=0;j<=2;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
