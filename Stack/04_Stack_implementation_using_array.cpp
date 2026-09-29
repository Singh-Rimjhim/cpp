/*Empty stack :- int top = -1;  
means:There is currently no element in the stack.
Then when we insert the first element:
top++;
becomes: -1 → 0
and then: stack[top] = 10;
means: stack[0] = 10;

Now The question is how to insert the element ??
push() means:Add an element to the TOP.

*********General formula**********************
            top++;
            stack[top] = value;

Before push() we must check is the stack full?
for an array of size n, max value of top can be n-1
top == size - 1 :- Stack is full

-----------------------------------------------------
Now The question is how to remove the element ??
pop() means:remove an element to the TOP.

*********General formula**********************
            top--;

Before pop() we must check is the stack empty?
top == - 1 :- Stack is empty

bool isEmpty() {
    return top == -1;
}

---------------------------------------------
peek()/top():- we can just see the element at top
formula:- stack[top];
*/

//Complete Stack Class
#include<iostream>
using namespace std;
class Stack{
    private:
    int arr[5];
    int top;
    public:
    Stack(){
        top=-1;
    }
    void push(int value){
        if(top==4){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=value;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }
    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top == -1;
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Top Element: "<< s.peek()<<endl;
    s.pop();
    cout<<"Top Element: "<< s.peek()<<endl;
    return 0;
}