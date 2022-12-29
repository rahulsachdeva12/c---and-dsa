#include<iostream>
#include "BinaryTreeNode.h"
#include <queue>
using namespace std;
//build tree from pre and inorder
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
BinaryTreeNode<int>*buildTreeHelper(int *in,int* pre,int inS,int inE,int preS,int preE){
    //if any array is empty
    if(inS>inE){
        return NULL;
    }
    int rootData=pre[preS];
    int rootIndex=-1;
    for(int i=inS;i<=inE;i++){
        if(in[i]==rootData){
            rootIndex=i;
            break;
        }
    }
    int lInS=inS;
    int lInE=rootIndex-1;
    int lPreS=preS+1;
    int lPreE=lInE-lInS+lPreS;
    int rInS=rootIndex+1;
    int rInE=inE;
    int rPreS=lPreE+1;
    int rPreE=preE;

    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(rootData);
    root->left=buildTreeHelper(in,pre,lInS,lInE,lPreS,lPreE);
    root->right=buildTreeHelper(in,pre,rInS,rInE,rPreS,rPreE);
    return root;
}
BinaryTreeNode<int>*bulidTree(int* in,int* pre,int size){
    return buildTreeHelper(in,pre,0,size-1,0,size-1);
}
int main(){
    int in[50];
    int pre[50];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>in[i];
    }
    for(int i=0;i<n;i++){
        cin>>pre[i];
    }
    BinaryTreeNode<int>*root=bulidTree(in,pre,n);
    printTreeLevelWise(root);
    delete root;
}