#include<bits/stdc++.h>
using namespace std;

struct trie
{
	struct trie*child[26];
	bool isend;
	trie()
	{
//	 for(int i=0;i<26;i++)
//	 child[i]=NULL;
     memset(child,0,sizeof(child));   //memset(child,with initializini,size) syntax
	}
	
};

//
//struct trie
//{
//	struct trie* child[26];
//	bool isend;
//	
//	trie()
//	{
//    memset(child,sizeof(child)),0; // initalising the children woth null
//}
//};
struct trie*root;


void insert(string s)
{
//	cout<<1;
	struct trie*curr=root;
	
	for(auto ch:s)
	{
		int index=ch-'a';
		//cout<<index<<" ";
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
	//cout<<"here";
	trie*curr=root;
	for(auto ch:s)
	{
		int ind=ch-'a';
		if(curr->child[ind]==NULL)
		return false;
		curr=curr->child[ind];
	}
	return curr->isend;
}

/*string recursion(struct trie*root)
{
	struct trie*curr=root;
	
	 if(curr==NULL)
	 {
	 	return "";
	 }
	
	string s="";
	
	if(curr->isend==true)
	return s;
	
	
	for(int i=0;i<26;i++)
	{
		if(curr->child[i]!=NULL)
		{
		
		s+=(i+'a');
		recursion(curr->child[i]);
	}
	}
	return "";
 } 

*/

void display(struct trie*root,char str[],int level)
{
	if(root->isend)
	{
		str[level]='\0';
		cout<<str<<endl;
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
	
	vector<string>dictionay={"monday","tuesday","wednesday","thursday","friday","saturday"};
	
	for(auto str:dictionay)
	{
		insert(str);
	}
	cout<<search("uesday");  //0
	cout<<endl;
	cout<<search("monday");  //1
	cout<<endl;
	cout<<search("thursday");// 1
	cout<<endl;
	cout<<search("sc");      //0
	
	cout<<endl;
	
	int level=0;
	char str[20];
	display(root,str,level);
	
//	cout<<recursion(root);
	
}
