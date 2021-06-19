#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *left;
	Node *right;
	Node(int val)
	{
		data=val;
		left=right=NULL;
	}
};
int height(Node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	int lh=height(root->left);
	int rh=height(root->right);
	if(lh>rh)
	{
		return lh+1;
	}
	return rh+1;
}

int diameter(Node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	int lh=height(root->left);
	int rh=height(root->right);
	int ld=diameter(root->left);
	int rd=diameter(root->right);
	int height,diameter;
	height=lh+rh+1;
	if(ld>rd)
	{
		diameter=ld;
	}
	else
	{
		diameter=rd;
	}
	
	if(height>diameter)
	{
		return height;
	}
    return diameter;
	//return max((lh+rh+1),max(ld,rd));
}

int main()
{
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	cout<<diameter(root);
	return 0;
}
