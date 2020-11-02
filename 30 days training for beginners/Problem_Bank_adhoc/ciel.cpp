#include<bits/stdc++.h>
using namespace std;




int main()
{
	
int a[]={3,4,1,5,6,2};
int sum=0;  int h=4;
for(auto x:a)
{
	if(x%h==0)
	{
		sum+=sum+(x/h);
	}
	else
	sum+= ((x/h)+1);
	}	
	
	
	cout<<sum;
}
