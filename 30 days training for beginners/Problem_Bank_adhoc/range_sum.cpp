#include<bits/stdc++.h>
using namespace std;

// Range sum segment trees


int a[10001];

int seg[4*10001];

void build(int index,int low,int high)
{
	
	if(low==high)
	{
		seg[index]=a[low];
		return ;
	}
	
	int mid=(low+high)/2;
	build(2*index+1,low,mid);
	build(2*index+2,mid+1,high);
	seg[index]=seg[2*index+1]+seg[2*index+2];
	
}

int sum(int index,int low,int high,int l,int h)
{
	//completly inside                      l  low  high  h
	if(low>=l&&high<=h)
	return seg[index];
	
	if(low>h||high<l)  //    l  h  low  high     low high  l u
	return 0;
	
	int mid=(low+high)/2;
	int left=sum(2*index+1,low,mid,l,h);
	int right=sum(2*index+2,mid+1,high,l,h);
	
	return left+right;                          
}

int main()
{
    
	int n;
	
	cin>>n;
	
	
		
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	
	build(0,0,n-1);
	
	cout<<sum(0,0,n-1,2,4);
	
}
