#include<bits/stdc++.h>
using namespace std;


bool check(string s1,string s2,string s3,int m,int n,int k)
{
	
	if(m==0&&n==0&&k==0)
	return true;
	
	if(k==0)
	return false;
	
	return check(s1,s2,s3,m-1,n,k-1)||check(s1,s2,s3,m,n-1,k-1);
	
}

int main()
{
	cout<<"checking a few test cases..";
	
	cout<<endl;
	
	cout<<check("YYZ","XXZ","XXYWWW",3,3,7)<<endl;
	
//	xxzxxu     y
	cout<<check("abc","dcef","abcdcef",3,4,7)<<endl;
	
}
