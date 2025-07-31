#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter 1st no. "<<endl;
    cin>>a;
    cout<<"enter 2st no. "<<endl;
    cin>>b;
    char operation;
    cout<<"enter operation to be performed"<<endl;
    cin>>operation;
    switch(operation){
        case '+': cout<<a+b;
        break;
        case '-': cout<<a-b;
        break;
        case '*': cout<<a*b;
        break;
        case '/': cout<<a/b;
        break;
        case '%': cout<<a%b;
        break;
        default: cout<<"invalid";
        break;
    }
    return 0;
}