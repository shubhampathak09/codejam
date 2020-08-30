#include<bits/stdc++.h>
using namespace std;

int calsqroot(int n)
{
	
	int start=1;
	int end=n;
	int mid;
	
	
	while(start<=end)
	{
		
	   mid=(start+end)/2;
		
	    cout<<mid;	
		if(mid*mid==n)
		break;
		
		else if(mid*mid<n)
		{
			start=mid+1;
		}
		else
		start=mid-1;
	}
	
	return mid;
}


int main()
{
	
	int n=81;
	int i;
	for(i=0;i*i<n;++i)
	{
		if(i*i==n)
		break;
	}
	
	
	cout<<i;
	
	
	cout<<"............."<<endl;
	
	cout<<calsqroot(81);
}
