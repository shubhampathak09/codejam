// bruteforce way to generate all subsets

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int a[]={1,2,3,4};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)  // when i dont want to have single subsets
		{
			cout<<"{"<<a[i]<<" "<<a[j]<<"}";
			cout<<endl;
		}
		
	}
	
}
