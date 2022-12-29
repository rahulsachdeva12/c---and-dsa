#include"BinaryTreeNode.h"
#include<iostream>
using namespace std;
#include "BinarySearchTree.h"
int main(){
    BST b;
    
    b.insert(10);
    b.insert(5);
    b.insert(20);
    b.insert(7);
    b.insert(15);
    b.insert(3);
    b.insert(25);
    b.deleteData(10);
    b.deleteData(5);
    b.printTree();
    cout<<b.hasData(7)<<endl;
    cout<<b.hasData(12)<<endl;

}