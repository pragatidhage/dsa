#include <iostream>
#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;
class node{
	public:
		char data;
		node *left,*right;
		node(char d ){
			data=d;
			left=right=NULL;
		}
};
class Stack{
	public:
		node *data[30];
		int top;
		Stack(){
			top=-1;
		}
		bool isempty(){
			if(top==-1){
				return true;
			}
			return false;
		}
		
		void push (node *p){
		  data[++top]=p;	
		}
		
		node *pop(){
			return data[top--];
		}
	
};

class tree{
	public:
		node *root;
		tree(){
			root=NULL;
		}
	    
	    node *rootval(){
	    	return root;
		}
		
		void create();
		void inorder(node *root);		
		void preorder(node *root);		
		void postorder(node *root);		
		void inorder_nonrec(node *root );
		void preorder_nonrec(node* root);		
		void postorder_nonrec(node *root);
		void cnt_leaf(node *root);	
		void cnt_inter(node *root);
};

void tree :: create(){
			char exp[20];
			node *temp,*temp2,*temp1;
			cout<<"Enter postfix expression::"<<endl;
			cin>>exp;
			char ch;
			int i=0;
			Stack s;
			while((ch=exp[i])!='\0'){
				if(isalnum(ch)){
					temp=new node(ch);
					s.push(temp);
				}
				else{
					temp2=s.pop();
					temp1=s.pop();
					temp=new node(ch);
					temp->left=temp1;
					temp->right=temp2;
					s.push(temp);
				}
				i++;
			}
			root=s.pop();
		}
void tree ::inorder(node *root){
			if(root!=NULL){
				inorder(root->left);
				cout<<" "<<root->data;
				inorder(root->right);
			}	
		}
void tree ::preorder(node *root){
			if(root!=NULL){
				cout<<" "<<root->data;
				preorder(root->left);
				preorder(root->right);
			}
		}
void tree ::postorder(node *root){
			if(root!=NULL){
				postorder(root->left);
				postorder(root->right);
				cout<<" "<<root->data;
			}
		}
void tree ::inorder_nonrec(node *root ){
			Stack s;
			while(root!=NULL){
				s.push(root);
				root=root->left;
			}
			while(!s.isempty()){
				root =s.pop();
				cout<<" "<<root->data;
				root=root->right;
				while(root!=NULL){
					s.push(root);
					root=root->left;
				}
			}	
		}
		
void tree ::preorder_nonrec(node* root){
			Stack s;
			while(root!=NULL){
			  cout<<" "<<root->data;
			  s.push(root);
			  root=root->left;
			}
			while(!s.isempty()){
				root=s.pop();
				root=root->right;
				while(root!=NULL){
					cout<<" "<<root->data;
					s.push(root);
					root=root->left;
				}
			}
		}
void tree ::postorder_nonrec(node *root){
			Stack s1,s2;
			s1.push(root);
			while(!s1.isempty()){
				node *current=s1.pop();
				s2.push(current);
				if(current->left)
				s1.push(current->left);
				if (current->right)
				s1.push(current->right);
			}
			while(!s2.isempty()){
				node *temp=s2.pop();
				cout<<" "<<temp->data;
			}
		}

void tree ::cnt_leaf(node *root){
	Stack s;
	int count=0;
	s.push(root);
	while(!s.isempty()){
		root= s.pop();
		if(root->left==NULL && root->right==NULL){
			count++;
		}
		if(root->right)
		s.push(root->right);
		if(root->left)
		s.push(root->left);
	}	
	cout<<count;
}
void tree ::cnt_inter(node *root){
	Stack s;
	int count=0;
	s.push(root);
	while(!s.isempty()){
		root= s.pop();
		if(root->left || root->right){
			count++;
		}
		if(root->right)
		s.push(root->right);
		if(root->left)
		s.push(root->left);
	}	
	cout<<count;
}
int main(){
	tree t;
	node *root1;
	cout<<"*****MENU*****"<<endl;
	cout<<"0.Exit"<<endl<<"1.Create Tree"<<endl<<"2.Inorder Rec"<<endl<<"3.Preorder Rec"<<endl<<"4.Postorder Rec"<<endl;
	cout<<"5.Inorder Non-Rec"<<endl<<"6.Preorder Non-Rec"<<endl<<"7.Postorder Non-Rec"<<endl<<"8.Count leaf node"<<endl;
	cout<<"9.count intermediate node"<<endl;
	int option,flag=0;
	while(flag==0){
		cout<<"Enter Option::";
		cin>>option;
		switch(option){
			case 0:
				flag=1;
				cout<<"Exited...";
			case 1:
				t.create();
		        root1 = t.rootval();
		        cout<<"Tree created...."<<endl;
		        break;
		    case 2:
		    	cout<<"Inorder::"<<endl;
		    	t.inorder(root1);
	           	break;
	        case 3:
	        	cout<<"Preorder::"<<endl;
	        	t.preorder(root1);
	        	break;
	        case 4:
	        	cout<<"Postorder::"<<endl;
	        	t.postorder(root1);
	        	break;
	        case 5:
	        	cout<<"Inorder Non-Rec::"<<endl;
	        	t.inorder_nonrec(root1);
	        	break;
	        case 6:
	        	cout<<"Preorder Non-Rec::"<<endl;
	        	t.preorder_nonrec(root1);
	        	break;
	        case 7:
	        	cout<<"Postorder Non-Rec::"<<endl;
	        	t.postorder_nonrec(root1);
				break;
	        case 8:
	        	cout<<"leaf count is ::"<<endl;
				t.cnt_leaf(root1);
			case 9:
				cout<<"Intermediate node count is::";
				t.cnt_inter(root1);
	        	break;
		}
		cout<<endl;
	}
	
	


}
