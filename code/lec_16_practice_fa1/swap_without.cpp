#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter no."<<endl;
    cin>>a;
    cout<<"enter no."<<endl;
    cin>>b;
    cout<<"before swap"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swap";
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;


    return 0;
}