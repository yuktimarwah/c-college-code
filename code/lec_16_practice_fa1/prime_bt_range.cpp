#include <iostream>
using namespace std;
bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int start,end;
    cout<<"enter start"<<endl;
    cin>>start;
    cout<<"enter start"<<endl;
    cin>>end;
    for(int i=start;i<=end;i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}