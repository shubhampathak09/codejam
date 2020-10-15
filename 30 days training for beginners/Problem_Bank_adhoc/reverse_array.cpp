#include<bits/stdc++.h>
using namespace std;

// reverse array

swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

int main()
{
	
	int ar[]={1,2,3,5,6}; //-> // 1 6 5 3 2 1
	
    int len=sizeof(ar)/sizeof(ar[0]);	
    
    int mid=(0+len-1)/2;
    for(int i=0;i<=mid-1;i++)
    {
    	swap(ar[i],ar[len-1-i]);
	}
	
	for(int i=0;i<len;i++)
	cout<<ar[i]<<" ";
}
