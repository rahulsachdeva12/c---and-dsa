#include<iostream>
#include "LinkedList.cpp"
using namespace std;
//taking data input from user
// Node* takeInput(){//time complexity of O(nsquare)
//     int data;
//     cin>>data;
//      Node *head=NULL;
//     while(data!=-1){
//         Node *newNode=new Node(data);
//         if(head==NULL){
//             head=newNode;
//         }
//         else{
//             Node *temp=head;
//             while(temp->next!=NULL){
//             temp=temp->next;
//             }
//             temp->next=newNode;
//         }
//         cin>>data;
//     }
//     return head;
// }
Node* takeInput_better(){//better time complexity of O(n)
    int data;
    cin>>data;
     Node *head=NULL;
     Node* tail=NULL;
    while(data!=-1){
        Node *newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
            //or
            //tail=newnode;
        }
        cin>>data;
    }
    return head;
}
void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int length(Node *head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
int returnElement(Node *head,int index){
    Node *temp=head;
    int count=0;
    while(temp!=NULL){
    if(count==index){
        return temp->data;
    }
    count++;
    temp=temp->next;
    }
}
int main(){
    //take input by user
    Node *head=takeInput_better();
    print(head);
   int j=length(head);
   cout<<j<<endl;
int index;
cin>>index;
int k=returnElement(head,index);
cout<<k<<endl;






  /*  //statically
    Node n1(1);
    Node *head=&n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;

    print(head);
    // //dynamically
    // Node *n4=new Node(4);
    // Node *head=n4;
    //  Node *n5=new Node(5);
    //  n4->next=n5;
    // cout<<n1.data<<" "<<n4->data;
    */
}