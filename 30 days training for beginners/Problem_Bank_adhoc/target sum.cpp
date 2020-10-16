// target sum
/*Input: nums = [2,7,11,15], target = 9
Output: [0,1]
*/

#include<bits/stdc++.h>
using namespace std;

vector<int>targetsum(vector<int>sample,int target)
{
	
	map<int,int>m; // value with indices
	
	int n=sample.size();
//	cout<<n;
	vector<int>result;
	for(int i=0;i<n;i++)
	{
	//	cout<<a[i];
		if(m.find(target-sample[i])!=m.end())
		{
		    //cout<<sample[i];
			result.push_back(m[target-sample[i]]);
			result.push_back(i);
			return result;
		}
		else
		{
	//	  cout<<a[i];
		m[sample[i]]=i;
	//	cout<<i;

}
	}
	return result;
}

int main()
{
	
 vector<int>sample={2,3,4};
	
	//int n=sizeof(a)/sizeof(a[0]);
//	cout<<n;
	int target=6;
	
	vector<int>final=targetsum(sample,target);
	
	for(auto x:final)
	{
		cout<<x<<" ";
	}
	
}
