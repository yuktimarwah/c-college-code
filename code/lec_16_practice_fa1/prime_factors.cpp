#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. "<<endl;
    cin>>n;
    while(n%2==0){
        cout<<"2"<<" ";
        n/=2;
    }
    for(int i=3;i<=n;i+=2){
        if(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n>2){
            cout<<n;
        }
        return 0;
}