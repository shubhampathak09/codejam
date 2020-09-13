
#include<bits/stdc++.h>
using namespace std;

int a[1000];
int seg[4*1000];


void build(int index,int low,int high)
{
	
	if(low==high)
	{
		seg[index]=a[low];
		return;
	}
	int mid=(low+high)/2;
	build(2*index+1,low,mid);
	build(2*index+2,mid+1,high);
	
	seg[index]=min(seg[2*index+1],seg[2*index+2]);
}

int query(int index,int low,int high,int l,int r)
{
	// completely inside
	if(low>=l&&high<=r)
	{
		return seg[index];
	}
	if(low>r||high<l)
	return INT_MAX;
	
	int mid=(low+high)/2;
	
	int left=query(2*index+1,low,mid,l,r);
	int right=query(2*index+2,mid+1,high,l,r);
	
	return min(left,right);
}

int main()
{
	
		// q queries
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	build(0,0,n-1);
	
//	for(int i=0;i<n;i++)
//	cout<<seg[i]<<"\t";
	
	int q;
	cin>>q;
	
//	int arr[] = {1, 3, 2, 7, 9, 11};
     
	  
	
	
	// l=1  r=5
	
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		cout<<query(0,0,n-1,l,r);
	}
	
}
