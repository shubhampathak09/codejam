#include<bits/stdc++.h>
using namespace std;


int first_pos(int x,vector<int>a)
{
	int low=0;
	int high=a.size()-1;
	
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==x)
		{
			if(mid==0)
			return mid;
			
			if(a[mid-1]<x)
			return mid;
			else
			{
				high=mid-1;
			}
		}
		else
		{
			if(a[mid]>x)
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
	}
	
	return -1;
}

 
int last_pos(int x,vector<int>a)
{
	int low=0;
	int high=a.size()-1;
	
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==x)
		{
			if(mid==a.size()-1)
			return mid;
			
			if(a[mid+1]>x)
			return mid;
			
			else
			{
				low=mid+1;
			}
		}
		else
		{
			if(a[mid]>x)
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
	}
	
	return -1;
}


int main()
{
	
	vector<int>a={1,2,3,4,1,2,3,4,5,6,3,3,4,2,1};
	
	int n=a.size();
	
	
	sort(a.begin(),a.end());
	
	for(auto x:a)
	{
		cout<<x<<" ";
	}
	
	cout<<endl;
    int x;
	
	cin>>x;
	
	cout<<first_pos(x,a)<<endl;
	
	cout<<last_pos(x,a);
		
	
	
}
