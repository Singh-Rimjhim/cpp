#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    if((x%5==0)&&(x%3==0)){
        cout<<"x is divisible by 3 and 5";
    }
    else{
        cout<<"not divisible";
    }
}