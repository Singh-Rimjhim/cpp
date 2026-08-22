#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    bool isPrime= true;
    
  for(int i=2;i<=n-1;i++){
    if(n%i == 0) 
          isPrime = false;
          break;
  }
         
    if(n == 1) cout<<"Neither prime nor composite";
  else if (isPrime == true) cout<<"prime";
    else cout<<"composite";
}