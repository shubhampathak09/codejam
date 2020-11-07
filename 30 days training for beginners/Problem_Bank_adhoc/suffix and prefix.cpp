// peak array index

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	int a[]={1,2,3,5,3,2,1};  //total=17
	
	int n=sizeof(a)/sizeof(a[0]);
	
    int total=0;
    
    for(int i=0;i<n;i++)
    total+=a[i];
	
	int pre[n];
	int suf[n];
	
	pre[0]=a[0];
	suf[0]=total-a[0];
	for(int i=1;i<n;i++)
	{
		pre[i]=a[i]+pre[i-1];
		suf[i]=total-pre[i];
		
		if(pre[i]-a[i]==suf[i])
		{
			int k=i;
			cout<<k;
			break;
		 } 
	}
	for(int i=1;i<n;i++)
	{
		
	}
	
	 
}
