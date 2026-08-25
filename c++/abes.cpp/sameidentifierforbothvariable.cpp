#include<iostream> 
using namespace std;
    //global variable
    int x = 100;
    int main(){
        //local variablewith the same name
        int x = 50;
        cout<<"Local x = "<<x<<endl; //prints local variable
        cout<<"Global x = "<<::x<<endl; //prints global variable using ::
        return 0;
    }
