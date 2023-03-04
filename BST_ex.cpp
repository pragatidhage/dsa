#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *left,*right;
		node(int d){
			data=d;
			left=right=NULL;
		}
};
class tree{
	public:
		node *root;
		tree(){
			root=NULL;
		}
		node *rootval();
		node *insert(node *root,int data);
		void inorder(node *root);
};
node * tree::rootval(){
	return root;
}
node * tree::insert(node *root,int data){
	if(root==NULL){
		root=new node(data);
		return root;
	}
	node *current=root;
	node *parent=NULL;
	while(current!=NULL){
		parent=current;
		if(data<current->data){
			current=current->left;
		}
		else if(data>current->data){
			current=current->right;
		}
	}
	if(data<parent->data){
		parent->left=current;
		current=new node(data);
	}
	else{
		parent->right=current;
		current=new node(data);
	}
	return current;
	
}
void tree::inorder(node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<" "<<root->data;
		inorder(root->right);	
	}	
}
int main(){
	tree t;
	node *root1=NULL;
	t.insert(root1,6);
	root1=t.rootval();
	cout<<root1->data;
}
