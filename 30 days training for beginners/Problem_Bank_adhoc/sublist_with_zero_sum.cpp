// prefix sums

//int a[]={-1,1,0}

//prefix[0]=-1; a[0];
//prefix[1]=0;  a[0] + a[1];
 
//prefix[2]=0   a[0] +a[1] +a[2]=a[0]+a[1];

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	map<int,int>presum;
	
	
	int a[]={ 15, -2, 2, -8, 1, 7, 10, 23 };
	
	int n=sizeof(a)/sizeof(a[0]);
	int sum=0;
	int max_len=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		
		if(sum==0&&max_len==0)
		max_len=1;
		
		if(sum==0)
		{
			max_len=i+1;
		}
		
		else
		{
			if(presum.find(sum)!=presum.end())
			{
				max_len=max(max_len,i-presum[sum]);
			}
			else
			presum[sum]=i;
			
		}
	}
	
	cout<< max_len;
}
