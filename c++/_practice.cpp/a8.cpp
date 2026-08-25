#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>set1;
    set1.insert(3);
    set1.insert(4);
    set1.insert(5);
    cout<<set1.size()<<endl;
    set1.insert(3);
    cout<<set1.size()<<endl;
    //
    return 0;
}