// Range Minimum queries spoj

#include<bits/stdc++.h>
using namespace std;

long long a[1000000];
long long seg[4*1000000];


void build(int index,int low,int high)
{
	if(low==high)
	{
		seg[index]=a[low];
		return;
	}
	
	int mid=low + (high-low)/2;
	
	build(2*index+1,low,mid);
	build(2*index+2,mid+1,high);
	seg[index]=min(seg[2*index+1],seg[2*index+2]);
	
}

int query(int index,int low,int high,int l,int r)
{
	
	if(low>=l&&high<=r)
	return seg[index];
	
	if(high<l||r<low)
	return INT_MAX;
	
	int mid=low+(high-low)/2;
	int left=query(2*index+1,low,mid,l,r);
	int right=query(2*index+2,mid+1,high,l,r);
	
	return min(left,right);
}



int main()
{
	
	int n;
	cin>>n;
	 for(int i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 }
	
		build(0,0,n-1);
	
	int q;
	cin>>q;
	while(q--)
	{
		
		int l,r;
		cin>>l>>r;
		cout<<query(0,0,n-1,l,r);
		cout<<endl;
	
	}
}
