#include <iostream>
using namespace std;
int swap(int &a,int &b){
    int temp;
    temp = a;
    a=b;
    b=temp;
}
int main(){
    int a,b;
    cout<<"enter no."<<endl;
    cin>>a;
    cout<<"enter no."<<endl;
    cin>>b;
    cout<<"before swap"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    swap(a,b);
    cout<<"after swap";
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;


    return 0;
}