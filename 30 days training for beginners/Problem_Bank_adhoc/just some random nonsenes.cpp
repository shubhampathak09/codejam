#include<bits/stdc++.h>
using namespace std;

int moves(int e,int f)
{
	
	if(f==0||f==1)
	return f;
	
	if(e==1)
	return f;
	
	int mn=INT_MAX;
	
	for(int k=1;k<=f;k++)
	{
		int temp=1+max(moves(e-1,k-1),solve(e,f-k));
		mn=min(mn,temp);
	}
	
	return mn;
}

int main()
{
	
	
}
