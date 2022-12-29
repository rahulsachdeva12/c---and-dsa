#include<iostream>
using namespace std;
int partition(int a[],int s,int e){
    int x=a[s];
    int count=0;
    for(int i=s;i<=e;i++){
        if(a[i]<=x){
            count++;
        }
    }
    int temp=a[s];
    a[s]=a[s+count];
    a[s+count]=temp;
    int pivot_index=s+count;
    int i=s,j=e;
    while(i<j){
            if(a[i]<=x){
                i++;
            }
            else if(a[j]>x){
                j--;
            }
            else{
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                i++;
                j--;
            }
    }
    return pivot_index;

}
void QuickSort(int a[], int s, int e){
    if(s<e){
    
    int c =partition(a,s,e);
    QuickSort(a,s,c-1);
    QuickSort(a,c+1,e);
    }
    else{
        return;
    }
}
int main(){
    int n,i;
    cin>>n;
    int a[100];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Unsorted array is"<<endl;
     for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    QuickSort(a,0,n-1);
    cout<<"Sorted array is"<<endl;
     for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
//partition fn is correct quick sort is not
//check afterwards