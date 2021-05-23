
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



bool checkUtil(Node* root, int level, int *leaflevel){
    
    if(root==NULL) return true;
    
    if(root->left==NULL and root->right==NULL){
        
        if(*leaflevel==0){
            *leaflevel=level;
            return true;
        }
        
        return (level== *leaflevel);
    }
    
    return checkUtil(root->left,level+1,leaflevel) and checkUtil(root->right,level+1,leaflevel);
}
bool check(Node* root){
    int level=0, leaflevel=0;
    return checkUtil(root, level, &leaflevel);
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
   
  cout<< check(root) <<endl;
   
   
   return 0;
}
