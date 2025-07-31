#include <iostream>
using namespace std;
int hcf(int a,int b){
    int temp;
    while(b!=0){
        temp = b;
        b= a%b;
        a=temp;
    }
    return a;
}
int main(){
    int a,b;
    cout<<"enter no."<<endl;
    cin>>a;
    cout<<"enter no."<<endl;
    cin>>b;
    cout<<"hcf = "<<hcf(a,b)<<endl;
    return 0;
}