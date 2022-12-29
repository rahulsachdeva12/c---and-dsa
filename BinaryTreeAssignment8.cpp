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
void LevelOrderTraversal(BinaryTreeNode<int>*root){
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        int nodesize=pendingNodes.size();
        while(nodesize>0){
        BinaryTreeNode<int>*current=pendingNodes.front();
        cout<<current->data<<" ";
        pendingNodes.pop();
        if(current->left!=NULL){
            pendingNodes.push(current->left);
        }
        if(current->right!=NULL){
            pendingNodes.push(current->right);
        }
        nodesize--;
    }
    cout<<endl;
    }
}
BinaryTreeNode<int>* RemoveLeafNodes(BinaryTreeNode<int>*root){
    if(root==NULL){
        return NULL ;
    }
    if(root->left==NULL&& root->right==NULL){
        free(root);
        return NULL;
    }
    BinaryTreeNode<int>*a=RemoveLeafNodes(root->left);
    BinaryTreeNode<int>*b=RemoveLeafNodes(root->right);
    root->left=a;
    root->right=b;
    return root;
    
}
int main(){
    BinaryTreeNode<int>*root=takeInputLevelwise();
    // LevelOrderTraversal(root);
    // cout<<endl;
    RemoveLeafNodes(root);
    LevelOrderTraversal(root);
}