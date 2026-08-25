#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int num = 65;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<char(num);
            num++;
        }
        cout<<endl;
    }
}