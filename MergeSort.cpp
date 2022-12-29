#include<iostream>
using namespace std;
// A function to merge the two half into a sorted data.
void Merge(int* a, int low, int high, int mid)
{
	// We have low to mid and mid+1 to high already sorted.
	int i, j, k,c[50];
	i = low;
	k =low;
	j = mid + 1;
    while(i<=mid&&j<=high){
        if(a[i]<a[j]){
            c[k]=a[i];
            k++;
            i++;
        }
        else{
            c[k]=a[j];
            k++;
            j++;

        }
       }//copy remaining elements of 1st array to temp array
       while(i<=mid){
        c[k]=a[i];
            k++;
            i++;

       }
       while(j<=high){//copy remaining elements of 2nd array to temp array
        c[k]=a[j];
            k++;
            j++;
       }
       for(i=low;i<k;i++){//copy elements from temp array to main array
        a[i]=c[i];

       }
}

 
void MergeSort(int a[],int s,int l){
    int mid=(s+l)/2;
    if(s<l){
        MergeSort(a,s,mid);
        MergeSort(a,mid+1,l);
        Merge(a,s,l,mid);
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
    MergeSort(a,0,n-1);
    cout<<"Sorted array is"<<endl;
     for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
