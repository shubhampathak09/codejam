// modifying the stack to find minimym

#include<bits/stdc++.h>
using namespace std;

 
int main()
{
	

stack<pair<int,int>>st;

int mn=INT_MAX;

//n

vector<int>a;

a={3,5,9,2,3,4,6,7};

for(auto x: a)
{
	mn=min(x,mn);
	st.push({x,mn});
 }
 
 // minimum will be
 int ele=st.top().second;
 
 cout<<ele;
 
 // will come back to this problem later:p
 // for now this solution will do
 
}
