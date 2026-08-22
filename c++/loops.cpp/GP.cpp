#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
   // for (int i=1;i<=n*2;i=i*2){
       // cout<<i<<" ";
    int a = 1;
    for (int i=1;i<=n;i++){
       cout<<a<<" ";
        a = a * 2;
    }
}