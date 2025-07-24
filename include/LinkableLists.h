// === Including Necessary Headers ===
// This Code Includes The iostream Library For Input/Output Operations
// It Also Includes The Node Class Header File To Use The Node Class In This Program
#include "Node.h"

// === Define The LinkableLists Class ===
// This Class Represents A Linkable List, Which Is A Data Structure Composed Of Nodes
// Each Node Contains A Pointer To The Next Node, A Pointer To The Previous Node, And An Integer Data Field
// The LinkableLists Class Provides Methods For Traversing, Reversing, Adding, Removing, And Peeking At Elements In The List
class LinkableLists {

// === Publicly Accessible Data Members ===
// The Public Access Specifier Allows These Members To Be Accessed From Outside The Class
// This Is Useful For Traversing The List And Manipulating Nodes, Such As Adding Or Removing Elements
public:

  // === Publicly Accessible Constructor ===
  // Constructor Allows Us To Initialize This Linkable List Via Using Array 
  // By Passing These Two Arguments Through Constructor, We Can Cycle Via For Loop Through Array 
  LinkableLists(int listArray[], int countElementsArray); // Passing Two Arguments Through Constructor 

  void traversal(); // Traversal Function To Display The List In Forward Order
  void reversal(); // Reversal Function To Display The List In Reverse Order
  int push_back(int newData); // Add A New Element To The End Of The List And Return Its Value
  int push_front(int newData); // Add A New Element To The Front Of The List And Return Its Value
  int pop(); // Remove The Last Element From The List And Return Its Value
  int peek(); // Peek Function To Return The Last Element In The List Without Removing It

// === Private Data Members ===
// The Private Access Specifier Restricts Access To These Members From Outside The Class
// This Is Useful For Encapsulating The Internal Structure Of The Linkable List
// It Prevents External Code From Directly Modifying The Head And Tail Pointers, Ensuring Data Integrity
private:

  // === Instantiations Of The Objects: Head & Tail === 
  // This IS Done Through Composition: Node Pointers Are Pointing To Their Respective Variable 
  // When You Have An Object Of A Class - Node - You Can Point To A Different Part Within This Program  
  Node* head; // Pointing To The Start Of The List/Beginning Of The List 
  Node* tail; // Pointing To The End Of The List/Last Part Of The List 

  // Note: The Head Is A Special Node That Serves As The Starting Point Or Entry Point Of A Linkable List. 
  // It Contains The Reference To The First Node In The List. By Accessing The Head Node, We Can Traverse 
  // The Entire Linkable List By Following The Pointers To Subsequent Nodes.

};