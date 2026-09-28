/*
ARRAY {10,30, 50, 70}
You can directly access:arr[2]
which gives:30

Linked List
A linked list stores elements in nodes connected through pointers.
HEAD
 ↓
┌────┬────┐    ┌────┬────┐    ┌────┬────┐
│ 10 │  •─┼───→│ 20 │  •─┼───→│ 30 │NULL│
└────┴────┘    └────┴────┘    └────┴────┘
Each node generally contains:
data
next

Stack
A Stack doesn't care whether the underlying storage is an array or linked list.
It only says:
Insertion and deletion must happen according to LIFO.
For example:
push(10)
push(20)
Stack:
20 ← TOP
10
Then:pop()
removes 20.
*/
//----------------------------------------//
/*
2. Stack Using Array
We can use an array:
    ┌────┬────┬────┬────┬────┐
arr:│ 10 │ 20 │ 30 │    │    │
    └────┴────┴────┴────┴────┘
            ↑TOP
Here, we maintain a variable called top.
For example:
int top = -1;
Why -1? Because array indexes start from 0.
When the stack is empty:
top = -1
After inserting 10:top = 0
After inserting 20:top = 1
After inserting 30:top = 2
So:top tells us where the current TOP element is.
*/
//--------------------------------//
/*
3. Stack Using Linked List
We can use:HEAD = TOP
Example:
TOP
 ↓
30 → 20 → 10 → NULL
When we push(40):
TOP
 ↓
40 → 30 → 20 → 10 → NULL
When we pop():
TOP
 ↓
30 → 20 → 10 → NULL
So we use:insert at beginning for push().
And:delete from beginning for pop().
*/
//-------------------------------------//
/*
4. Which Linked List Concepts Do You Need?
A. Node                   B. Pointer
struct Node {               Node* top;
    int data;
    Node* next;
};

C. Insert at beginning          D. Delete from beginning
  new node                       TOP → first node → second node
      ↓                          After deletion:
TOP → old first node             TOP → second node
*/
//---------------------------------//
/*
5.Why Can't We Just Use an Array Normally?
The underlying array may allow random access, 
but our Stack implementation intentionally restricts access to the TOP.
*/
//----------------------------//
/*
6.One More Important Concept — ADT
You may hear the term ADT frequently in DSA.
ADT = Abstract Data Type
It describes:
What operations a data structure should provide, 
without necessarily specifying how those operations are implemented.
For Stack:
ADT
 ↓
Stack
 ↓
push()
pop()
top()
isEmpty()
size()
It can then be implemented using:
Array OR Linked List
*/