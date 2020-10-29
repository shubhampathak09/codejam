// first and last_occurence using lower_bound and upper_bound

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	vector<int>a={1,2,2,2,3,4,4,5,6};
	
//	int n=sizeof(a)/sizeof(a[0]);
	
	vector<int>::iterator low;
		
 low=lower_bound(a.begin(),a.end(),2);
	
	cout<<low-a.begin();
	
}
