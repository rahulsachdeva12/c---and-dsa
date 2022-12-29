#include<iostream>
using namespace std;
void TowerOfHanoi(int n,char s,char d, char a){
    if(n==0){
        return;
    }
    TowerOfHanoi(n-1,s,a,d);
    cout<<"Move disk "<<n<<" from "<<s<<" to "<<d<<endl;
    TowerOfHanoi(n-1,a,d,s);


}
int main(){
    int n;
    cin>>n;
    TowerOfHanoi(n,'A','B','C');
}