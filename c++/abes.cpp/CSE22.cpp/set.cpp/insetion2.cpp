#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s = {2, 3};
    s.insert(1);
     s.insert(10);
     s.insert(100);
     s.insert(100);
     s.insert(80);
    
    for(auto x : s)
    cout<< x <<" "<<endl;
    return 0;
}