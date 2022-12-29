#include<iostream>
#include "BinaryTreeNode.h"
#include <queue>
using namespace std;
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
vector<int>*getNodeToRootPath(BinaryTreeNode<int>*root,int data){
    if(root==NULL){
        return NULL;
    }
    if(root->data==data){
        vector<int>*output=new vector<int>();
        output->push_back(root->data);
        return output;
    }
    vector<int>*leftOutput=getNodeToRootPath(root->left,data);
    if(leftOutput!=NULL){
        leftOutput->push_back(root->data);
        return leftOutput;
    }
    vector<int>*rightOutput=getNodeToRootPath(root->right,data);
    if(rightOutput!=NULL){
        rightOutput->push_back(root->data);
        return rightOutput;
    }
    else{
        return NULL;
    }
}
int main(){
    BinaryTreeNode<int>*root=takeInputLevelwise();
    int n;
    cin>>n;
    vector<int>*output=getNodeToRootPath(root,n);
    for(int i=0;i<output->size();i++){
        cout<<output->at(i)<<endl;
    }
}