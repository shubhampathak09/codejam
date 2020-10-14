// first attemp towards solving this problem lolz

#include<bits/stdc++.h>
using namespace std;

#define M 6
#define N 6

struct trie
{
	struct trie*child[26];
	bool isend;
	
	trie()
	{
		memset(child,0,sizeof(child));
	//	isend=false;
	}
	
};


struct trie*root;

void insert(string str,struct trie*root)
{
	
	struct trie* curr=root;
	
	for(int i=0;i<str.length();i++)
	{
		int indx=str[i]-'A';
		if(!curr->child[indx])
		curr->child[indx]=new trie();
		curr=curr->child[indx];
	}
	curr->isend=true;
}

bool search(string str)
{
	
	struct trie* curr=root;
	for(int i=0;i<str.length();i++)
	{
		int indx=str[i]-'A';
		if(!curr->child[indx])
		return false;
		curr=curr->child[indx];
	}
	
	return curr->isend;
}

bool issafe(int i,int j,bool visited[M][N])
{
	if(i>0||i<M||j>=0||j<N&&visited[i][j]==false)
	return true;
	else
	return false;
}

void searchword(struct trie*root,char boggle[M][N],int i,int j,string str,bool visited[M][N])
{
//	struct trie*curr=root;
	
	if(root->isend)
	{
		cout<<str<<endl;
	}
	
	if(issafe(i,j,visited))
	{
		visited[i][j]=true;
		
		for(int k=0;k<26;k++)
		{
			if(root->child[k])
			{
				char ch=(char)k +(char)'A';
				
				if(issafe(i+1,j,visited)&&boggle[i+1][j]==ch)
				searchword(root->child[k],boggle,i+1,j,str+ch,visited);
				
				if(issafe(i+1,j+1,visited)&&boggle[i+1][j+1]==ch)
				searchword(root->child[k],boggle,i+1,j+1,str+ch,visited);
				
				if(issafe(i,j+1,visited)&&boggle[i][j+1]==ch)
				searchword(root->child[k],boggle,i+1,j+1,str+ch,visited);
				
				if(issafe(i-1,j+1,visited)&&boggle[i-1][j+1]==ch)
				searchword(root->child[k],boggle,i-1,j+1,str+ch,visited);
				
				if(issafe(i-1,j,visited)&&boggle[i-1][j]==ch)
				searchword(root->child[k],boggle,i-1,j,str+ch,visited);
				
				if(issafe(i,j-1,visited)&&boggle[i][j-1]==ch)
				searchword(root->child[k],boggle,i,j-1,str+ch,visited);
				
				if(issafe(i+1,j-1,visited)&&boggle[i+1][j-1]==ch)
				searchword(root->child[k],boggle,i+1,j-1,str+ch,visited);
				
				if(issafe(i-1,j-1,visited)&&boggle[i-1][j-1]==ch)
				searchword(root->child[k],boggle,i-1,j-1,str+ch,visited);
				
			}
		}
		
		
		visited[i][j]=false;
	}
}







void findwords(char boggle[M][N],struct trie*root)
{
//	struct trie*curr=root;
	
	bool visited[M][N];
	
	memset(boggle,false,sizeof(boggle));
	
	string str="";
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			int inx=boggle[i][j]-'a';
			if(root->child[inx])
			{
				str+=boggle[i][j];
				searchword(root->child[inx],boggle,i,j,str,visited);
				str="";
			}
		}
	}
	
	
}




int main()
{
	
	vector<string>dictionary={"GEEKS","FOR","QUIZ","GO"}; 
	
	char boggle[M][N]={{'G','I','Z'},{'U','E','K'},{'Q','S','E'}};
	
		
	root=new trie();
	
	for(auto x:dictionary)
	insert(x,root);
	
	findwords(boggle,root);
	
	//cout<<search("cdvfv");
	//cout<<search("GEEKS");
}
