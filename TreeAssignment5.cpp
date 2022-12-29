#include<iostream>
#include<queue>
#include "TreeNode.h"
using namespace std;
TreeNode<int>* takeLevelwiseInput(){
    int rootData;
    cout<<"Enter root data "<<endl;
    cin>>rootData;
    TreeNode<int>*root=new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter the no. of childrens of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int childData;
            cout<<"Enter "<<i<<"th child of"<<front->data<<endl;
            cin>>childData;
            TreeNode<int>*child=new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;

}
void printTreeLevelwise(TreeNode<int>*root){
    if(root==NULL){
        return;
    }
    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    
    while(pendingNodes.size()!=0){
        TreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
       
        cout<<front->data<<": ";
        for(int i=0;i<front->children.size();i++){
        cout<<front->children[i]->data<<",";
        pendingNodes.push(front->children[i]);
        }
        cout<<endl;
    }
}
void helper(TreeNode<int>*root,int depth){
    if(root==NULL){
        return ;
    }
    root->data=depth;
    for(int i=0;i<root->children.size();i++){
        helper(root->children[i], depth + 1);
    } 
}
void replaceWithDepth(TreeNode<int>*root){
    helper(root,0);
}

int main(){
    TreeNode<int>*root=takeLevelwiseInput();
    printTreeLevelwise(root);
    replaceWithDepth(root);
    printTreeLevelwise(root);
}