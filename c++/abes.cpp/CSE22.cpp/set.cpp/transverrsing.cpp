#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s2 = {1, 2, 3, 2, 1};
    //transversing the set
    for(int x : s2)
    cout<< x <<" ";
    cout<<endl;
    return 0;
}