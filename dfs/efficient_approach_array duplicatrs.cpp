// duplicates in array o(n) time complexity and o(1) space 
// elements in arays in raneg 1 to n
// coding interview problem
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[]={ 4,   3,   2,   7,   8,    2,   3,    1};
	
   int n=sizeof(a)/sizeof(a[0]);
   
   vector<int>ans;
   
  // a[0]=4 => a[4-1]=a[3]=7=>-ve
   //	 if the element is already negetive push it into ans
	
	for(int i=0;i<n;i++)
	{
		if(a[a[i]-1]>0)
		a[a[i]-1]=-1*a[a[i]-1];
		else
		ans.push_back(abs(a[i]));
	}
	
	for(auto x:ans)
	cout<<x;
}
