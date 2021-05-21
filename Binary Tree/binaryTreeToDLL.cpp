
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

void DLL(Node* root,Node* &head, Node* &prev, int &f){
    
    if(root==NULL){
        return;
    }
    
    DLL(root->left,head,prev,f);
    if(f==0)
    {
        f=1;
        head=root;
        prev=root;
    }else{
        prev->right=root;
        prev->right->left=prev;
        prev=prev->right;
    }
    
    DLL(root->right,head,prev,f);

}


Node* bToDll(Node* root){
    Node* head=NULL;
    Node* prev=NULL;
    int f=0;
    DLL(head,prev,root,f);
    return head;
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
  
   bToDll(root);
   
   
   return 0;
}
