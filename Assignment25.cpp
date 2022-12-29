#include<iostream>
#include<string>
using namespace std;
bool doesContain(string s,string t){
    int n=s.size();
    int m=t.size();
    if(m==0){
        return true;
    }
    if(n==0){
        return false;
    }
    if(s[0]==t[0]){
        return doesContain(s.substr(1),t.substr(1));
    }
    else{
        return doesContain(s.substr(1),t);
    }

}
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    bool output=doesContain(s,t);
    if(output==true){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}