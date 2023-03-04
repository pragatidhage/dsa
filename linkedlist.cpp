#include <bits/stdc++.h>
using namespace std;

class Node {
public: 
	int data;
	Node *link;
	
	Node(){
		this->data = data;
		this->link = NULL;
	}
	Node(int data){
		this->data=data;
		this->link=NULL;
	}
};
	

	
int main(){
	Node* head;
	head->data=45;
	head->link=NULL;
	
	Node* current;
	current->data=98;
	current->link=NULL;
	head->link= current;
	
	current->data=3;
	current->link=NULL;
	head->link->link=current;
	
	int count=0;
	if(head=NULL){
		cout<<"LIST is eMPTY";
		
	}
	Node* ptr=NULL;
	ptr=head;
	while(ptr!=NULL){
		count++;
		ptr = ptr->link;
	}
	cout<<count;
	return 0;
}
