
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

int heightOfTree(Node* node){
    if(node==NULL){
        return 0;
    }else{
        int rTree=heightOfTree(node->right);
        int lTree=heightOfTree(node->left);
        
        if(rTree>lTree){
            return(rTree+1);
        }else return(lTree+1);
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
   
//   printLevelOrder(root);
  
//  bit confused between def though.
   
   cout << "Height of tree is " << heightOfTree(root);
   return 0;
}
