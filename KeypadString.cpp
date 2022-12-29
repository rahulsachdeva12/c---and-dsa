#include<iostream>
using namespace std;
int keypad(int num,string output[]){
    if(num==0){
        output[0]="";
        return 1;
    }
    string input;
    int n = num%10;
        num = num/10;
         int smallOutput=keypad(num,output);
        switch(n){
            case 2: input = "abc";
                break;
            case 3: input = "def";
                break;
            case 4: input = "ghi";
                break;
            case 5: input = "jkl";
                break;
            case 6: input = "mno";
                break;
            case 7: input = "pqrs";
                break;
            case 8: input = "tuv";
                break;
            case 9: input = "wxyz";
                break;
               
    }
      int ans_size=smallOutput*(input.size());
    string temp[100];
    int k=0;
    // int smallOutput=subs(num,output);
    for(int i=0;i<smallOutput;i++){
        for(int j=0;j<input.size();j++){
        temp[k]=output[i]+input[j];
        k++;
        }
    }
    for(int i=0;i<ans_size;i++){
        output[i]=temp[i];
    }
    return input.size()*smallOutput;
}
int main(){
    int num;
    cin>>num;
    string output[100];
    int count=keypad(num,output);
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
    cout<<"No. of subsequences is "<<count<<endl;//23   3*3=9 subsequences
                                                 //98    4*3=12
}