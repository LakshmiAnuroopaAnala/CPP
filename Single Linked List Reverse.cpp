#include<iostream>
using namespace std;
struct SingleLinkedList
{
	int data;
	struct SingleLinkedList *next;
};
struct SingleLinkedList *head=NULL;
void insert(int data)
{
	struct SingleLinkedList* newnode=(struct SingleLinkedList*) malloc((sizeof(struct SingleLinkedList)));
	newnode->data=data;
	newnode->next=NULL;
	if (head==NULL)
	{
		head=newnode;
		//cout<<"HI";
		return;
	}
	struct SingleLinkedList* temp;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	return;
}
void display(SingleLinkedList* head)
{
	if(head==NULL)
	{
		cout<<"List Is Empty";
	}
	else
	{
	struct SingleLinkedList *temp=head;	
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	}
	return;
}
SingleLinkedList* reverse()
{
	struct SingleLinkedList *dummy=NULL;
	struct SingleLinkedList *nextNode;
	while(head!=NULL)
	{
		nextNode=head->next;
		head->next=dummy;
		dummy=head;
		head=nextNode;
	}
	return dummy;
}
int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	cout<<"Actual List"<<"\n";
	display(head);
	cout<<"\n"<<"After Reverse"<<"\n";
	SingleLinkedList* headAfterReverse=reverse();
	display(headAfterReverse);
	return 0;
}
