#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,r,count=0,sum=0;
    cout<<"enter no."<<endl;
    cin>>n;
    int original=n;
    while(original!=0){
        original/=10;
        count++;
    }
    original=n;
    while(original!=0){
        r=original%10;
        sum+=round(pow(r,count));
        original/=10;
    }

    cout<<sum<<endl;
    if(n==sum){
        cout<<"armstrong"<<endl;
    }
    else{
        cout<<" NOT armstrong"<<endl;
    }

}