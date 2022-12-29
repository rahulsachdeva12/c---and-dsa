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
BinaryTreeNode<int>*buildBST(int arr[],int si,int ei){
    if(si>ei){
        return NULL;
    }
    int mid=(si+ei)/2;
    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(arr[mid]);
    root->left=buildBST(arr,si,mid-1);
    root->right=buildBST(arr,mid+1,ei);
    return root;
}
int main(){
    int arr[50];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    BinaryTreeNode<int>*root=buildBST(arr,0,n-1);
    printTreeLevelWise(root);
    delete root;
}