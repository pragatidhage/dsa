#include <iostream> 
using namespace std;

struct node 
{ 
    char data; 
    node* left; 
    node* right; 
}; 

// Function to create a new node
node* newNode(int data) 
{ 
    node* temp = new node; 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
node* expression()
{
node *temp;
int i,top=-1;
char exp[20];
node *stack[10];
int flag[10];
cout<<"Enter the expression:";
cin>>exp;
for(i=0;exp[i]!='\0';i++)
{
 if(exp[i]>='a' && exp[i]<='z')
 {
 temp=new node;
 temp->data=exp[i];
 temp->left=temp->right=NULL;
 stack[++top]=temp;
 }
 else
 {
 root=new node;
 root->data=exp[i];
 root->left=root->right=NULL; // root creation for operator
 root->right=stack[top--];
 root->left=stack[top--];
 stack[++top]=root;
   } 
 }
root=stack[top--];
return root;
}

// Recursive function to do inorder traversal
void inorder(node* root) 
{ 
    if (root == NULL) 
        return; 
    inorder(root->left); 
    cout << root->data << " "; 
    inorder(root->right); 
} 

int main() 
{ 
    // Constructing expression tree
    node *root = newNode('+'); 
    root->left = newNode('*'); 
    root->left->left = newNode('3'); 
    root->left->right = newNode('4'); 
    root->right = newNode('-'); 
    root->right->left = newNode('5'); 
    root->right->right = newNode('6'); 
  
    // Recursive Inorder Traversal
    cout << "Inorder traversal of the expression tree is: "; 
    inorder(root); 
    return 0; 
}
