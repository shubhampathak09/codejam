#include<bits/stdc++.h>
using namespace std;

// mcm 

int t[10001][10001];

int mcm(int a[],int i,int j)
{
	
	if(i>=j)
	return 0;
	
	if(t[i][j]!=-1)
	return t[i][j];
	
	int ans=INT_MAX;
	
	for(int k=i;k<=j-1;k++)
	{
		ans= min(mcm(a,i,k)+mcm(a,k+1,j)+a[i-1]*a[k]*a[j],ans);
	}
	return t[i][j]=ans;
}
/*
void solve()
{
	
	int t;
	
	cin>>t;
	
	while(t--)
	{
		
		
	}
	
}
*/
int main()
{
	
	memset(t,-1,sizeof(t));
	
	int a[]={10,20,30,40,30};
             //   i k
			//40*20  * 20*30     30*10*10*30
			// 40*30   30*30
			// 40*30*30      			                  
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<mcm(a,1,n-1);
	
}
