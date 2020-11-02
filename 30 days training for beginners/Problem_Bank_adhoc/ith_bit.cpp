// check ith bit set or not
#include<bits/stdc++.h>
using namespace std;



int main()
{

int n=5; // 101

//check if 0th bit is set or nit

int i=1;

int ans=n & (1<<i);

if(ans)
cout<<ans;
else
cout<<"ith bit is not set";
	
}
