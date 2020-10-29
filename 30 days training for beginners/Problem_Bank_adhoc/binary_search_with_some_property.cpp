// binary search ultimate template
#include<bits/stdc++.h>
using namespace std;

//int a[]={2,3,1,4,5,6,7,8,8};

bool property(vector<int>a,int index)
{
	int n=sizeof(a)/sizeof(a[0]);
	
	if(a[index]>6)
	return true;
	else
	return false;
	 
}  // lets say we have some property find first element not smaller than 6

 
int binarysearch(vector<int>a,int n)
{
	int low=0;
	int high=n-1;
	
	if(n==0||!property(a,n-1))  // first occurence  
	return -1;
	
	while(low<high)
	{
		int mid=low+(high-low)/2;
		if(property(a,mid))
		{
			high=mid;
		}
		else
		{
			low=mid+1;
		}
	}
	return low;
}

int main()
{
	vector<int>a={2,3,4,6,1,2,7,8};
	
	sort(a.begin(),a.end());
	//1 2 2 3 4 6 7 8
	int n=a.size();
	
	int index=binarysearch(a,n);
	
	cout<<index<<" "<<a[index];
}
