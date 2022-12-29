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
//check if tree is balanced
pair<bool,int>isBalanced(BinaryTreeNode<int>*root){
    if(root==NULL){
        pair<int,int>p;
        p.first=true;
        p.second=0;
        return p;
    }
    pair<bool,int>leftAns=isBalanced(root->left);
    pair<bool,int>rightAns=isBalanced(root->right);
    int lh=leftAns.second;
    bool a=leftAns.first;
    int rh=rightAns.second;
    bool b=rightAns.first;

    int height=1+max(lh,rh);
    bool ans;
    if(a==true&&b==true){
        if(abs(lh-rh)<=1){
            ans=true;
        }
        else{
            ans=false;
        }
    }
    else{
        ans=false;
    }
    pair<int,int>p;
    p.second=height;
    p.first=ans;
    return p;

}
int main(){
    BinaryTreeNode<int>*root=takeInputLevelwise();
    printTreeLevelWise(root);
    pair<bool,int> p=isBalanced(root);
    cout<<"Height: "<<p.second<<endl;
    if(p.first){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}