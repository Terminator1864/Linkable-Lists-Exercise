
// === Including Necessary Libraries ===
// This Code Includes The iostream Library For Input/Output Operations
#include <iostream> // Include The Input/Output Stream Library For Console Output

// === Including Necessary Header Files ===
// This Code Includes The Header File For The LinkableLists Class To Use Its Functionality
#include "Node.h" // Include The Header File For The Node Class
#include "LinkableLists.h"

// === Constructor To Initialize The Linkable List With An Array ===
// This Constructor Takes An Array And The Count Of Elements In The Array As Arguments
// It Initializes The Linkable List By Creating Nodes For Each Element In The Array
// It Sets The Head Node To Point To The First Element And The Tail Node To Point To The Last Element
// It Also Initializes The Previous And Next Pointers For Each Node To Maintain The Linkable Structure
template<class T>
LinkableLists<T>::LinkableLists() {

  this->head = nullptr; 
  this->tail = nullptr; 
  this->size = 0; 
}

// === Traversal Function To Display The List In Forward Order ===
// This Function Will Display The List In Forward Order By Traversing From The Head To The Tail
// It Will Print The Data Of Each Node Until It Reaches The Tail Node.
// It Will Also Print A Message Indicating That The Forward Display Is In Progress
template<class T>
void LinkableLists<T>::traversal() { // Traversal Function To Display The List In Forward Order

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
template<class T>
void LinkableLists<T>::reversal() {

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


template<class T>
void LinkableLists<T>::search() {


}


template<class T>
void LinkableLists<T>::get(int pos) {


}


// === Add A New Element To The End Of The List And Return Its Value ===
// This Function Will Add A New Element To The End Of The List And Return Its Value
// It Will Also Update The Tail Pointer To Point To The New Last Element
// If The List Is Empty, It Will Initialize The Tail Pointer To Point To The New Element
template<class T>
void LinkableLists<T>::push_back(const T& data) {

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
template<class T>
void LinkableLists<T>::push_front(const T& data) {

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


template<class T>
void LinkableLists<T>::insert(const T& data, int pos) {


}

// === Remove The Last Element From The List And Return Its Value ===
// This Function Will Remove The Last Element From The List And Return Its Value
// It Will Also Update The Tail Pointer To Point To The New Last Element
// If The List Is Empty, It Will Return -1 Or An Appropriate Error Value
template<class T>
void LinkableLists<T>::pop_front() {

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

template<class T>
void LinkableLists<T>::pop_back() {

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


template<class T>
void LinkableLists<T>::remove(int pos) {


}

template<class T>
void LinkableLists<T>::remove(const T& data) {


}

template<class T>
void LinkableLists<T>::remove(const T& data, int pos) {


}

template<class T>
void LinkableLists<T>::clear() {


}
