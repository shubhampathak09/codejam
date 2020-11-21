// dice throw re visuailisation..
#include<bits/stdc++.h>
using namespace std;

// recursion

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
	
	cout<<ways_togetsum(7,2,6);
	
	//1 6  6 1  2 4  4 2  3 4  4 3 5,2,2,5
}
