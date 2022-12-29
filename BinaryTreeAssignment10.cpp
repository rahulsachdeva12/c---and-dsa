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
void insertDuplicates(BinaryTreeNode<int>*root){
    if(root==NULL){
        return ;
    }
    insertDuplicates(root->left);
    insertDuplicates(root->right);
    BinaryTreeNode<int>*newNode=new BinaryTreeNode<int>(root->data);
    BinaryTreeNode<int>*temp=root->left;
    root->left=newNode;
    newNode->left=temp;
}
int main(){
    BinaryTreeNode<int>*root=takeInputLevelwise();
    insertDuplicates(root);
    printTreeLevelWise(root);
}