#include<bits/stdc++.h>
using namespace std;

int checkifap(int n){
	int od=0,ev=0;
	for(int i=1;i<=n;i++)
	{
		if(i&1)
		od++;
		else
		ev++;
		
	}
	
	
	float samplespace= od*(od-1)/2 + ev*(ev-1)/2;
	float total=n*(n-1)*(n-2)/6;
	
	
	cout<<samplespace/total;
}

int main()
{
	
	cout<<checkifap(21);
}
