#include<bits/stdc++.h>
using namespace std;


// nice use break a classic problem to understand break in detail

vector<int> stockspan(vector<int>a)
{
	int n=a.size();
	vector<int>result(n,1);
//	cout<<n;
	for(int i=0;i<n;i++)
	{
		for(int j=i-1;j>=0;j--)
		{
			if(a[j]>a[i])
			break;
			
			if(a[i]>=a[j])  // 100 34 5 6
			 {
			 	result[i]++;
			 }
			
		}
	}
	
	return result;
}

int main()
{
	vector<int>a={100, 80, 60, 70, 60, 75, 85};
                                	                    
    vector<int>result=stockspan(a);
	
	for(auto x:result)
	{
		cout<<x<<" ";
	 } 
}
