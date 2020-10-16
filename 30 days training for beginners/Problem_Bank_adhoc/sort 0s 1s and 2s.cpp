
#include<bits/stdc++.h>
using namespace std;

swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}



int main()
{
int a[]={1,2,0,0,1,1,2,2,0,0,1,2,0,1};

int n=sizeof(a)/sizeof(a[0]);

 int low=0,mid=0,high=n-1;
 
 //cout<<low<<" "<<high;


while(mid<=high)
{
	switch(a[mid])
	{
		case 0:
			swap(a[mid],a[low]);
			low++;
			mid++;
			break;
		
		case 1:
		    mid++;
			break;
		case 2:
		    swap(a[mid],a[high]);
			high--;
			break;		
	}
}
	
	for(auto x:a)
	{
		cout<<x<<" ";
	}
}
