#include <iostream>
using namespace std;
int gcd(int a,int b){
    int temp;
    while(b!=0){
        temp =b;
        b=a%b;
        a=temp;
    }
    return a;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int a,b;
    cout<<"enter no's";
    cin>>a>>b;
    cout<<"lcm = "<<lcm(a,b)<<endl;
}