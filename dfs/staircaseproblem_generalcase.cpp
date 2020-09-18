#include<bits/stdc++.h>
using namespace std;


int countsteps(int n,int k)
{
	if(n==0||n==1)
	return 1;
	
	int result=0;
	for(int i=1;i<=k;i++)
	{
		result+=countsteps(n-i,k);
	}
	
	return result;
}

int main()
{
	
	
	int n=7,m=2;
	
	cout<<countsteps(n,m);
	
}
