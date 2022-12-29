#include<iostream>
#include "BinaryTreeNode.h"
#include <queue>
using namespace std;
BinaryTreeNode<int>*takeInputLevelwise(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
    if(rootData ==-1){
        return NULL;
    }
    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() !=0){
        BinaryTreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter left child of "<<front->data<<" ";
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData !=-1){
            BinaryTreeNode<int>*child=new BinaryTreeNode<int>(leftChildData);
            front->left=child;
            pendingNodes.push(child);
        }

        cout<<"Enter right child of "<<front->data<<" ";
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData !=-1){
            BinaryTreeNode<int>*child=new BinaryTreeNode<int>(rightChildData);
            front->right=child;
            pendingNodes.push(child);
        }

    }
    return root;
}
void printTreeLevelWise(BinaryTreeNode<int> *root) {

    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>* front= pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":";
        
        if(front->left!=NULL){
            pendingNodes.push(front->left);
            cout<<"L:"<<front->left->data;
        }
        cout<<" ";
        
        
         if(front->right!=NULL){
            pendingNodes.push(front->right);
            cout<<"R:"<<front->right->data;
        }
    
    cout<<endl;
  }
}
BinaryTreeNode<int>* findLCA(BinaryTreeNode<int>* root, int n1, int n2)
{
    // Base case
    if (root == NULL)
        return NULL;
 
    // If either n1 or n2 matches with root's key, report
    // the presence by returning root (Note that if a key is
    // ancestor of other, then the ancestor key becomes LCA
    if (root->data == n1 || root->data == n2)
        return root;
 
    // Look for keys in left and right subtrees
    BinaryTreeNode<int>* left_lca = findLCA(root->left, n1, n2);
    BinaryTreeNode<int>* right_lca = findLCA(root->right, n1, n2);
 
    // If both of the above calls return Non-NULL, then one
    // key is present in once subtree and other is present
    // in other, So this node is the LCA
    if (left_lca && right_lca)
        return root;
 
    // Otherwise check if left subtree or right subtree is
    // LCA
    return (left_lca != NULL) ? left_lca : right_lca;
}
 
int main(){
    BinaryTreeNode<int>*root=takeInputLevelwise();
    printTreeLevelWise(root);
    cout<<endl;
    int n1,n2;
    cin>>n1,n2;
    BinaryTreeNode<int>* res=findLCA(root,n1,n2);
    cout<<res->data<<endl;
}