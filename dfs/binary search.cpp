//2 1 5   10
//5  2 1
// 1 6 10 5
//2  1 5

//s/2 +

//6

//2 3  5

//0

// s1 , s-s1->  2s1-S=0=> s1=S/2 


#include<bits/stdc++.h>

using namespace std;



int searchel(int a[],int l,int h,int target)
{
	// make sure sorted
	
	
	
	while(l<=h)
	{
	int mid=l+(h-l)/2;
	
	if(a[mid]==target)
		return target;
		
	else if(a[mid]<target)
	{
		l=mid+1;
		
	}
		
		else
		{
			h=mid-1;
		}
		// 12 7 8 9 10 3 18 target =16=> 3 7 8 9 10 12 17 18	
		
	}
	 return a[l-1];
}
int main()
{
	int a[]={12,7,8,9,10,2,18,15};
	int n=sizeof(a)/sizeof(a[0]);
	int l=0;
	int h=n-1;
	sort(a,a+n);
	cout<<searchel(a,l,h,16);	
}
