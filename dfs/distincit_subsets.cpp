#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a[]={1,2,3};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int tot=1<<n;
//	cout<<tot;
	
	for(int i=0;i<tot;i++)
	{
		for(int k=0;k<n;k++)
		{
			int mask=1<<k;
			if(mask&i!=0)
		    cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	
}
