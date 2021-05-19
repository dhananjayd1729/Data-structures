
#include<bits/stdc++.h>
#include<algorithm>
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

void preOrderIterative(Node* root){
    
    if(root==NULL)
        return;
    stack<Node*> s;
    s.push(root);
    
    while(!s.empty()){
        Node* node=s.top();
        cout<<node->data<<" ";
        s.pop();
        if(node->right)
           s.push(node->right);
        if(node->left)
           s.push(node->left);
    }
    
    
}



int main()
{
   Node *root=new Node(1);
   root->left=new Node(2);
   root->right=new Node(3);
   root->left->left=new Node(4);
   root->left->right=new Node(5);
   root->right->left=new Node(6);
   root->right->right=new Node(7);
   
   cout<< "PreorderIterative: "<<endl;
   preOrderIterative(root);
   
   
   
   return 0;
}
