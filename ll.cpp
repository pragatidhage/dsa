#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
	public:
		char data;
		node* next;
	node(int val){
		data = val;
		next=NULL;
	}
};
void insertAtEnd(node* &head,char val){
	node* n= new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp = head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}
void insertAtBeg(node* &head,char val){
	node* n = new node(val);
	/*if(head==NULL){
		head=n;
		return;
	}*/
	node* temp=n;
	temp->next=head;
	head=temp;
}
void insertAtMid(node* &head,int pos,char val){
	node* n =new node(val);
	int c=1;
	if(pos==1){
		head=n;
		return;
	}
//	node* temp=NULL;
	while(c<pos-1){
		head=head->next;
		c++;
	}
	n->next=head->next;
	head->next=n;
    
}

void deleteNode(node* &head,char val){
    node* temp;
    if(head->data==val){
    	temp=head;
    	head=head->next;
    	delete(temp);
	}
	else{
		node* curr=head;
		while(curr->next!=NULL){
		  if(curr->next->data==val){
			temp=curr->next;
			curr->next=curr->next->next;
			delete(temp);
			break;
	   	   }
		 curr=curr->next;	
		}
	   
	}
}
void size(node* &head){
//	while(head!=)
}

bool search(node* &head,char val){
	
	/*if(head->data==val){
			cout<<"YES";
				 return true;
		}
	else{
		while(head->next!=NULL){
			head=head->next;
			if(head->data==val){
				 cout<<"YES";
				 return true;
	        	}			 
	      }
        }
 cout<<"NO";*/
 while(head!=NULL){
 	if(head->data==val){
 		return true;
	 }
	head=head->next; 
 }
 return false;
}
void index(node* &head,char val){
	node* temp=head;
	int count=1;
	while(head!=NULL){
		if(head->data==val){
			cout<<count;
			return;
		}
		head=head->next;
		count++;
	}
	
}
void display(node* head){
	while(head!=NULL){
	cout<<head->data<<" ";
	head=head->next;	
	}
	
}
int main(){
	node* head = new node('a');
	insertAtBeg(head,'z');
	insertAtEnd(head,'c');
	insertAtMid(head,2,'b');
	deleteNode(head,'c');
	display(head);
    //cout<<search(head,'x');
    index(head,'n');
	
}
