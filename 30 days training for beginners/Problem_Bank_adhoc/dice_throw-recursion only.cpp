// dice throw re visuailisation..
#include<bits/stdc++.h>
using namespace std;

// recursion

//3 dice sum =17
/*
if(x==0&&d=0)
return 1;

if(x<0||d==0)
return 0;

if(dp[x][d]!=-1)
return dp[x][d];
ways=0;
for(int i=1;i<=f;i++)
ways+=countways(x-i,f,d-1);

return dp[x][d]=ways;
*/
int ways_togetsum(int x,int d,int f)
{
	if(x==0&&d==0)
	return 1;
	 
	if(x<0||d<=0)
	return 0;
	 
	 int ways=0;
	 for(int i=1;i<=f;i++)
	 {
	 	ways+=ways_togetsum(x-i,d-1,f);
	 }
	
	return ways;
}


int main()
{
	
	cout<<ways_togetsum(17,3,6);
	
	//1 6 
	// 6 1
//	 2 5
//	 5 2
//	 4 3
//	 3 4
	  
}
