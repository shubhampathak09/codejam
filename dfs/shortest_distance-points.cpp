// shortest distance among points

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	vector<pair<int,int>>v={{1,2},{2,3},{4,5},{3,4},{1,1}};
	
	int l=v.size();
	
	int distance=0;
	
	pair<int,int> curr_point=v[0];
	for(int i=0;i<l;i++)
	{
		pair<int,int>temp1=v[i];
		for(int k=0;k<l;k++)
		{
		
			pair<int,int>temp2=v[k];
			distance=max(distance,(int)sqrt(pow(abs(temp1.first-temp2.first),2)+pow(abs(temp1.second-temp2.second),2)));
		}
		
	}
	
	cout<<distance;
}


