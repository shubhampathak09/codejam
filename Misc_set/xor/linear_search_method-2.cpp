#include<bits/stdc++.h>
using namespace std;


int main()
{

ios_base::sync_with_stdio(false);  // these two line make it faster passed tle thing damn
	cin.tie(NULL);

int n;

cin>>n;

int ip=0,jp=0;
int k=0;
while(n--)
{
	int var;
	cin>>var;

	if(var==0)
	{
	ip++;
	k=max(k,ip);
	jp=0;	
	}
	else
	{
		jp++;
		k=max(k,jp);
		ip=0;
	}
}
	
cout<<k;	
}
