#include <iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n!=0){
        n/=10;
        count++;
    }
    cout<<count<<endl;
    return 0;
}