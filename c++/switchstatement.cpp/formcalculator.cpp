#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter first number : ";
    cin>>n1;
    char op;
    cout<<"Enter op : ";
    cin>>op;
    int n2;
    cout<<"Enter second number : ";
    cin>>n2;
   // if (op=='+')cout<<n1+n2<<endl;
   // if (op=='-')cout<<n1-n2<<endl;
    //if (op=='*')cout<<n1*n2<<endl;
    //if (op=='/')cout<<n1/n2;
    switch(op){
        case '+':
        cout<<n1+n2<<endl;
        case '-':
        cout<<n1-n2<<endl;
        case '*':
        cout<<n1*n2<<endl;
        case '/':
        cout<<n1/n2<<endl;
        default:
        cout<<"invalid operator"<<endl;
    }
}