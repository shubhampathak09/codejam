// lets try to solve a similar problem which we say few days back
// fair work lord

#include<bits/stdc++.h>
using namespace std;


int findsum(int a[],int start,int end)
{
	int sum=0;
	for(int i=start;i<=end;i++)
	sum+=a[i];
	return sum;
}


int findworkload(int a[],int n,int k)
{
	if(k==1)
	return findsum(a,0,n-1);
	
	if(n==1)
	{
		return a[0];
	}
	
	int best=INT_MAX;
	
	for(int i=1;i<=n;i++)
	{
		best=min(best,max(findworkload(a,i,k-1),findsum(a,i,n-1)));
	}
	
	return best;
}

int main()
{
/*		
{ 10, 20, 30, 40, 50, 60, 70, 80, 90 }
3
Returns: 170
This is the example from above.*/

/*test case 1

int a[]={10,20,30,40,50,60,70,80,90};
int n=sizeof(a)/sizeof(a[0]);
int k=3;

int ans=findworkload(a,n,k);

cout<<ans;	

*/

/*
	
{ 568, 712, 412, 231, 241, 393, 865, 287, 128, 457, 238, 98, 980, 23, 782 }
4
Returns: 1785
The filing cabinets should be partitioned as follows:
	568 712 412 | 231 241 393 865 | 287 128 457 238 98 | 980 23 782
*/

int a[]={ 50,50,50,50,50,50,50};

int n=sizeof(a)/sizeof(a[0]);

int k=2;

cout<<findworkload(a,n,k);
}
