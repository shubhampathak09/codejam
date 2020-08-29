
#include<bits/stdc++.h>
using namespace std;

int getmaxseqlen(vector<int>a,int n)
{
	
	int ans=1,result=1;
	
	vector<int>d(n);
	
	for(int i=1;i<n;i++)
	{
		d[i]=a[i]-a[i-1];
	}
	
	for(int i=1;i<n;i++)
	{
		if(d[i]==d[i-1])
		ans++;
		else
		ans=1;
		
		result=max(result,ans);
	}
	return result+1;
}

int main()
{
	
	
	//vector<int>a={10,7,4,6,8,10,11};   //4
//	vector<int>a={9,7,5,3};       //4
//	vector<int>a={5,5,4,5,5,5,4,6};  //3   
	vector<int>a={5,4,3,2,1,2,3,4,5,6};
	int n=a.size();
	
	cout<<getmaxseqlen(a,n);
	
}
