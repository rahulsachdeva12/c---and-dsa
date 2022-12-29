#include<iostream>
using namespace std;

int main(){
   char c;
   int count=0;
   c= cin.get();
   while(c!='$'){
    count++;
    c=cin.get();
   }
    cout<< "no.of different characters are\t"<<count<<endl;
    return 0;
}
