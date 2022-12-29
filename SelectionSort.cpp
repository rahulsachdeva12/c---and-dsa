#include<iostream>
using namespace std;
void SelectionSort(int arr[], int n){
    //for loop for rounds
    for(int i=0;i<n-1;i++){
        //find min element in the index
        int min=arr[i], minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minIndex=j;

            }

        }
        //swap
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;

    }
   

}

int main(){
   int arr[]={3,2,6,4,9,0};
   SelectionSort(arr,6);
   for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";

   }
   cout<<endl;


    return 0;
}