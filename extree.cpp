#include<iostream>
#include<stdlib.h>
#include<ctype.h>

using namespace std;

class node{
 public:
    char data;
    node* left ,*right;
    
    node(char d){
        data=d;
        left=right=NULL;
    }
};

class stack{

node* data[30];
  int top;
public:
    stack(){
    top=-1;
     }
     
     int empty(){
        if(top==-1){
            return 1;
        }

        return 0;
     }
     void push(node * p){

        data[++top]=p;

     }

    node* pop(){
          return data[top--];
     }

};

class tree{
node* root;

public:
   tree(){
    root=NULL;
   }
     void create();
     node* rootval(){
        return root;
     }
     void inorder(node * T);
     void preorder(node * T);
    void postorder(node * T);
    void non_rec_inorder();
    void non_rec_preorder();
     void non_rec_postorder();

};   

void tree::create(){
 char exp[30];
 node *temp,*temp1,*temp2;
stack s;
 char ch;
 cout<<"enter the postfix expression"<<endl;
 cin>>exp;
int i=0;
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

void tree::inorder(node *T){

    if(T!=NULL){
        inorder(T->left);
        cout<<" "<<T->data;
        inorder(T->right);
    }
}

void tree::preorder(node *T){
    if(T!=NULL){
        cout<<" "<<T->data;
        preorder(T->left);
         preorder(T->right);
    }
}

void tree::postorder(node *T){
    if(T!=NULL){
        postorder(T->left);
         postorder(T->right);
        cout<<" "<<T->data;
    }
}

void tree::non_rec_inorder(){
stack s;
node* T =root;
while(T!=NULL){
    s.push(T);
    T=T->left;
}
while (!s.empty())
{
    T=s.pop();
    cout<<" "<<T->data;
    T=T->right;
    while(T!=NULL){
        s.push(T);
        T=T->left;
    }
    
}

}

void tree::non_rec_preorder(){
    stack s;
    node* T =root;
    while(T!=NULL){
        cout<<" "<<T->data;
        s.push(T);
        T=T->left;
    }
    while(!s.empty()){

       T= s.pop();
       T=T->right;
       while(T!=NULL){
           cout<<" "<<T->data;
           s.push(T);
           T=T->left;
       }

    }
}
int main(){

tree t;
node* root1;
t.create();
root1=t.rootval();
cout<<"non recursive inorder"<<endl;
t.non_rec_inorder();
cout<<endl;
cout<<"non recursive preorder"<<endl;
t.non_rec_preorder();
}
