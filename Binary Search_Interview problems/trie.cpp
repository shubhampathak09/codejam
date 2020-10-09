
// trie impl insert and search

#include<bits/stdc++.h>
using namespace std;


struct trie
{
	struct trie* child[26];
	bool isend;
	
	trie()
	{
    memset(child,0,sizeof(child)); // initalising the children woth null
}
};

struct trie*root;

void insert(string s)
{
	//cout<<"here";
	struct trie*curr=root;
	for(char ch:s)
	{
		
		int idx=ch-'a';
		if(curr->child[idx]==NULL)
		{
			curr->child[idx]=new trie;  // same as new trie();
		}
		curr=curr->child[idx];
	}
	curr->isend=true;
}


bool search(string s1)
{
	struct trie*curr=root;
	for(auto s:s1)
	{
		int idx=s-'a';
		if(curr->child[idx]==NULL)
		{
			return false;
		}
		curr=curr->child[idx];
	}
	
	if(curr->isend)
	{
		return true;
	}
	else
	return false;
	
}


int main()
{
root=new trie;
int n;  // number of strings
cin>>n;

while(n--)
{
	string s;
	cin>>s;
	insert(s);
	
	}	
	
	

	
	cout<<endl;
	
	cout<<"Input the number of strings that you want to search"<<endl;
	
	int num;
	
	cin>>num;
	
	while(num--)
	{
		string se;
		cin>>se;
	
	if(search(se))
	{
		cout<<"string exists"<<endl;
		
	}
	else
	cout<<"string does not exist"<<endl;
}
}
