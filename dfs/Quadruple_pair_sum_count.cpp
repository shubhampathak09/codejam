#include<bits/stdc++.h>
using namespace std;

int countsum(int a1[],int a2[],int a3[],int a4[],int target,int n )
{
	int count=0;
unordered_set<int>s;	 
	for(int i=0;i<n;i++)
	{
		s.insert(a4[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				int sum=a1[i]+a2[j]+a3[k];
				if(s.find(target-sum)!=s.end())
				count++;
			}
		}
	}
	
	
	return count;
}

int main()
{
	
	int arr1[] = {1, 4, 5, 6};
    int  arr2[] = {2, 3, 7, 8};
    int arr3[] = {1, 4, 6, 10};
    int arr4[] = {2, 4, 7, 8}; 
       int n = 4, x = 30;
	
	cout<<countsum(arr1,arr2,arr3,arr4,x,n);
	
	// O(n3log(n))
	
}
