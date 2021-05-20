
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

int height(Node* root){
    if(root==NULL)
       return 0;
    
    return( max(height(root->left), height(root->right)) +1);
}


vector<int> diagonalTraversal(Node* root){
    queue<Node*> q;
    vector<int> ans;
    
    if(!root) 
       return ans;
    q.push(root);
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        
        while(temp){
            if(temp->left)
               q.push(temp->left);
               ans.push_back(temp->data);
               temp=temp->right;
        }
    }
    
    return ans;
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
   
   cout<<"Diagonal Traversal:"<<"\n";
   diagonalTraversal(root);
   
   vector<int> diagonalNode=diagonalTraversal(root);
   for(int i=0; i<diagonalNode.size(); i++){
       cout<<diagonalNode[i]<<" ";
       
   }
   
   
   return 0;
}
