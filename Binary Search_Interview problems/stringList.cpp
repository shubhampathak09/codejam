// string list

#include<bits/stdc++.h>
using namespace std;

struct trie
{
	bool isend;
	unordered_map<char,trie*>mp;
	
	trie()
	{
		isend=false;
	}

};


struct trie*root;
vector<string>result;

void insert(string st)
{
struct trie*curr=root;	

for(auto ch:st)
{
	if(!(curr->mp.count(ch)))
	{
		curr->mp[ch]=new trie();
	}
	curr=curr->mp[ch];
}
	curr->isend=true;
}


bool search(string s)
{
	
	struct trie*curr=root;
	for(auto ch:s)
	{
		if(!(curr->mp.count(ch)))
		return false;
		curr=curr->mp[ch];
	}
	return curr->isend;

}
void autocomplete(string str)
{
struct trie*curr=root;
 
for(auto ch:str)
{
	if(!(curr->mp.count(ch)))
	{
		return;
	}
	curr=curr->mp[ch];
 }

 unordered_map<char,trie*>::iterator it;
 
 for(it=curr->mp.begin();it!=curr->mp.end();++it)
 {
 	auto x=it;
 	string res="str"; 
 	for(auto p:x)
 	{
 		res+=p;
 		if((p->second)->isend==true)
 		result.push_back(res);
	 }
 }
 	
//return result;
}
int main()
{
	vector<string>stringList={"Rat","Cat","fat","Mat","hello","hell","help","helsinki","head"};;
    
    //cout<<stringList[0];
    
     root=new trie();
    
    for(int i=0;i<stringList.size();i++)
    {
    	insert(stringList[i]);
	}
    
	string runsuggestion="he";
		
	//vector<string>result;
	autocomplete(runsuggestion);
	
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i]<<"\n";
		}	
		
//	cout<<search("darth");
//	cout<<search("Cat");
}
