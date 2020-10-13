// revisited boggle
// partially correct but still beteer than nothing

#include<bits/stdc++.h>
using namespace std;


#define M 3
#define N 3

struct trie
{

struct trie*child[26];

bool isend;

trie()
{
	memset(child,0,sizeof(child));
	isend=false;
}
	
};


//struct trie*root;



void insert(struct trie*root,string str)
{
	struct trie*curr=root;
	
	for(int i=0;i<str.length();i++)
	{
		int index=str[i]-'a';
		if(!curr->child[index])
		{
			curr->child[index]=new trie();
		}
		curr=curr->child[index];
	}
	curr->isend=true;
}


bool searchtrie(string str,struct trie*root)
{
	struct trie*curr=root;
	
	for(int i=0;i<str.length();i++)
	{
		int indx=str[i]-'a';
	    if(!curr->child[indx])
	    {
	    	return false;
		}
		curr=curr->child[indx];
	}
	return curr->isend;
}

/*
bool issafe(int i,int j,bool visited[M][N])
{

if(i<0||i>=M||j<0||j>=N)
return false;

if(visited[i][j])
return false;

return true;
	
}
*/

bool issafe(int i, int j, bool visited[M][N]) 
{ 
    return (i >= 0 && i < M && j >= 0 && j < N && !visited[i][j]); 
} 

void search(struct trie*root,char boggle[M][N],string str,int i,int j,bool visited[M][N])
{
	//cout<<"here";
	//cout<<str;
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
				char ch=97+k;
	            //cout<<ch;			
				if(issafe(i+1,j,visited)&&boggle[i+1][j]==ch)
				search(root->child[k],boggle,str+ch,i+1,j,visited);
			
			    if(issafe(i+1,j+1,visited)&&boggle[i+1][j+1]==ch)
			    search(root->child[k],boggle,str+ch,i+1,j+1,visited);
			    
			    if(issafe(i,j+1,visited)&&boggle[i][j+1]==ch)
                search(root->child[k],boggle,str+ch,i,j+1,visited);
				
				if(issafe(i-1,j+1,visited)&&boggle[i-1][j+1]==ch)
				search(root->child[k],boggle,str+ch,i-1,j,visited);
				
				if(issafe(i-1,j,visited)&&boggle[i-1][j]==ch)
				search(root->child[k],boggle,str+ch,i-1,j,visited);
                
				if(issafe(i-1,j-1,visited)&&boggle[i][j-1]==ch)
				search(root->child[k],boggle,str+ch,i,j-1,visited);
				
				if(issafe(i,j-1,visited)&&boggle[i+1][j-1]==ch)
				search(root->child[k],boggle,str+ch,i+1,j-1,visited);
				
				if(issafe(i+1,j-1,visited)&&boggle[i-1][j-1]==ch)							    
			    search(root->child[k],boggle,str+ch,i-1,j-1,visited);
									
			}
			
		}
		
		visited[i][j]=false;
	}
}

void findwords(struct trie*root,char boggle[M][N])
{
	//cout<<"1";
	
	//cout<<boggle[0][0];
	
	bool visited[M][N];
	
	memset(visited,false,sizeof(visited));
	
	string str="";
	
	struct trie*curr=root;
	
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			//cout<<"here";
		//	cout<<boggle[i][j]<<" ";
			int indx=boggle[i][j]-'a';
		 
			if(curr->child[indx])
			{
				//cout<<"here";
				str+=boggle[i][j];
				search(curr->child[indx],boggle,str,i,j,visited);
				str="";
			}
		}
	}
}


int main()
{
	
	vector<string> dictionary={"quiz","q","qutk","qui","z","seke","set","kke"};
	
   char boggle[M][N] = { { 'w', 't', 'k' }, 
                         { 'u', 'e', 'k' }, 
	                     { 'q', 's', 'e' } }; 
	                     
	                     
	struct trie*root=new trie();
	
	for(auto x:dictionary)
	{
		insert(root,x);
	}
	
	//cout<<searchtrie("quiz",root);
	//cout<<endl;
	
	findwords(root,boggle);
}
