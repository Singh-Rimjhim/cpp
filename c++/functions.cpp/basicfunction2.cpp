#include<iostream>
using namespace std;
void usa(){
    cout<<"You are in usa"<<endl;
}
void india(){
    cout<<"you are in india"<<endl;
}
int main(){
    cout<<"You are in main"<<endl;
    india();
    usa();
}