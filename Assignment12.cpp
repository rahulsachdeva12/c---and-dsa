#include<iostream>
#include<string.h>
using namespace std;
bool checkPalindrome(string h,int s,int e){
    if(s==e||s-e==1){
        return true;
    }
    else{
        if(h[s]==h[e]){
            return checkPalindrome(h,s+1,e-1);
        }
        else{
            return false;
        }

    }

}

int main(){
    string s;  
    cin>>s;
     int n=s.size();
    bool output=checkPalindrome(s,0,n-1);
    if(output==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}