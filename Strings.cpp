#include<iostream>
#include<string>
using namespace std;
int main(){
   // string s="abc";
    string* sp=new string;
    *sp="def";
    cout<<sp<<endl;
    cout<<*sp<<endl;
    string s;
    //cin>>s;//will not take input after space
    //getline(cin,s);// will take space as well
    s="abc";
    // cout<<s[0]<<endl;
    // s[1]='a';
    cout<<s<<endl;
    string s1="def";
    string s2=s1+s;
     cout<<s2<<endl;
     s+=s1;
      cout<<s<<endl;
      cout<<s.size()<<endl;
       cout<<s.length()<<endl;
        cout<<s.substr(3)<<endl;
         cout<<s.substr(3,2)<<endl;
          cout<<s.find("def")<<endl;
    


}