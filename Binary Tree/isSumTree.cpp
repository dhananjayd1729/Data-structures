
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    
    
    Node(int val){
        
        data=val;
        left=NULL;
        right=NULL;
    }
};

int f=1;
int sum(Node* root){
    if(!root) return 0;
    
    if(!root->left and !root->right) return root->data;
    if(f==0) return 0;
    int a=sum(root->left);
    int b=sum(root->right);
    if(a+b != root->data) f=0;
    return a+b+root->data;
}


bool isSumTree(Node* root){
    f=1;
    sum(root);
    return f;
}

int main()
{
   Node *root=new Node(5);
   root->left=new Node(2);
   root->right=new Node(3);
  root->left->left=new Node(4);
  root->left->right=new Node(5);
  root->right->left=new Node(6);
  root->right->right=new Node(7);
   
   cout<< isSumTree(root) <<endl;
   
   
   return 0;
}
