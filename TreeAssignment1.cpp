//find no. of nodes and sum of all nodes
//largest node
//height of tree
//depth of tree
//no. of leaf node
//preorder and postorder tree traversal
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
int numberOfNodes(TreeNode<int>*root){
    if(root==NULL){
        return 0;
    }
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+=numberOfNodes(root->children[i]);
    }
    return ans;
}
int sumOfNodes(TreeNode<int>*root){
    int ans=root->data;
    for(int i=0;i<root->children.size();i++){
        ans+=sumOfNodes(root->children[i]);
    }
    return ans;
}
TreeNode<int>*maxDataNode(TreeNode<int>*root){
    if(root==NULL){
        return NULL;
    }
    TreeNode<int>*result=root;
    int max=root->data;
    for(int i=0;i<root->children.size();i++){
        TreeNode<int>*temp=maxDataNode(root->children[i]);
        if(temp->data>max){
            max=temp->data;
            result=temp;
        }
    }
    return result;
}
int heightOfTree(TreeNode<int>*root){
    if(root==NULL){
        return 0;
    }
    if(root->children.size()==0){
        return 1;
    }
    int height=0;
    int ans=0;
    for(int i=0;i<root->children.size();i++){
         ans=heightOfTree(root->children[i]);
         if(ans>height){
            height=ans;
         }
    }
    return height+1;
}
//depth of a tree
void printAtLevelK(TreeNode<int>*root,int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<endl;
        return;
    }
    for(int i=0;i<root->children.size();i++){
        printAtLevelK(root->children[i],k-1);
    }
}
//no. of leaf node
int numberOfLeafNodes(TreeNode<int>*root){
    int count=0;
    if(root->children.size()==0){
        return 1;
    }
    for(int i=0;i<root->children.size();i++){
        count+=numberOfLeafNodes(root->children[i]);
    }
    return count;
}
void preOrder(TreeNode<int>*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++){
        preOrder(root->children[i]);
    }
    
}
void postOrder(TreeNode<int>*root){
    if(root==NULL){
        return;
    }
    for(int i=0;i<root->children.size();i++){
        postOrder(root->children[i]);
    }
    cout<<root->data<<" ";
}
//delete a tree
//first delete children then root
void deleteTree(TreeNode<int>*root){
    for(int i=0;i<root->children.size();i++){
        deleteTree(root->children[i]);
    }
    delete root;
}
int main(){
    TreeNode<int>*root=takeLevelwiseInput();
    printTreeLevelwise(root);
    int n=numberOfNodes(root);
    cout<<"No. of nodes is: "<<n<<endl;
    int t=sumOfNodes(root);
    cout<<"Sum of nodes is: "<<t<<endl;
    TreeNode<int>*z=maxDataNode(root);
    cout<<"Largest node is: "<<z->data<<endl;
    int h=heightOfTree(root);
    cout<<"Height of tree is: "<<h<<endl;
    int depth;
    cin>>depth;
    cout<<"Nodes of tree at depth "<<depth<<" is:"<<endl;
    printAtLevelK(root,depth);
    int m=numberOfLeafNodes(root);
    cout<<"No. of leaf nodes is: "<<m<<endl;
    preOrder(root);
    cout<<endl;
    postOrder(root);
    //delete a tree
    deleteTree(root);
}