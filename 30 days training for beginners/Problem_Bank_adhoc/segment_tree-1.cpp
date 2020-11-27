// segement tree
#include<bits/stdc++.h>
using namespace std;

int a[100000];
int seg[4*100000];

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
	seg[index]=max(seg[2*index+1],seg[2*index+2]);
}


int query(int ind,int low,int high,int l,int h)
{
	
	// tree completly lies in l and r
	
	if(low>=l&&high<=h) // l  low high     h
	return seg[ind];
	
	if(high<l||low>h)    // low  high  l  h  or  l h  low high
	return INT_MIN;
	                     // other wise to go mid of tree range and recur
	int mid=(low+high)/2;
	int left=query(2*ind+1,low,mid,l,h);
	int right=query(2*ind+2,mid+1,high,l,h);
	
	return max(left,right);
	
}

int main()
{
	
	int n;
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	 
	
	
	build(0,0,n);
	
	cout<<query(0,0,n-1,2,3);
}
