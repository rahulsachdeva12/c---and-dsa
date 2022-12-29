#include<iostream>
#include "BinaryTreeNode.h"
#include <queue>
using namespace std;
//build tree from post and inorder
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
BinaryTreeNode<int>*buildTreeHelper(int *in,int* post,int inS,int inE,int postS,int postE){
    //if any array is empty
    if(inS>inE){
        return NULL;
    }
    int rootData=post[postE];
    int rootIndex=-1;
    for(int i=inS;i<=inE;i++){
        if(in[i]==rootData){
            rootIndex=i;
            break;
        }
    }
    int lInS=inS;
    int lInE=rootIndex-1;
    int lPostS=postS;
    int lPostE=lInE-lInS+lPostS;
    int rInS=rootIndex+1;
    int rInE=inE;
    int rPostS=lPostE+1;
    int rPostE=postE-1;

    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(rootData);
    root->left=buildTreeHelper(in,post,lInS,lInE,lPostS,lPostE);
    root->right=buildTreeHelper(in,post,rInS,rInE,rPostS,rPostE);
    return root;
}
BinaryTreeNode<int>*bulidTree(int* in,int* post,int size){
    return buildTreeHelper(in,post,0,size-1,0,size-1);
}
int main(){
    int in[50];
    int post[50];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>in[i];
    }
    for(int i=0;i<n;i++){
        cin>>post[i];
    }
    BinaryTreeNode<int>*root=bulidTree(in,post,n);
    printTreeLevelWise(root);
    delete root;
}