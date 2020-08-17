// subset partition with minimium diff
#include<bits/stdc++.h>
using namespace std;
// loop through s/2 ->i dp array and the check if dp[j] present in subsetsum(j)
// no need of binary search

int findelement(int a[],int l,int h,int target)
{
	
	while(l<=h)
	{
		int mid=l+(h-l)/2;
		
		if(a[mid]==target)
		return target;
		
		else if(a[mid]>target)
		{
			h=mid-1;
		}
		
		else
		{
			l=mid+1;
		}
	}
	
	return a[l-1];
}


bool subsetsum(int set[],int W,int n)
{
	
	int dp[n+1][W+1];
	
	for(int i=0;i<=W;i++)
	dp[0][i]=0;
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=W;j++)
		{
			
			if(set[i-1]<=j)
			dp[i][j]=dp[i-1][j]||dp[i-1][j-set[i-1]];
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	
	return dp[n][W];
 } 

int main()
{
	
//	int a[]={4,5,6,7,10,23,4,7,9};
//	sort(a,a+9);
//	// 4 4 5 6 7 7 10 23
//	cout<<findelement(a,0,7,9);

int a[]={3,1,4,2,2,1};
// 1 1 2 2 3 4                   4,2  3,1,2,2,1
int sum=0;
int n=sizeof(a)/sizeof(a[0]);
for(int i=0;i<n;i++)
sum+=a[i];
int l=0;
int h=n-1;
sort(a,a+n);
//int target=findelement(a,l,h,sum/2);
int target=sum/2;
//cout<<sum<<endl;
//cout<<target<<endl;
// now find if a subset exists with this target sum
bool found=false;
int mindiff;


// s1,S-s1 => S-2s1 >=0 => s1<=s/2;  check if 0<=s1<=s/2  \
//ANY S1 SATISFIES SUBSETSUM(A[],S1,N) IF YES RESTURN S-2*S1 ELSE -1

for(int j=target;j>=0;j--)
{

if(subsetsum(a,target,n)==true)
{
	mindiff=sum-2*j;
	found=true;
	break;
}

}

if(found==true)
{
	cout<<"miN DIFF SUBSET FOUND.."<<mindiff;
}
else
cout<<"not found";

}
