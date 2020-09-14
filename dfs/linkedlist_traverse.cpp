
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*next;
};

struct node*createnode(int data)
{
	struct node *node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->next=NULL;
	return node;
}

int main()
{
	struct node*head=createnode(1);
	head->next=createnode(2);
	head->next->next=createnode(3);
	
	while(head!=NULL)
	{
		cout<<head->data;
		head=head->next;
	}
	
}
