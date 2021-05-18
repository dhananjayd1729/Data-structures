
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

int diameter(struct Node* root)
{
    if (root == NULL)
        return 0;
 
    int lheight = heightOfTree(root->left);
    int rheight = heightOfTree(root->right);
 
    int ldiameter = diameter(root->left);
    int rdiameter = diameter(root->right);
 
    return max(lheight + rheight + 1,
            max(ldiameter, rdiameter));
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
   
   
   cout << "Height of tree is " << heightOfTree(root)<<endl;
   
   cout << "Diameter of tree is " << diameter(root);
   return 0;
}
