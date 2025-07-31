#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. "<<endl;
    cin>>n;
    int r,sum=0;
    while(n!=0){
        r=n%10;
        sum+=r;
        n/=10;
    }
    cout<<sum<<endl;
    return 0;
}