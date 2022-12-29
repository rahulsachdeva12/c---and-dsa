#include<iostream>
#include<climits>
using namespace std;
//using templates
template <typename T>
class StackUsingArray{
    T *data;
    int nextIndex;
    int capacity;
    public:
    /*
    //constructor
    StackUsingArray(int totalsize){
        data=new int[totalsize];
        nextIndex=0;
        capacity=totalsize;
    }
    */
   //constructor which do not need size
    StackUsingArray(){
        data=new T[4];
        nextIndex=0;
        capacity=4;
    }

    //returns the no. of elements present in the stack
    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        /*
        if(nextIndex==0){
            return true;
        }
        else{
            return false;
        }
        */
       //or we can write
       return nextIndex==0;
    }
    //insert or push an element
    /*
    void push(int element){
        if(nextIndex==capacity){
            cout<<"Stack Full"<<endl;
            return;
        }
        data[nextIndex]=element;
        nextIndex++;
    }
    */

    //dynamic stack  //doubles the size when stack is full
    void push(T element){
        if(nextIndex==capacity){
            T *newData=new T [2*capacity];
            for(int i=0;i<capacity;i++){
                newData[i]=data[i];
            }
            capacity*=2;
            delete []data;
            data=newData;
        }
        data[nextIndex]=element;
        nextIndex++;
    }
    //delete or pop an element
    T pop(){
        if(isEmpty()){
            cout<<"Stack Empty"<<endl;
            //return INT_MIN;//as we have to return some value as it is int fn
            return 0;//as zero an be used for any data type
        }
        nextIndex--;
        return data[nextIndex];
    }
    //find topmost element of stack
    T top(){
        if(isEmpty()){
            cout<<"Stack Empty"<<endl;
           // return INT_MIN;//as we have to return some value as it is int fn
            return 0;//as zero an be used for any data type
        }
        return data[nextIndex-1];
    }




};