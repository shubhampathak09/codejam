// sort strings 
// we will be using tries to sort string
// lets see how

#include<bits/stdc++.h>
using namespace std;


struct trie
{
	struct trie*child[26];
	bool isend;
	
 	trie()
	{
	 for(int i=0;i<26;i++)
	 child[i]=NULL;
//     memset(child,0,sizeof(child));   //memset(child,with initializini,size) syntax
	}
};


struct trie*root;


vector<string>result;

void insert(string s)
{
struct trie*curr=root;

for(auto ch:s)
{
	int index=ch-'a';
	if(curr->child[index]==NULL)
	{
		curr->child[index]=new trie();
	}
	curr=curr->child[index];
	}
	curr->isend=true;	
}


bool search(string s)
{
	struct trie*curr=root;
	
	for(auto ch:s)
	{
		int index=ch-'a';
		if(curr->child[index]==NULL)
		{
			return false;
		}
		curr=curr->child[index];
	}
	return curr->isend;
}


void display(struct trie*root,char str[],int level)
{
	
	if(root->isend)
	{
		str[level]='\0';
		result.push_back(str);
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
	vector<string>sample={"monday","tuesday","saturday","wednesday","friday"};
	
//	sort(sample.begin(),sample.end());
	
//	for(int o=0;o<sample.size();o++)
//	cout<<sample[o]<<" ";
    
    root=new trie();
    
   // insert("monday");
    
    vector<string>dictionary={"rabbit","wabbit","cat","mouse","clown","mike","arnab","gowswami"};
    char str[20];
    int level=0;
    
    for(auto x:dictionary)
    {
    	insert(x);
	}
    
    display(root,str,level);
    
    for(auto re:result)
    {
    	cout<<re<<endl;
	}
    
  //  cout<<search("mond");
}
