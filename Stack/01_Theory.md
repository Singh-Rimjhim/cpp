--------------STEP 1 — Introduction to Stack-------

STACK
Definition:
A Stack is a linear data structure in which insertion and deletion
take place from only one end called TOP.

Principle:
LIFO = Last In, First Out

Operations:
1. push()     → Insert element at TOP
2. pop()      → Remove element from TOP
3. top()      → Return TOP element without removing it
4. isEmpty()  → Check whether stack is empty
5. size()     → Return number of elements

Overflow:
Trying to insert into a full fixed-size stack.

Underflow:
Trying to delete from an empty stack.

Time Complexity:
push()      → O(1)
pop()       → O(1)
top()       → O(1)
isEmpty()   → O(1)
size()      → O(1)

Important:
Stack follows LIFO.

--------STEP 2— Stack vs Array vs Linked List-----
STACK IMPLEMENTATION

A Stack is an ADT based on LIFO.

A Stack can be implemented using:
1. Array
2. Linked List
3. Vector
4. Other suitable structures

ARRAY:
- Uses indexes.
- Usually fixed capacity when using a normal static array.
- A variable 'top' keeps track of the top element.

LINKED LIST:
- Uses nodes and pointers.
- TOP can be represented by HEAD.
- push() → insertion at beginning.
- pop() → deletion at beginning.

LINKED LIST CONCEPTS REQUIRED:
1. Node
2. Pointer
3. Dynamic memory
4. Insert at beginning
5. Delete from beginning

IMPORTANT:
Stack is the concept/ADT.
Array and Linked List are possible implementations.

-------STEP 3—Implementing Stack Using an Array-----

We maintain:
1. Array → stores elements
2. top → stores index of TOP element

Initially:
top = -1

EMPTY:
top == -1

FULL:
top == SIZE - 1


PUSH:
1. Check overflow
2. Increment top
3. Store value at arr[top]

POP:
1. Check underflow
2. Decrement top

PEEK:
Return arr[top] without changing top.


IMPORTANT:
During pop(), we do not necessarily erase the array value.
We simply move top backward, so that the old value is no longer
considered part of the Stack.


Complexity:
push() → O(1)
pop() → O(1)
peek() → O(1)
isEmpty() → O(1)