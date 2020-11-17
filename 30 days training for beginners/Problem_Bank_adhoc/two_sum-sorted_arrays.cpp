#include<bits/stdc++.h>
using namespace std;




bool check(int x, vector<int>temp)
{
	for(auto i:temp)
	{
		if(x==i)
		return true;
	}
	return false;
}


vector<int>twosum(vector<int>numbers,int target){

vector<int>result;
set<int>res;
map<int,int>m;


for(int i=0;i<numbers.size();i++)
{
	m[numbers[i]]=i;
 }
map<int,int>::iterator it;

for(it=m.begin();it!=m.end();++it)
{
	if(m.find(target-(it->first))!=m.end()&&check(it->first,result)==false)
	{
		res.insert(m[it->first]);
		res.insert(m[target-(it->first)]);
	}
}
for(auto x:res)
{
	result.push_back(x);
}

return result;
	
}

int main()
{
	
	vector<int> sample={2,7,11,15};
	
	vector<int>result=twosum(sample,9);
	
	for(auto i:result)
	{
		cout<<i<<" ";
	}
}
