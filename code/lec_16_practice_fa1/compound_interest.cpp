#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double principal,time,rate,amount,CI;
    cout<<"enter principal,time,rate"<<endl;
    cin>>principal>>time>>rate;

    amount = principal*pow(1+ rate/100,time);
    CI=amount-principal;
    cout<<"amount = "<<amount<<endl;
    cout<<"CI = "<<CI<<endl;
    return 0;

    
}