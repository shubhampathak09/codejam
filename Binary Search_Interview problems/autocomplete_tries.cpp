// autocomplete  something going wrong all suh=ggerstion not coming
#include<bits/stdc++.h>
using namespace std;


struct trie
{
	struct trie *children[26];
	bool isend;
	
	trie()
	{
		memset(children,0,sizeof(children));
	}
};


struct trie*root;

void insert(string st)
{
	struct trie*curr=root;
	for(auto ch:st)
	{
		int index=ch-'a';
		if(!curr->children[index])
		{
			curr->children[index]=new trie();
		}
		curr=curr->children[index];
	}
	curr->isend=true;
}

bool found(string st)
{
	struct trie*curr=root;
	for(auto ch:st)
	{
		int index=ch-'a';
		if(!curr->children[index])
		return false;
		curr=curr->children[index];
	}
	return curr->isend;
}


bool islastnode(struct trie*root)
{
	for(int i=0;i<26;i++)
	{
		if(root->children[i])
		return false;
	}
	return true;
}


void suggestions(struct trie*root,string currprefix)
{
	
	if(root->isend)
	{
		cout<<currprefix;
		cout<<endl;
		return;
	}
	
	if(islastnode(root))
	{
		return;
	}
	
	for(int i=0;i<26;i++)
	{
		if(root->children[i])
		{
		
		currprefix.push_back(97+i);
		suggestions(root->children[i],currprefix);
		currprefix.pop_back();
	}
	
	}
	
}

int autocomplete(struct trie*root,string query)
{
	
	struct trie*curr=root;
	int lv;
	int n=query.length();
	for(lv=0;lv<n;lv++)
	{
		if(!curr->children[query[lv]-'a'])
		{
			return 0;
		}
		curr=curr->children[query[lv]-'a'];
	}
	
	
	bool isword=(curr->isend==true);
	
	bool islast=islastnode(curr);
	
	
	if(isword&&islast)
	{
		cout<<query<<endl;
		return -1;
	}
	
	if(!islast)
	{
		string prefix=query;
		suggestions(curr,prefix);
		return 1;
		
	}
}


int  main()
{
	
	root=new trie();
	
	insert("fight");
	insert("light");
	insert("fighter");
	insert("fig");
	insert("fit");
	
	autocomplete(root,"fi");
//	cout<<found("fight");
//	cout<<found("sight");
	
}

