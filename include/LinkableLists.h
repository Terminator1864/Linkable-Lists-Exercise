#ifndef LINKABLELIST_H
#define LINKABLELIST_H

// === Including Necessary Headers ===
// This Code Includes The iostream Library For Input/Output Operations
// It Also Includes The Node Class Header File To Use The Node Class In This Program
#include "Node.h"
#include <iostream>

// === Define The LinkableLists Class ===
// This Class Represents A Linkable List, Which Is A Data Structure Composed Of Nodes
// Each Node Contains A Pointer To The Next Node, A Pointer To The Previous Node, And An Integer Data Field
// The LinkableLists Class Provides Methods For Traversing, Reversing, Adding, Removing, And Peeking At Elements In The List
template<class T>
class LinkableLists {

// === Publicly Accessible Data Members ===
// The Public Access Specifier Allows These Members To Be Accessed From Outside The Class
// This Is Useful For Traversing The List And Manipulating Nodes, Such As Adding Or Removing Elements
public:


// === Constructor To Initialize The Linkable List With An Array ===
// This Constructor Takes An Array And The Count Of Elements In The Array As Arguments
// It Initializes The Linkable List By Creating Nodes For Each Element In The Array
// It Sets The Head Node To Point To The First Element And The Tail Node To Point To The Last Element
// It Also Initializes The Previous And Next Pointers For Each Node To Maintain The Linkable Structure
LinkableLists() {

  std::cout << "[SYSTEM] LinkableLists Initializing" << std::endl;

  this->head = nullptr; // Initialize The Head Pointer To Null
  this->tail = nullptr; // Initialize The Tail Pointer To Null
  this->size = 0; // Initialize The Size To 0
}

// === Traversal Function To Display The List In Forward Order ===
// This Function Will Display The List In Forward Order By Traversing From The Head To The Tail
// It Will Print The Data Of Each Node Until It Reaches The Tail Node.
// It Will Also Print A Message Indicating That The Forward Display Is In Progress
void traversal() { // Traversal Function To Display The List In Forward Order

  std::cout << "[SYSTEM] Forward Display In Progress" << std::endl;

  Node<T>* node = this->head; // Create Pointer That Starts At The Head Of The List  

  // === While Loop To Traverse The List ===
  // This Loop Will Continue Until The Node Pointer Reaches The End Of The List (nullptr)
  // It Will Print The Data Of Each Node In The List
  while (node != nullptr) {

    // print the data of the current node
    std::cout << "Current Data: " << node->data << std::endl; 
    node = node->next; // Move The Node Pointer To The Next Node In The List
  }
}

// === Reversal Function To Display The List In Reverse Order ===
// This Function Will Display The List In Reverse Order By Traversing From The Tail To The Head
// It Will Print The Data Of Each Node In Reverse Order Until It Reaches The Head Node
// It Will Also Print A Message Indicating That The Reversal Display Is In Progress
void reversal() {

  std::cout << "[SYSTEM] Reversal Display In Progress" << std::endl;

  Node<T>* node = this->tail; // Create Pointer That Starts At The Tail Of The List

  // === While Loop To Traverse The List In Reverse ===
  // This Loop Will Continue Until The Node Pointer Reaches The Beginning Of The List (nullptr)
  while (node != nullptr) {
   
    std::cout << "Current Data: " << node->data << std::endl; 
    node = node->prev; // Move The Node Pointer To The Previous Node In The List
  }
}


void search() {


}



void get(int pos) {


}


// === Add A New Element To The End Of The List And Return Its Value ===
// This Function Will Add A New Element To The End Of The List And Return Its Value
// It Will Also Update The Tail Pointer To Point To The New Last Element
// If The List Is Empty, It Will Initialize The Tail Pointer To Point To The New Element
void push_back(const T& data) {

  std::cout << "[SYSTEM] Adding New Element To The End Of The List" << std::endl;

  Node<T>* newNode = new Node<T>(data); // Create The New Node Based On The Data Receive

  // === Guard Clause To Check If The List Is Empty ===
  // If The List Is Empty, It Will Initialize The Head And Tail Pointers To Point To The New Node
  // It Will Also Set The Size To 1, Indicating That There Is One Element
  if (this->tail == nullptr) {
      this->tail = newNode; // Set The Tail Pointer To The New Node
      this->head = newNode; // Set The Head Pointer To The New Node
      this->size += 1; // Initialize The Size To 1
  } 
  
  else { // If The List Is Not Empty, Add The New Node To The End Of The List
      this->tail->next = newNode; // Set The Next Pointer Of The Current Tail To The New Node
      newNode->prev = tail; // Set The Previous Pointer Of The New Node To The Current Tail
      this->tail = newNode; // Update The Tail Pointer To Point To The New Node
      this->size += 1; // Increment The Size
  }
}

// === Add A New Element To The Front Of The List And Return Its Value ===
// This Function Will Add A New Element To The Front Of The List And Return Its Value
// It Will Also Update The Head Pointer To Point To The New First Element
// If The List Is Empty, It Will Initialize The Head Pointer To Point To The New Element
void push_front(const T& data) {

  std::cout << "[SYSTEM] Adding New Element To The Front Of The List" << std::endl;

  Node<T>* newNode = new Node<T>(data); // Create The New Node Based On The Data Receive

  // === Guard Clause To Check If The List Is Empty ===
  // If The List Is Empty, It Will Initialize The Head And Tail Pointers To Point To The New Node
  // It Will Also Set The Size To 1, Indicating That There Is One Element
  if (this->head == nullptr) {
      this->head = newNode; // Set The Head Pointer To The New Node
      this->tail = newNode; // Set The Tail Pointer To The New Node
      this->size += 1; // Initialize The Size To 1
  } 
  
  else { // If The List Is Not Empty, Add The New Node To The Front Of The List
      this->head->prev = newNode; // Set The Previous Pointer Of The Current Head To The New Node
      newNode->next = head; // Set The Next Pointer Of The New Node To The Current Head
      this->head = newNode; // Update The Head Pointer To Point To The New Node
      this->size += 1; // Increment The Size
  }
}

void insert(const T& data, int pos) {


}

// === Remove The Last Element From The List And Return Its Value ===
// This Function Will Remove The Last Element From The List And Return Its Value
// It Will Also Update The Tail Pointer To Point To The New Last Element
// If The List Is Empty, It Will Return -1 Or An Appropriate Error Value
void pop_front() {

  std::cout << "[SYSTEM] Removing The First Element From The List" << std::endl;

  // === Guard Clause To Check If The List Is Empty ===
  // If The List Is Empty, It Will Print A Message Indicating That There Is Nothing
  if (this->head == nullptr) {
      std::cout << "Empty List. Nothing To Delete." << std::endl;
      return;
  }
  
  // === Guard Clause To Check If The List Contains Only One Node ===
  // If The List Contains Only One Node, It Will Delete That One Node
  if (this->head == this->tail) { // Or this->size == 1
      
      // === Clear The List By Deleting The Head And Tail ===
      // This Will Delete The Head Node And Set The Head And Tail Pointers To Null
      delete this->head; // Delete The Head Node
      this->head = nullptr; // Set The Head Pointer To Null
      this->tail = nullptr; // Set The Tail Pointer To Null
  } 
  
  else { // If The List Contains More Than One Node, Remove The Head Node
      
      // === Remove The Head Node And Update The Head Pointer ===
      // This Will Delete The Head Node And Move The Head Pointer To The Next Node
      Node<T>* temp = this->head; // Store The Head Node In A Temporary Variable
      this->head = this->head->next; // Move The Head Pointer To The Next Node
      this->head->prev = nullptr; // Set The Previous Pointer Of The New Head To Nullptr
      delete temp; // Delete The Old/Original Head Node
  }
}

void pop_back() {

  std::cout << "[SYSTEM] Removing The Last Element From The List" << std::endl;

  // === Guard Clause To Check If The List Is Empty ===
  // If The List Is Empty, It Will Print A Message Indicating That There Is Nothing
  if (this->tail == nullptr) {
      std::cout << "Empty List. Nothing To Delete." << std::endl;
      return;
  }
  
  // === Guard Clause To Check If The List Contains Only One Node ===
  // If The List Contains Only One Node, It Will Delete That One Node
  if (this->tail == this->head) { // Or this->size == 1

      // === Clear The List By Deleting The Head And Tail ===
      // This Will Delete The Tail Node And Set The Head And Tail Pointers To Null
      delete this->head; // Delete The Tail Node
      this->head = nullptr; // Set The Head Pointer To Null
      this->tail = nullptr; // Set The Tail Pointer To Null
  } 
  
  else { // If The List Contains More Than One Node, Remove The Tail Node

      // === Remove The Tail Node And Update The Tail Pointer ===
      // This Will Delete The Tail Node And Move The Tail Pointer To The Previous Node
      Node<T>* temp = this->tail; // Store The Tail Node In A Temporary Variable
      this->tail = this->tail->prev; // Move The Tail Pointer To The Previous Node
      this->tail->next = nullptr; // Set The Next Pointer Of The New Tail To Nullptr
      delete temp; // Delete The Old/Original Tail Node
  }
}

void remove(int pos) {


}

void remove(const T& data) {


}

void remove(const T& data, int pos) {


}

void clear() {


}

// === Private Data Members ===
// The Private Access Specifier Restricts Access To These Members From Outside The Class
// This Is Useful For Encapsulating The Internal Structure Of The Linkable List
// It Prevents External Code From Directly Modifying The Head And Tail Pointers, Ensuring Data Integrity
private:

  // === Instantiations Of The Objects: Head & Tail === 
  // This IS Done Through Composition: Node Pointers Are Pointing To Their Respective Variable 
  // When You Have An Object Of A Class - Node - You Can Point To A Different Part Within This Program  
  Node<T>* head; // Pointing To The Start Of The List/Beginning Of The List 
  Node<T>* tail; // Pointing To The End Of The List/Last Part Of The List 
  int size = 0; // Integer Data Field To Store The Size Of The List

  // Note: The Head Is A Special Node That Serves As The Starting Point Or Entry Point Of A Linkable List. 
  // It Contains The Reference To The First Node In The List. By Accessing The Head Node, We Can Traverse 
  // The Entire Linkable List By Following The Pointers To Subsequent Nodes.

};

#endif // End Of LINKABLELIST_H
