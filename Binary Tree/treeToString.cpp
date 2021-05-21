
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

void treeToString(Node* root, string &str){
    
    if(root==NULL)
        return;
        
    str.push_back(root->data + '0');
    
    if(!root->left && !root->right)
        return;
        
    str.push_back('(');
    treeToString(root->left, str);
    str.push_back(')');
    
    
    if(root->right){
        str.push_back('(');
        treeToString(root->right, str);
        str.push_back(')');
    }
}

int main()
{
   string str;
   Node *root=new Node(1);
   root->left=new Node(2);
   root->right=new Node(3);
   root->left->left=new Node(4);
   root->left->right=new Node(5);
   root->right->left=new Node(6);
   root->right->right=new Node(7);
  
   treeToString(root, str);
   
   
   return 0;
}
