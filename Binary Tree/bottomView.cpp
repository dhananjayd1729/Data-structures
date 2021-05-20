
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

struct Node{
    int data;
    int hd;
    struct Node *left;
    struct Node *right;
    
    
    Node(int val){
        
        data=val;
        hd=INT_MAX;
        left=NULL;
        right=NULL;
    }
};

void bottomView(Node* root){
    
    if(root==NULL)
        return;
        
    queue<Node*> q;
    map<int, int> m;
    int hd=0;
    
    root->hd=hd;
    q.push(root);
    
    
    
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        
        hd=temp->hd;
        
        m[hd]=temp->data;
        
        if(temp->left!=NULL){
            temp->left->hd=hd-1;
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            temp->right->hd=hd+1;
            q.push(temp->right);
        }
        
    }
    
    for(auto i=m.begin(); i!=m.end();i++){
        cout<<i->second<<" ";
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
   
   cout<< "bottomView: "<<endl;
   bottomView(root);
   
   
   
   return 0;
}
