#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. "<<endl;
    cin>>n;
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count=1;
        }
    }
    if(count==0){
        cout<<"is prime";
    }
    else{
        cout<<"not prime";
    }
    
    return 0;
}