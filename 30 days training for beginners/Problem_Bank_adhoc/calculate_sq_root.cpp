// compute the square root of x

#include<bits/stdc++.h>
using namespace std;


int compute(int n)
{
	int left=0;
	int right=n;  // something tricky here

	
	while(left<right)
	{
        int mid=(left+right)/2;	//4
			
	    if(mid*mid>n)
	    {
	    	right=mid;
		}
		else
		{
			left=mid+1;
		}
		 
	}
	return left-1;
}

int main()
{
	cout<<compute(9)<<"\t"<<compute(15)<<"\t"<<compute(25);
	
	
}
