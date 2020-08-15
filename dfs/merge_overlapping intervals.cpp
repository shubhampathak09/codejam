// overlapping intervals

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	vector<pair<int,int>>a= { {6,8}, {1,9}, {2,4}, {4,7} };
	sort(a.begin(),a.end());
    
    pair<int,int>temp=make_pair(a[0].first,a[0].second);
  //  cout<<temp.first<<temp.second;
    
    // {{1,5},{2,3},{3,2},{4,5},{7,8}}
    
    vector<vector<int>>ans;
    
    for(int i=1;i<a.size();i++)
    {
    	
    if(temp.second>a[i].first)
	{
		// merge
		temp.first=min(temp.first,a[i].first);
		temp.second=max(temp.second,a[i].second);
		}	
    	
    	else   
    	{
    		ans.push_back({temp.first,temp.second});
    		temp.first=a[i].first;
    		temp.second=a[i].second;
		}
	}
    
    ans.push_back({temp.first,temp.second});
	//vector<pair<int>>ans; 
    

for(int i=0;i<ans.size();i++)
{
	
	cout<<ans[i][0]<<" "<<ans[i][1];
	cout<<"\n";
}

// rows=a.size();
// col=a[0].size();
//   cout<<a[0][0]<<a[1][1];	
	
}
