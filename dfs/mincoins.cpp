// 25 10 5  v-30

//if v==0 then min_coins=0

//min_coins(a[0..i-1],V)=1+

//v-coin[i] 

#include<bits/stdc++.h>
using namespace std;


int mincoins(int a[],int V,int m)
{
	if(V==0)
	return 0;
	
	int res=INT_MAX;
	
	for(int i=0;i<m;i++)
	{
		if(a[i]<=V)
		res=min(res,1+mincoins(a,V-a[i],m));
	}
	return res!=INT_MAX ? res : -1;
}

int main()
{
	
	int coins[]={9,6,5,1};
	int v=11;
	int m=sizeof(coins)/sizeof(coins[0]);
	cout<<mincoins(coins,v,m);
	
}
