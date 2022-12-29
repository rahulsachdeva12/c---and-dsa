#include<iostream>
#include "BinaryTreeNode.h"
#include <queue>
using namespace std;
void printTree(BinaryTreeNode<int>* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<":";
    if(root->left!=NULL){
        cout<<"L"<<root->left->data;
    }
    cout<<" ";
    if(root->right!=NULL){
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
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
BinaryTreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter data"<<endl;
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* leftChild=takeInput();
    BinaryTreeNode<int>* rightChild=takeInput();
    root->left=leftChild;
    root->right=rightChild;
    return root;
}

int main(){
    /*
    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(1);
    BinaryTreeNode<int>*node1=new BinaryTreeNode<int>(2);
    BinaryTreeNode<int>*node2=new BinaryTreeNode<int>(3);
    root->left=node1;
    root->right=node2;
    printTree(root);
    */
    //BinaryTreeNode<int>* root=takeInput();
    BinaryTreeNode<int>*root=takeInputLevelwise();
    //printTree(root);
    printTreeLevelWise(root);
    delete root;
}