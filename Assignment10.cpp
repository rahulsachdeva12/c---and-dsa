#include<iostream>
#include<math.h>
using namespace std;
float GeometricSum(int k){
    if(k<0){
        return -1;
    }
    if(k==0){
        return 1;
    }
    float a=GeometricSum(k-1);
    float b=1/(float)pow(2,k);
    return a+b;

}
int main(){
    int k;
    cin>>k;
    cout<<GeometricSum(k);
}