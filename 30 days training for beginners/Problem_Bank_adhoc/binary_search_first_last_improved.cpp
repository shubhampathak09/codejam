#include<bits/stdc++.h>
using namespace std;


int binarysearch(vector<int>nums,int target)
{
	if(nums.empty()||nums.back()<target)
	return nums.size();
	
	int left=0;
	int right=nums.size()-1;
	while(left<right)
	{
		//cout<<"1";
		int mid=(left+right)/2;
		if(nums[mid]<target)
		{
			left=mid+1;
		}
		else
		{
			right=mid;
		}
	}
	return left;
}

bool find_val(int target,vector<int>nums)
{
	set<int>s;
	for(int i=0;i<nums.size();i++)
	s.insert(nums[i]);
	
	return s.find(target)!=s.end();
	
}

int main()
{            //     0 1 2 3 4 5 6 7 8 9 10 11 
	vector<int>nums={1,2,3,3,4,5,5,7,7,8};
	
	int target;
	
	cin>>target;
	
 
	if(find_val(target,nums))
	{
	
	
	int first=binarysearch(nums,target);
	
	int last=binarysearch(nums,target+1)-1;  //interesting
	
    pair<int,int>p=make_pair(first,last);
	
	//cout<<find_val(6,nums);
	
	
	
	cout<<p.first<<" "<<p.second;	
}
else
cout<<0<<" "<<0;
}
