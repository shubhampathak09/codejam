// MERGE K SORTED ARRAYS

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	vector<vector<int>>a={{3,4,5},{1,2,7},{6,8,9}};
	
	int n=a.size();
	int k=a[0].size();
	
	vector<int>a1(n*k);
	int out=0;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<k;j++)
		a1[out++]=a[i][j];
	}
	
	for(int i=0;i<out;i++)
	cout<<a1[i]<<"\t";
	cout<<endl;
	
	sort(a1.begin(),a1.end());   // valid for vectors

   // sort(a1,a1+n*k); valid for arrays
    
	for(int i=0;i<out;i++)
	{
	//	for(int j=0;j<k;j++)
		cout<<a1[i]<<"\t";
	}
}
