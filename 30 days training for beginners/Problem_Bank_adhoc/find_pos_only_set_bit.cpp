// find the position of only set bit
//01000
//0001
// number must be power of 2

#include<bits/stdc++.h>

using namespace std;

int findpos(int n)
{
	if(n==0)
	return true;
	
	int count=0;
	int pos=0;
	while(n!=0)
	{
		if(n&1)
		{
			pos++;
			count++;
		}
		else
		pos++;
		
	n=	n>>1;
		
		}
	
	
   if(count==1)
   return pos;
   else
   return -1;
}

int main()
{
	
	cout<<findpos(16);
	// 10000
	
	cout<<endl;
	
	cout<<findpos(17);
	
	
}
