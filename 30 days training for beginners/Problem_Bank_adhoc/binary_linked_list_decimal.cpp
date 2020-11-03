//
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*next;
	
	node(int val)
	{
		data=val;
		next=NULL;
	}
};

int main()
{
	struct node*head=new node(1);
	head->next=new node(0);
	head->next->next=new node(0);
	head->next->next->next=new node(0);
	head->next->next->next->next=new node(1);
	head->next->next->next->next->next=new node(1);
	head->next->next->next->next->next->next=new node(0);
	head->next->next->next->next->next->next->next=new node(1);    // 10001101  //128+16+8+1=153 
	
	int result=0;
	struct node*temp=head;
	while(temp!=NULL)
	{
	 
	result=result*2+temp->data;
		temp=temp->next;
	}
	
	cout<<result;
}
