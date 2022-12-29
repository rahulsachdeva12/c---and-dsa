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
bool isIdentical(TreeNode<int>*root1,TreeNode<int>*root2){
    if(root1==NULL&&root2==NULL){
        return true;
    }
    if(root1->data==root2->data){
        return true;
    }
    else{
        return false;
    }
    int childsize1=root1->children.size();
    int childsize2=root2->children.size();
    if(childsize1==childsize2){
        return true;
    }
    else{
        return false;
    }
    for(int i=0;i<childsize1;i++){
        if(!isIdentical(root1->children[i],root2->children[i])){
            return false;
        }
        return true;
    }

}
int main(){
    TreeNode<int>*root1=takeLevelwiseInput();
    TreeNode<int>*root2=takeLevelwiseInput();
    printTreeLevelwise(root1);
    cout<<endl;
    printTreeLevelwise(root2);
    if(isIdentical(root1,root2)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}