// check cyle

#include<bits/stdc++.h>
using namespace std;

struct node
{ 
	int data;
	struct node*next;
};

struct node*createnode(int data)
{
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->next=NULL;
}


bool checkcyle(struct node*head)
{
	
	struct node*slow=head;
	struct node*fast=head;
	
	while(slow!=NULL&&fast->next!=NULL&&fast!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
//			int count=1;
//			struct node*temp=slow->next;
//			
//			while(temp!=slow)
//			{	count++;			
//				temp=temp->next;
//				
//			}
//			cout<<"Cylce length is "<<count;
////			}

			return true;
		}
		else
		continue;
	}
	return false;
}

int main()
{
//	struct node*head
	
	struct node*head=createnode(1);
	head->next=createnode(2);
	head->next->next=createnode(3);
	
	cout<<checkcyle(head);
	
	cout<<endl;
	
	struct node*head1=createnode(1);
	head1->next=createnode(2);
	head1->next->next=head1->next;
//	head1->next->next->next=head->next->next;
    cout<<checkcyle(head1);


}
