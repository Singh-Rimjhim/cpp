#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s = {1, 2, 3, 4};
   s.erase(2);
    for(auto x : s)
    cout<< x <<" "<<endl;
    return 0;
} 