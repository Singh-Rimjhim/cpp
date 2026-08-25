#include<iostream>
#include<set>
using namespace std;
int main(){
    //declaration of set
    set<int,greater<int>>set1;

    //insertion in set
    set1.insert(3);
    set1.insert(4);
    set1.insert(5);

    //finding size of set
    cout<<set1.size()<<endl;

    //transversing set
    set<int>::iterator itr;
    for(itr=set1.begin(); itr!=set1.end(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;
    //deleting element from set
    set1.erase(4);
    for(itr=set1.begin(); itr!=set1.end(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;


    return 0;
}