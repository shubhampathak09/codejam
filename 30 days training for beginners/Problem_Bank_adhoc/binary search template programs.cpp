// binary search algorithm
// algorithm for first bad version
// let say wr have function isbad(int version) returns true if bad else false;
// based on this find the index of first bad version
//.. 
//

int firstBadversion(int version)
{
	int l=0;
	int r=n-1;
	while(left<right)
	{
		mid=left+(right-left)/2;
		if(isbadversion(mid))
		{
			r=mid;
		}
		else
		{
		l=mid+1;	
		}
	}
	return l;
}
// simple binary search impl

//2.first and last occurence
//1233333334556668
int findfirst(vector<int>&nums,int target)
{
	int left=0;
	int right=nums.size()-1;
	while(left<right)
	{
		int mid=left+right/2;
		if(nums[mid]<target)
	}
}

 




