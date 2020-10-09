
#include<bits/stdc++.h>
using namespace std;

struct trie
{
	bool isend;
	unordered_map<char,trie*>mp;
	tire()
	{
		isend=false;
	}
};

struct trie*root;

void insert(string str)
{
	//root=new trie();
	struct trie*curr=root;
	for(char ch:str)
	{
		if(!curr->mp.count(ch))
		curr->mp[ch]=new trie();
		curr=curr->mp[ch];
	}
	curr->isend=true;
}

bool search(string str)
{
	struct trie*curr=root;
	for(auto ch:str)
	{
		if(!curr->mp.count(ch))
		return false;
		curr=curr->mp[ch];
	}
	return curr->isend;
}

int main()
{
	root=new trie();
	int n;
	cin>>n;
	
	while(n--)
	{
		string str;
		cin>>str;
		insert(str);
	}
	
	cout<<endl;
	string str;
	cin>>str;
	
	cout<<search(str);
}
