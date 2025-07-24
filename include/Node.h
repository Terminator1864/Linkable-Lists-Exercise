
// === Header Guard ===
// It Ensures That The Node Class Has Only One Definition, Preventing Multiple Inclusions Errors
// The Header Guard Is A Common Practice In C++ To Avoid Issues With Multiple Inclusions
#ifndef NODE_H
#define NODE_H

// === Define The Node Class ===
// This Class Represents A Node In The Linkable List
// Each Node Contains A Pointer To The Next Node, A Pointer To The Previous Node, And An Integer Data Field
class Node {

// === Publicly Accessible Data Members ===
// The Public Access Specifier Allows These Members To Be Accessed From Outside The Class
// This Is Useful For Traversing The List And Manipulating Nodes, Such As Adding Or Removing Elements
public:

  Node* next = nullptr; // Pointer ("Pointing" To The Address Location) To The Next Node In The Sequence
  Node* previous = nullptr; // Pointer ("Pointing" To The Address Location) To Previous Node In The Sequence
  int data; // Data Field To Store The Value Of The Node
  int listSize = 0; // Integer Data Field To Store The Size Of The List
};

#endif // End Of The NODE_H