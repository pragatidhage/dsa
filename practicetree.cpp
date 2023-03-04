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
		
		void create_BST();
   };

void tree :: create_BST(){
			int exp[20],e;
			node *temp,*temp2,*temp1;
			cout<<"Enter no elements::"<<endl;
			cin>>e;
			for(int i=0;i<e;i++){
				cin>>exp[i];
			}
			int i=0,n;
			while((n=exp[i])!='\0'){
			        if(root==NULL){
			        	root = new node(n);
			        	temp=root;
					}
					else{
					 	while(temp!=NULL){
				 		if(n<temp->data){
				 			temp=temp->left;
						 }
				 		else{
				 			temp=temp->right;
						 }	
						 i++;				 			
					 }
					 temp->data=n;	
					}			 
				 
					 				 					
			   }
			
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
				t.create_BST();
		        root1 = t.rootval();
		        cout<<"Tree created...."<<endl;
		        break;
		    
		}
		cout<<endl;
	}
	
	


}
