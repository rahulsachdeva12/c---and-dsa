#include<iostream>
#include "BinaryTreeNode.h"
#include <queue>
#include<climits>
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
class isBSTreturn{
    public:
    bool isBST;
    int minimum;
    int maximum;
};
isBSTreturn isBST2(BinaryTreeNode<int>*root){
    if(root==NULL){
        isBSTreturn output;
        output.isBST=true;
        output.maximum=INT_MIN;
        output.minimum=INT_MAX;
        return output;
    }
    isBSTreturn leftOutput=isBST2(root->left);
    isBSTreturn rightOutput=isBST2(root->right);
    int minimum=min(root->data,min(leftOutput.minimum,rightOutput.minimum));
    int maximum=max(root->data,max(leftOutput.maximum,rightOutput.maximum));
    bool isBSTfinal=(root->data>leftOutput.maximum)&&(root->data<=rightOutput.minimum)&& leftOutput.isBST&&rightOutput.isBST;
    isBSTreturn output;
    output.isBST=isBSTfinal;
    output.minimum=minimum;
    output.maximum=maximum;
    return output;
}
bool isBST3(BinaryTreeNode<int>*root,int min=INT_MIN,int max=INT_MAX){
    if(root==NULL){
        return true;
    }
    if(root->data<min || root->data>max){
        return false;
    }
    bool isleftOk=isBST3(root->left,min,root->data -1);
    bool isrightOk=isBST3(root->right,root->data,max);
    return isleftOk && isrightOk;
}
int main(){
    BinaryTreeNode<int>*root=takeInputLevelwise();
    printTreeLevelWise(root);
    /*
    isBSTreturn output=isBST2(root);
    if(output.isBST){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    cout<<output.maximum<<endl;
    cout<<output.minimum<<endl;
    */
     if(isBST3(root)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}