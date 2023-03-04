#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(int val){
			data=val;
			next=NULL;
		}
};
class ll{
	public :
		node *head;
		ll(){
			head=NULL;
		}
		void printall(node *head);
		void insertBeg(node * &head,int val);
	    void insertEnd(node * &head,int val);
	    void insertMid(node * &head,int val,int pos);
	    void delPos(node * &head,int pos);
};
//insert at begining
void ll::insertBeg(node * &head,int val){
	if(head==NULL){
		head=new node(val);	
		return;
	}
	node *temp=new node(val);
	temp->next=head;
	head=temp;
}
//insert at end
void ll::insertEnd(node * &head,int val){
	
	if(head==NULL){
	  head=new node(val);
	  return;	
	}
	node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=new node(val);
}
//insert at mid
void ll::insertMid(node * &head,int val,int pos){
	node *n=new node(val);
	node *temp=head;
	pos=pos-1;
	if(pos<0){
	  n->next=head;
	  head=n;
	  return;
	}
	while(pos--){
		temp=temp->next;
	}
	n->next=temp->next;
	temp->next=n;
}
//print all element
void ll::printall(node *head){
	while(head!=NULL){
		cout<<" "<<head->data;
		head=head->next;
	}
}
//delete node by pos
void ll::delPos(node * &head,int pos){
	node  *curr=head,*temp;
	
	if(pos==0){
		temp=head;
		head=head->next;
		delete(temp);
		return;
	}
	for(int i=0;curr!=NULL && i<pos-1;i++){
		curr=curr->next;
	}
	if(curr==NULL || curr->next==NULL){
		return;
	}
	temp=curr->next;
	curr->next=curr->next->next;
	delete(temp);
}

int main(){
	ll obj;
	node *h=NULL;
	obj.insertBeg(h,3);
	obj.insertBeg(h,9);
	obj.insertEnd(h,10);
	obj.insertMid(h,7,1);
	obj.delPos(h,1);
	obj.printall(h);
}

