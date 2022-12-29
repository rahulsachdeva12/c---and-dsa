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
//count no. of nodes
int numberOfNodes(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    return 1+numberOfNodes(root->left)+numberOfNodes(root->right);
}
//is node presemt
bool isNodePresent(BinaryTreeNode<int>* root,int x){
    if(root==NULL){
        return false;
    }
    else if(root->data==x){
        return true;
    }
    bool res1=isNodePresent(root->left,x);
    if(res1){
        return true;
    }
    else{
    bool res2=isNodePresent(root->right,x);
    return res2;
    }
}
//height of tree
int heightOfTree(BinaryTreeNode<int>*root){
    if(root==NULL){
        return 0;
    }
    int res1=1+heightOfTree(root->left);
    int res2=1+heightOfTree(root->right);
    if(res1>=res2){
        return res1;
    }
    else{
        return res2;
    }
}
int main(){
    BinaryTreeNode<int>* root=takeInputLevelwise();
    printTreeLevelWise(root);
    /*
    int n=numberOfNodes(root);
    cout<<n<<endl;
    int x;
    cin>>x;
    if(isNodePresent(root,x)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    */
   int h=heightOfTree(root);
   cout<<h<<endl;
   delete root;
}