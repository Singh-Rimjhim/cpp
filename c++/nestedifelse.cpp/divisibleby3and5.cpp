#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n%3==0){
        if(n%5==0){
            cout<<"divisible";
        }else{
            cout<<"not divisible";
        }
    }else{
        cout<<"not divisible";
    }
}