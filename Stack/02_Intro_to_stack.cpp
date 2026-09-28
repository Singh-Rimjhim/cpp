/*
1. What is a Stack?
A Stack is a linear data structure in which insertion and deletion happen from only one end, called the TOP.
The Stack follows:
LIFO — Last In, First Out
That means:
The element inserted last is removed first.
Inserted:  Plate1 → Plate2 → Plate3
Removed:   Plate3 → Plate2 → Plate1
*/

/*
2. What is TOP?
TOP represents the end of the stack where we perform operations.
Example:
      TOP
       ↓
      30
      20
      10

Here, 30 is the top element.
*/

/*

3. Basic Stack Operations
There are five important operations:
Operation	Meaning
push()	Add an element
pop()	Remove the top element
top() / peek()	See the top element
isEmpty()	Check whether stack is empty
size()	Number of elements


--------------push()-----------
Adds an element to the TOP.
Before:
   20 ← TOP
   10
push(30)
After:
   30 ← TOP
   20
   10

-----------------pop()-----------
Removes the TOP element.
Before:
   30 ← TOP
   20
   10
pop()
After:
   20 ← TOP
   10
The removed element is 30.

------------top() / peek()----------------
Returns the top element without removing it.
   30 ← TOP
   20
   10
top() → 30
The stack remains unchanged.
*/

/*  
4. Overflow and Underflow
These two terms are important for exams.
Overflow: Trying to push() into a full fixed-size stack.
Capacity = 3
30
20
10
push(40) → OVERFLOW

Underflow: Trying to pop() from an empty stack.
Empty Stack
pop() → UNDERFLOW
*/

/*
5. Complexity
For a normal Stack implementation:
push()      → O(1)
pop()       → O(1)
top()/peek()→ O(1)
isEmpty()   → O(1)
size()      → O(1)
*/