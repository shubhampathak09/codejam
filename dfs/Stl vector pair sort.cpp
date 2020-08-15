// overlapping intervals

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	vector<vector<int>>a={{2,3},{4,5},{3,2},{7,8},{1,5}};
	sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
    	pair<int,int>p=make_pair(a[i][0],a[i][1]);
    	cout<<p.first<<"\t"<<p.second;
    	cout<<"\n";
	}
    sort(a.rbegin(),a.rend());
    cout<<"\n";
     for(int i=0;i<a.size();i++)
    {
    	pair<int,int>p=make_pair(a[i][0],a[i][1]);
    	cout<<p.first<<"\t"<<p.second;
    	cout<<"\n";
	}
 


// rows=a.size();
// col=a[0].size();
//   cout<<a[0][0]<<a[1][1];	
	
}
