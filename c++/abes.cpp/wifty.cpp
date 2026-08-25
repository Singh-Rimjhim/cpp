// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter first side: ";
//     cin>>a;
//     int b;
//     cout<<"enter second side: ";
//     cin>>b;
//     int c;
//     cout<<"enter third side: ";
//     cin>>c;
//     if((a+b)<c||(b+c)<a||(a+c)<b){
//         cout<<"not triangle";
//     }
//     else{
//     if(a==b&&b==c){
//         cout<<"equilateral";
//     }
//     else if(a!=b && b!=c && a!=c){
//         cout<<"scalene";
//     }
//     else {
//         cout<<"isosceles";
//     }
// }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int sum = 0;
//     for (int i=1; i<=5; i=i+2){
//         sum = sum + i;
//     }
//     cout<<"sum = "<< sum;
// }

// #include<iostream>
// using namespace std;
// int main(){
    
//     int prod = 1;
//     for(int i = 1; i<=5
//     ; i++){
//         prod = prod*i;
//     }
//     cout<<"prod: "<<prod;
// }

#include<iostream>
using namespace std;
int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else 
    return fib(n-1)+fib(n-2);
}
int main(){
    for(int i=1; i<=n; i++){
    cout<< fib(i);
}
    return 0;
}