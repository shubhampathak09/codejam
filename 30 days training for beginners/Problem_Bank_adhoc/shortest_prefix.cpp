//
// some manipulations in display function and use of some data structures such as map we can generate shortest unique 
// need to check if suffix automaton can be built in same way
//
#include<bits/stdc++.h>
using namespace std;


struct trie
{
	struct trie*child[26];
	bool isend;
	int fr;
	map<int ,char>mp;
	trie()
	{
		memset(child,0,sizeof(child));
		isend=false;
		fr=0;
	}
	
};

struct trie*root;

void insert(string s)
{
	struct trie*curr=root;
	
	for(auto x:s)
	{
		int index=x-'a';
		if(curr->child[index]==NULL)
		{
			curr->child[index]=new trie();
		
		}
		
		curr=curr->child[index];
		curr->fr++;
		curr->mp[curr->fr]=x;
	}
	curr->isend=true;
}

void display(struct trie*root,char str[],int level)
{
	if(root->fr==1)
	{
	//	str[level]=root->mp[];
	  //  str[level]=root->mp[root->fr];
	    str[level]='\0';
	    cout<<str<<endl;
		return;	
	}
	
	int i;
	
	for(int i=0;i<26;i++)
    {
    	if(root->child[i]!=NULL)
    	{
    		str[level]=(i+'a');
    		display(root->child[i],str,level+1);
		}
	}
}
int main()
{
	root=new trie();
	
	insert("wed");
	insert("fed");
	insert("fit");
	insert("fight");
	insert("weter");
	insert("sick");
	char str[20];
	int level=0;
	
	display(root,str,level);
	
	
}
