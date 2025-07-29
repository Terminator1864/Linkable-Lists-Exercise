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

  this->head = nullptr; 
  this->tail = nullptr; 
  this->size = 0; 
}

// === Traversal Function To Display The List In Forward Order ===
// This Function Will Display The List In Forward Order By Traversing From The Head To The Tail
// It Will Print The Data Of Each Node Until It Reaches The Tail Node.
// It Will Also Print A Message Indicating That The Forward Display Is In Progress

void traversal() { // Traversal Function To Display The List In Forward Order

  // Create a pointer that starts at the head of the list, which we will move through the list
  Node<T>* node = this->head;   

  // enter into a while loop that continues until the end of the list
  while (node != nullptr) {
    // print the data of the current node
    std::cout << "Current Data: " << node->data << std::endl; 

    // move the node pointer to the next node (the node that comes after itself)
    node = node->next;
  }
}

// === Reversal Function To Display The List In Reverse Order ===
// This Function Will Display The List In Reverse Order By Traversing From The Tail To The Head
// It Will Print The Data Of Each Node In Reverse Order Until It Reaches The Head Node
// It Will Also Print A Message Indicating That The Reversal Display Is In Progress
void reversal() {

  // Create a pointer that starts at the head of the list, which we will move through the list
  Node<T>* node = this->tail;   

  // enter into a while loop that continues until the end of the list
  while (node != nullptr) {
    // print the data of the current node
    std::cout << "Current Data: " << node->data << std::endl; 

    // move the node pointer to the next node (the node that comes after itself)
    node = node->prev;
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

  // Create the new node based on the data received
  Node<T>* newNode = new Node<T>(data);

  // if the list is empty, set the head and tail to the new node
  if (this->tail == nullptr) {
      this->tail = newNode;
      this->head = newNode;
      this->size += 1;
  } else {
      this->tail->next = newNode;
      newNode->prev = tail;
      this->tail = newNode;
      this->size += 1;
  }
}

// === Add A New Element To The Front Of The List And Return Its Value ===
// This Function Will Add A New Element To The Front Of The List And Return Its Value
// It Will Also Update The Head Pointer To Point To The New First Element
// If The List Is Empty, It Will Initialize The Head Pointer To Point To The New Element
void push_front(const T& data) {

  // Create the new node based on the data received
  Node<T>* newNode = new Node<T>(data);

  // if the list is empty, set the head and tail to the new node
  if (this->head == nullptr) {
      this->head = newNode;
      this->tail = newNode;
      this->size += 1;
  } else {
      this->head->prev = newNode;
      newNode->next = head;
      this->head = newNode;
      this->size += 1;
  }
}

void insert(const T& data, int pos) {


}

// === Remove The Last Element From The List And Return Its Value ===
// This Function Will Remove The Last Element From The List And Return Its Value
// It Will Also Update The Tail Pointer To Point To The New Last Element
// If The List Is Empty, It Will Return -1 Or An Appropriate Error Value
void pop_front() {

  // if the list is empty, do nothing
  if (this->head == nullptr) {
      std::cout << "Empty List. Nothing To Delete." << std::endl;
      return;
  }
  
  // if the list contains only one node, delete that one node
  if (this->head == this->tail) { // or this->size == 1
      // clear(); // delete the head and tail
      delete this->head; // or this->tail
      this->head = nullptr;
      this->tail = nullptr;
  } else {
      // if the list contains more than one node, delete the head node
      Node<T>* temp = this->head; // store the head node in a temporary variable
      this->head = this->head->next; // move the head pointer to the next node
      this->head->prev = nullptr; // set the previous pointer of the new head to nullptr
      delete temp; // delete the old/original head node
  }
}

void pop_back() {

  // if the list is empty, do nothing
  if (this->tail == nullptr) {
      std::cout << "Empty List. Nothing To Delete." << std::endl;
      return;
  }
  
  // if the list contains only one node, delete that one node
  if (this->tail == this->head) { // or this->size == 1
      // clear(); // delete the head and tail
      delete this->head; // or this->head
      this->head = nullptr;
      this->tail = nullptr;
  } else {
      // if the list contains more than one node, delete the head node
      Node<T>* temp = this->tail; // store the head node in a temporary variable
      this->tail = this->tail->prev; // move the head pointer to the next node
      this->tail->next = nullptr; // set the previous pointer of the new head to nullptr
      delete temp; // delete the old/original head node
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
