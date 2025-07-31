#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter no. "<<endl;
    cin>>a;
    cout<<"enter no. "<<endl;
    cin>>b;
    cout<<"enter no. "<<endl;
    cin>>c;
    if(a>b && a>c){
        cout<<"a is greatest";
    }
    else if(b>a && b>c){
        cout<<"b is greatest";
    }
    else{
        cout<<"c is greatest";
    }
    
    return 0;
}