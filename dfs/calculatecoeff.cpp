//computing binomial  coefficents
// incorrect


#include<bits/stdc++.h>
using namespace std;

int mat[100][100];

int calculatecoeff(int n,int r)
{
	
	if(r<0||r>n)
	return 0;
	
	if(mat[n][r]!=0)
	return mat[n][r];
	
	if(r==0||n==r)
	return mat[n][r]=1;
	
	
	
	return mat[n][r]=calculatecoeff(n-1,r-1)+calculatecoeff(n-1,r);
	
	
}

int main()
{
	
	//cout<<calculatecoeff(5,3);
	
	int n=5;
	vector<vector<int>>ans;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<i<<"\t"<<j;
	    cout<<calculatecoeff(i,j);	
		ans[i].push_back(calculatecoeff(i,j));
	} 
	cout<<endl;
	}
	
	for(int i=0;i<ans.size();i++)
	{
		for(auto it:ans[i])
		{
			cout<<it<<"\t";
		}
		cout<<endl;
	}
}
