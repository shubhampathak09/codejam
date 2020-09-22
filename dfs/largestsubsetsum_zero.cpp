#include<bits/stdc++.h>
using namespace std;

// brute force approach takrs o(n2) time because of 2 nested loops


int count_largest_sumzero(int a[],int n)
{
	int max_len=0;
	
	for(int i=0;i<n;i++)
	{
		int curr_sum=0;
		for(int j=i;j<n;j++)
		{
			curr_sum=curr_sum+a[j];
			
			if(curr_sum==0)
			{
				max_len=max(max_len,j-i+1);
			}
		}
		
	}
	
	return max_len;
}

int main()
{
	int nums[] = {1, 1, 1, 1, -1, -1, 1, -1};
	
	int len=sizeof(nums)/sizeof(nums[0]);
	
	vector<int> nums1={1,2,3,4,5};
	
//	cout<<nums1.size()<<endl;
	
	cout<<count_largest_sumzero(nums,len);
}
