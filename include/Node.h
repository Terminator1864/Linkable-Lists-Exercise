
// === Header Guard ===
// It Ensures That The Node Class Has Only One Definition, Preventing Multiple Inclusions Errors
// The Header Guard Is A Common Practice In C++ To Avoid Issues With Multiple Inclusions
#ifndef NODE_H
#define NODE_H

// === Define The Node Class ===
// This Class Represents A Node In The Linkable List
// Each Node Contains A Pointer To The Next Node, A Pointer To The Previous Node, And An Integer Data Field
template<class T>
class Node {

// === Publicly Accessible Data Members ===
// The Public Access Specifier Allows These Members To Be Accessed From Outside The Class
// This Is Useful For Traversing The List And Manipulating Nodes, Such As Adding Or Removing Elements
public:

  Node<T>* next = nullptr; // Pointer ("Pointing" To The Address Location) To The Next Node In The Sequence
  Node<T>* prev = nullptr; // Pointer ("Pointing" To The Address Location) To Previous Node In The Sequence
  T data; // Data Field To Store The Value Of The Node

  // === Default Dummy Constructor ===
  // This Dummy Constructor Initializes The Node With Default Values
  Node() { // "Dummy Node - Temporary Node": So We Do Not Loose Track When changing About Nodes/Etc.
      this->next = nullptr; // Initialize The Next Pointer To Nullptr
      this->prev = nullptr; // Initialize The Previous Pointer To Nullptr
      this->data = T(); // Initialize The Data Field To Default Value
  }

  // === Constructor To Initialize The Node With Data ===
  // This Constructor Takes A Data Value As An Argument And Initializes The Node With That Value
  Node(T data) {
      this->next = nullptr; // Initialize The Next Pointer To Nullptr
      this->prev = nullptr; // Initialize The Previous Pointer To Nullptr
      this->data = data; // Initialize The Data Field To The Given Value
  }
};

#endif // End Of The NODE_H