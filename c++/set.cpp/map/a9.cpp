#include<iostream>
#include<string>
#include<map>
using namespace std;
int main() {
    //declaration of map
    map<string, int> m;
    //insertion in map
    m["apple"]=100;
    m["banana"]=200;
    m["orange"]=300;
    //adding new element in map
    m.emplace("grape", 40);
    //transversing map (for output)
    for(auto p: m) {
        cout<<p.first<<" " <<p.second<<endl";
    }
        cout<<"cout="<<m.count("apple")<<endl;
        return 0;
}