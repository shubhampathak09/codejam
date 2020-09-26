
//1 1 1 1 1

// most significant bit

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int ans=0;
	int n;
	
	cin>>n;
	
	int a[n];
	
	vector<int>cnt(32,0);
	
	for(int i=0;i<n;i++)
    {
	
 	cin>>a[i];
 	
	int bit=0;
	
	while((1<<(bit+1))<=a[i])
	{
		++bit;
	}
	cnt[bit]=cnt[bit]+1;
		
	}
	//cout<<bit;
	
//	cout<<cnt.size();
	
	// 27 4th bit is most significant bit
	
	for(int i=0;i<32;i++)
	{
		ans+=(cnt[i] *cnt[i]-1)/2;
		
	}
	
	cout<<ans;



}
