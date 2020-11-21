// find probability to get sum>x
// stranege used float still result (0)?
#include<bits/stdc++.h>
using namespace std;

int count_ways(int x,int d,int f)
{
	
	if(x==0&&d==0)
	return 1;
	if(x<0||d<=0)
	return 0;
	
	int count=0;
	for(int i=1;i<=6;i++)
	{
		count+=count_ways(x-i,d-1,f);
	}
	return count;
}

float find_probability(int N,int d,int f)
{
	int sample_space=pow(f,d);
	
	int total_values=0;
	
	if(N>f*d)
	return 0;
	
	for(int i=N+1;i<=f*d;i++)
	{
		total_values+=count_ways(i,d,f);
	}
	
	return float(total_values/sample_space);
}
int main()
{
	// return integer
	cout<<find_probability(10,2,6);
}
