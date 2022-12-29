#include<iostream>
using namespace std;
int count_digit(int num)
{
static int count=0;
    if(num>0)
    {

        if(num%10==0)
        count++;

        count_digit(num/10);
    }
    else if(num==0){
        return 1;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<count_digit(n)<<endl;
}


