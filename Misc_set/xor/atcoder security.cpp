// 
#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	
	// consecutive digits same->its bad 
	//else good
	
 
	string digits;
	
	cin>>digits;
	
	int n=digits.length();
	
	
	for(int i=0;i<n-1;i++)
	{
		
		if(digits[i]-'0'==digits[i+1]-'0')
		{
			cout<<"Bad";  // jsust check
			return 0;
		}
	}
	
	cout<<"Good";
	
	return 0;
}
