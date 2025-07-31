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
LinkableLists(T myListArray[], int count) { // Takes IN 

  std::cout << "[SYSTEM] LinkableLists Initializing" << std::endl;

  this->head = nullptr; // Initialize The Head Pointer To Null
  this->tail = nullptr; // Initialize The Tail Pointer To Null
  this->size = 0; // Initialize The Size To 0

  for (int i = 0; i < count; i++) {
      push_back(myListArray[i]); // Use your existing push_back logic
  }

  std::cout << "[SYSTEM] LinkableLists Initialization: Successful" << std::endl;
}

// === Constructor To Initialize The Linkable List With An Array ===
// This Constructor Takes An Array And The Count Of Elements In The Array As Arguments
// It Initializes The Linkable List By Creating Nodes For Each Element In The Array
// It Sets The Head Node To Point To The First Element And The Tail Node To Point To The Last Element
// It Also Initializes The Previous And Next Pointers For Each Node To Maintain The Linkable Structure
LinkableLists() {

  std::cout << "[SYSTEM] Empty LinkableLists Initializing" << std::endl;

  this->head = nullptr; // Initialize The Head Pointer To Null
  this->tail = nullptr; // Initialize The Tail Pointer To Null
  this->size = 0; // Initialize The Size To 0

  std::cout << "[SYSTEM] Empty LinkableLists Initialization: Successful" << std::endl;
}

// === Traversal Function To Display The List In Forward Order ===
// This Function Will Display The List In Forward Order By Traversing From The Head To The Tail
// It Will Print The Data Of Each Node Until It Reaches The Tail Node.
// It Will Also Print A Message Indicating That The Forward Display Is In Progress
void traversal() { // Traversal Function To Display The List In Forward Order

  std::cout << "[SYSTEM] Traversing Display: In Progress" << std::endl;

  Node<T>* node = this->head; // Create Pointer That Starts At The Head Of The List  

  // === While Loop To Traverse The List ===
  // This Loop Will Continue Until The Node Pointer Reaches The End Of The List (nullptr)
  // It Will Print The Data Of Each Node In The List
  while (node != nullptr) {

    // print the data of the current node
    std::cout << "[INFO] Current Data(Traversal): " << node->data << std::endl; 
    node = node->next; // Move The Node Pointer To The Next Node In The List
  }

  std::cout << "[SYSTEM] Traversing Display: Complete" << std::endl;
}

// === Reversal Function To Display The List In Reverse Order ===
// This Function Will Display The List In Reverse Order By Traversing From The Tail To The Head
// It Will Print The Data Of Each Node In Reverse Order Until It Reaches The Head Node
// It Will Also Print A Message Indicating That The Reversal Display Is In Progress
void reversal() {

  std::cout << "[SYSTEM] Reversal Display: In Progress" << std::endl;

  Node<T>* node = this->tail; // Create Pointer That Starts At The Tail Of The List

  // === While Loop To Traverse The List In Reverse ===
  // This Loop Will Continue Until The Node Pointer Reaches The Beginning Of The List (nullptr)
  while (node != nullptr) {
   
    std::cout << "[INFO] Current Data(Reversal): " << node->data << std::endl; 
    node = node->prev; // Move The Node Pointer To The Previous Node In The List
  }

  std::cout << "[SYSTEM] Reversal Display: Complete" << std::endl;
}

// === Search For An Element In The List ===
// It Will Traverse The List And Check Each Node's Data Against The Search Criteria
// If The Element Is Found, It Will Print A Message Indicating The Element's Position
// If The Element Is Not Found, It Will Print A Message Indicating That The Element Was Not Found
void search(const T& inputData) {

  std::cout << "[SYSTEM] Searching For An Element In The List" << std::endl;

  if (head == nullptr) {
      std::cout << "[WARNING] List Is Empty — Nothing To Search" << std::endl;
      return;
  }

  Node<T>* node = this->head; // Create Pointer That Starts At The Head Of The List  
  int index = 0; // Initialize Index Counter To 0, This Will Keep Track Of The Current Node's Position In The List

  // === While Loop To Traverse The List ===
  // This Loop Will Continue Until The Node Pointer Reaches The End Of The List (nullptr)
  // It Will Print The Data Of Each Node In The List
  while (node != nullptr) {

    std::cout << "[INFO] Searching Node Data: " << node->data << " At Index: " << index << std::endl;

    // === Guard Clause: Check If The Current Node Contains The Input Data ===
    // If The Current Node Contains The Input Data, It Will Print A Message Indicating That The Data Was Found
    if (node->data == inputData) {
      std::cout << "[INFO] User Found Data: " << inputData << std::endl;
      break; // Exit Function When Found Data 
    }

    node = node->next; // Move The Node Pointer To The Next Node In The List
    ++index; // Increase The Index Counter By One After Cycling Through Each Node
  }

  std::cout << "[SYSTEM] Search Operation: Complete" << std::endl;
}


// === Get The Element At A Specific Position In The List ===
// It Will Traverse The List Until It Reaches The Specified Position
// If The Position Is Valid, It Will Return The Data Of The Node At That Position
// If The Position Is Invalid, It Will Print An Error Message
void get(int pos) {

  int counter = 0; // Only Within This Scope Of This Get Function: Counter Comes Into Existence And Belongs Within,
  // This Get Function, And Same IS True For ANY Variable Declaration(s) With Any Function. This Counter LIVES AND DIES,
  // Within Each Exclusive Function Call(s)

  std::cout << "[SYSTEM] Getting Element At Position: " << pos << std::endl;

  // === Guard Clause To Check If The Position Is Valid ===
  // If The Position Is Invalid, It Will Print An Error Message
  if (pos < 0 || pos >= this->size) {
    std::cout << "[ERROR] Invalid Position — Out Of Range" << std::endl;
    return; // Exit The Function If The Position Is Invalid
  }

  // === Guard Clause To Check If The List Is Empty ===
  // If The List Is Empty, It Will Print A Message Indicating That There Is Nothing To Get
  if (head == nullptr) {                      
    std::cout << "[ERROR] List Is Empty" << std::endl;
    return; // Exit The Function If The List Is Empty
  }

  // Only Within This Scope Of This Get Function: Counter Comes Into Existence And Belongs Within,
  // This Get Function, And Same IS True For ANY Variable Declaration(s) With Any Function. This Counter LIVES AND DIES,
  // Within Each Exclusive Function Call(s)
  Node<T>* node = this->head; // Create Pointer That Starts At The Head Of The List
  int index = 0; // Initialize Counter To 0

  // === While Loop To Traverse The List ===
  // This Loop Will Continue Until The Node Pointer Reaches The End Of The List (nullptr)
  // It Will Also Check If The Current Index Is Less Than The Position To Get
  while (node != nullptr && index < pos) {
    node = node->next; // Move The Node Pointer To The Next Node In The List
    // Only Within This Scope Of This Get Function: Counter Comes Into Existence And Belongs
    ++index; // Increase The Index Counter By One After Cycling Through Each Node
  }

  // === Guard Clause To Check If The Node Is Null ===
  // If The Node Is Null, It Means The Position Is Out Of Range
  if (node == nullptr) {
    std::cout << "[ERROR] Unexpected Null Node" << std::endl;
    return; // Exit The Function If The Node Is Null
  }

  std::cout << "[INFO] User Found Data: " << node->data << ", At Position: " << pos << std::endl;
  std::cout << "[SYSTEM] Get Operation: Complete" << std::endl;
}


// === Add A New Element To The End Of The List And Return Its Value ===
// This Function Will Add A New Element To The End Of The List And Return Its Value
// It Will Also Update The Tail Pointer To Point To The New Last Element
// If The List Is Empty, It Will Initialize The Tail Pointer To Point To The New Element
void push_back(const T& data) {

  std::cout << "[SYSTEM] Push_Back: In Progress" << std::endl;
  std::cout << "[SYSTEM] Adding New Element To The Back Of The List" << std::endl;

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

  std::cout << "[SYSTEM] Push_Front: In Progress" << std::endl;
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

      std::cout << "[SYSTEM] Push_Front Operation: Complete" << std::endl;
  }
}

// === Insert An Element At A Specific Position In The List ===
// It Will Traverse The List Until It Reaches The Specified Position
// If The Position Is Valid, It Will Insert The New Node At That Position
// If The Position Is Invalid, It Will Print An Error Message
void insert(const T& inputData, int pos) {

  std::cout << "[SYSTEM] Attempting To Insert New Element At Position: " << pos << std::endl;

  if (pos < 0 || pos > this->size) {
      std::cout << "[ERROR] Invalid Position. Insertion Failure" << std::endl;
      return; // Return If The Position Is Invalid
  }

  Node<T>* newNode = new Node<T>(inputData); // Create The New Node Based On The Data Receive

  std::cout << "[SYSTEM] Inserting Element: " << inputData << " At Position: " << pos << std::endl;

  if (pos == 0) {
      push_front(inputData);
      return;
  }
  if (pos == this->size) {
      push_back(inputData);
      return;
  }

  Node<T>* current = this->head;
  int currentIndex = 0;
  while (current != nullptr && currentIndex < pos) {
      current = current->next;
      currentIndex++;
  }

  if (current == nullptr) {
      std::cout << "[ERROR] Position Out Of Bounds During Insertion" << std::endl;
      delete newNode;
      return;
  }

  newNode->prev = current->prev;
  newNode->next = current;
  if (current->prev) current->prev->next = newNode;
  current->prev = newNode;
  this->size += 1;

  std::cout << "[SYSTEM] Insert Operation: Complete" << std::endl;
}

// === Remove The Last Element From The List And Return Its Value ===
// This Function Will Remove The Last Element From The List And Return Its Value
// It Will Also Update The Tail Pointer To Point To The New Last Element
// If The List Is Empty, It Will Return -1 Or An Appropriate Error Value
void pop_front() {

  std::cout << "[SYSTEM] Pop_Front: In Progress" << std::endl;
  std::cout << "[SYSTEM] Removing The First Element From The List" << std::endl;

  // === Guard Clause To Check If The List Is Empty ===
  // If The List Is Empty, It Will Print A Message Indicating That There Is Nothing
  if (this->head == nullptr) {
      std::cout << "[ERROR] Empty List. Nothing To Delete." << std::endl;
      return; // Return If The List Is Empty
  }
  
  // === Guard Clause To Check If The List Contains Only One Node ===
  // If The List Contains Only One Node, It Will Delete That One Node
  if (this->head == this->tail) { // Or this->size == 1
      
      // === Clear The List By Deleting The Head And Tail ===
      // This Will Delete The Head Node And Set The Head And Tail Pointers To Null
      delete this->head; // Delete The Head Node
      this->head = nullptr; // Set The Head Pointer To Null
      this->tail = nullptr; // Set The Tail Pointer To Null
      --size; // Decrement The Size Since We Removed The Only Node
      return;
  } 
  
  else { // If The List Contains More Than One Node, Remove The Head Node
      
      // === Remove The Head Node And Update The Head Pointer ===
      // This Will Delete The Head Node And Move The Head Pointer To The Next Node
      Node<T>* temp = this->head; // Store The Head Node In A Temporary Variable
      this->head = this->head->next; // Move The Head Pointer To The Next Node
      this->head->prev = nullptr; // Set The Previous Pointer Of The New Head To Nullptr
      delete temp; // Delete The Old/Original Head Node

      std::cout << "[SYSTEM] Pop_Front Operation: Complete" << std::endl;
  }
}

void pop_back() {

  std::cout << "[SYSTEM] Pop_Back: In Progress" << std::endl;
  std::cout << "[SYSTEM] Removing The Last Element From The List" << std::endl;

  // === Guard Clause To Check If The List Is Empty ===
  // If The List Is Empty, It Will Print A Message Indicating That There Is Nothing
  if (this->tail == nullptr) {
      std::cout << "[ERROR] Empty List. Nothing To Delete." << std::endl;
      return; // Return If The List Is Empty
  }
  
  // === Guard Clause To Check If The List Contains Only One Node ===
  // If The List Contains Only One Node, It Will Delete That One Node
  if (this->tail == this->head) { // Or this->size == 1

      // === Clear The List By Deleting The Head And Tail ===
      // This Will Delete The Tail Node And Set The Head And Tail Pointers To Null
      delete this->head; // Delete The Tail Node
      this->head = nullptr; // Set The Head Pointer To Null
      this->tail = nullptr; // Set The Tail Pointer To Null
      --size; // Decrement The Size Since We Removed The Only Node
      return; // Return If The List Contains Only One Node
  } 
  
  else { // If The List Contains More Than One Node, Remove The Tail Node

      // === Remove The Tail Node And Update The Tail Pointer ===
      // This Will Delete The Tail Node And Move The Tail Pointer To The Previous Node
      Node<T>* temp = this->tail; // Store The Tail Node In A Temporary Variable
      this->tail = this->tail->prev; // Move The Tail Pointer To The Previous Node
      this->tail->next = nullptr; // Set The Next Pointer Of The New Tail To Nullptr
      delete temp; // Delete The Old/Original Tail Node

      std::cout << "[SYSTEM] Pop_Back Operation: Complete" << std::endl;
  }
}

// === Remove An Element At A Specific Position In The List ===
// It Will Traverse The List Until It Reaches The Specified Position
// If The Position Is Valid, It Will Remove The Node At That Position
// If The Position Is Invalid, It Will Print An Error Message
void remove(int pos) {

  std::cout << "[SYSTEM] Attempting To Remove Element At Position: " << pos << std::endl;

  // === Guard Clause To Check If The Position Is Valid ===
  // If The Position Is Invalid, It Will Print An Error Message
  // This Will Indicate That The Position Is Out Of Bounds
  // It Will Also Return If The Position Is Invalid
  if (pos < 0 || pos > this->size) {
      std::cout << "[ERROR] Invalid Position. Deletion Failure" << std::endl;
      return; // Return If The Position Is Invalid
  }

  // === Traverse To The Node At The Specified Position (0-based index) ===
  // This Will Traverse The List Until It Reaches The Node At The Specified Position
  // It Will Print A Message Indicating The Element Being Taken Out 
  Node<T>* current = this->head;
  int currentIndex = 0;

  // === While Loop To Traverse The List ===
  // This Loop Will Continue Until The Node Pointer Reaches The End Of The List (nullptr)
  // It Will Also Print The Data Of Each Node In The List
  while (current != nullptr && currentIndex < pos) {
      std::cout << "[SYSTEM] Current Node Data: " << current->data << std::endl;
      current = current->next;
      currentIndex++;
  }

  // === Guard Clause: Check If The Node To Remove Is Valid ===
  // If The Node To Remove Is Nullptr, It Will Print An Error Message
  // This Will Indicate That The Position Is Out Of Bounds
  // It Will Also Return If The Node To Remove Is Nullptr
  if (current == nullptr) {
      std::cout << "[ERROR] Position out of bounds." << std::endl;
      return;
  }

  // ===  Guard Clause: Check If The Node To Remove Is The Head ===
  // If Node To Remove Is Head, This Will Remove The Head Node
  // It Will Update The Head Pointer To Point To The Next Node
  if (current == this->head) {
      pop_front();
      std::cout << "[SYSTEM] Element Removal At Position: Successful" << std::endl;
      return;
  }
  // === Guard Clause: Check If The Node To Remove Is The Tail ===
  // If Node To Remove Is Tail, This Will Remove The Tail Node
  if (current == this->tail) {
      pop_back();
      std::cout << "[SYSTEM] Element Removal At Position: Successful" << std::endl;
      return;
  }

  // === Remove Node From The Middle ===
  // If The Node To Remove Is In The Middle, This Will Remove The Node
  // It Will Update The Previous And Next Pointers Of The Adjacent Nodes
  if (current->prev) current->prev->next = current->next;
  if (current->next) current->next->prev = current->prev;

  // === Delete The Current Node ===
  // This Will Delete The Current Node And Free Up Memory
  std::cout << "[SYSTEM] Removing Element At Position: " << pos << std::endl;
  delete current;
  this->size -= 1;

  std::cout << "[SYSTEM] Element Removal With Position: Successful" << std::endl;
  return;
}

// === Remove An Element With Specific Data From The List ===
// This Function Will Traverse The List And Check Each Node's Data Against The Given Data
// If The Element Is Found, It Will Remove The Node Containing That Data
void remove(const T& data) {

   std::cout << "[SYSTEM] Attempting To Remove Data: " << data << std::endl;

  // Traverse To The Node Containing The Specific Data
  Node<T>* current = this->head;
  while (current != nullptr) {

      // === Check If Current Node Contains The Data ===
      // If The Current Node Contains The Data, It Will Remove The Node
      // It Will Also Print A Message Indicating That The Data Was Found And Taken Out 
      if (current->data == data) {
          std::cout << "[SYSTEM] Found Data: " << data << std::endl;

          // If node is head
          if (current == this->head) {
              pop_front();
              std::cout << "[SYSTEM] Element Removal: Successful" << std::endl;
              return;
          }
          // If node is tail
          if (current == this->tail) {
              pop_back();
  
              std::cout << "[SYSTEM] Element Removal: Successful" << std::endl;
              return;
          }
          // Node is in the middle
          if (current->prev) current->prev->next = current->next;
          if (current->next) current->next->prev = current->prev;
          delete current;
          this->size -= 1;
          std::cout << "[SYSTEM] Element Removal: Successful" << std::endl;
          return;
      }

      current = current->next; // Move To The Next Node
  }

  std::cout << "[ERROR] Data No Longer Found: " << data << std::endl;
}

// === Remove An Element With Specific Data At A Specific Position From The List ===
// It Will Traverse The List Until It Reaches The Specific Position, Said By The User
// If The Position Is Valid, It Will Remove The Node Containing That Data At That Position
// If The Element Is Not Found, It Will Print A Message Indicating That The Element Was Not Found
void remove(const T& data, const T& inputData, int pos) {

  std::cout << "[SYSTEM] Removing Element With Data: " << data << ", At Position: " << pos << std::endl;

  // === Guard Clause To Check If The Position Is Valid ===
  // If The Position Is Invalid, It Will Print An Error Message
  // This Will Indicate That The Position Is Out Of Bounds
  if (pos < 0 || pos > this->size) {
      std::cout << "[ERROR] Invalid Position. Deletion Failure" << std::endl;
      return; // Return If The Position Is Invalid
  }

  // === Traverse To The Node At The Specified Position (0-based index) ===
  // This Will Traverse The List Until It Reaches The Node At The Specified Position
  // It Will Print A Message Indicating The Element Being Taken Out 
  Node<T>* current = this->head;
  int currentIndex = 0;

  // === While Loop To Traverse The List ===
  // This Loop Will Continue Until The Node Pointer Reaches The End Of The List (nullptr)
  // It Will Also Print The Data Of Each Node In The List
  while (current != nullptr && currentIndex < pos) {
      std::cout << "[SYSTEM] Current Node Data: " << current->data << std::endl;
      current = current->next;
      currentIndex++;
  }

  // === Guard Clause: Check If The Node To Remove Is Valid ===
  // If The Node To Remove Is Nullptr, It Will Print An Error Message
  // This Will Indicate That The Position Is Out Of Bounds
  // It Will Also Return If The Node To Remove Is Nullptr
  if (current == nullptr) {
      std::cout << "[ERROR] Position out of bounds." << std::endl;
      return;
  }

  // ===  Guard Clause: Check If The Node To Remove Is The Head ===
  // If Node To Remove Is Head, This Will Remove The Head Node
  // It Will Update The Head Pointer To Point To The Next Node
  if (current == this->head) {
      pop_front();
      std::cout << "[SYSTEM] Element Removal At Position: Successful" << std::endl;
      return;
  }
  // === Guard Clause: Check If The Node To Remove Is The Tail ===
  // If Node To Remove Is Tail, This Will Remove The Tail Node
  if (current == this->tail) {
      pop_back();
      std::cout << "[SYSTEM] Element Removal At Position: Successful" << std::endl;
      return;
  }

  // === Remove Node From The Middle ===
  // If The Node To Remove Is In The Middle, This Will Remove The Node
  // It Will Update The Previous And Next Pointers Of The Adjacent Nodes
  if (current->prev) current->prev->next = current->next;
  if (current->next) current->next->prev = current->prev;

  // === Delete The Current Node ===
  // This Will Delete The Current Node And Free Up Memory
  std::cout << "[SYSTEM] Removing Element At Position: " << pos << std::endl;
  delete current;
  this->size -= 1;

  std::cout << "[SYSTEM] Element Removal With Position: Successful" << std::endl;
  return;
}

// === Clear The List By Removing All Elements ===
// It Will Traverse The List And Delete Each Node
// After Deleting All Nodes, It Will Set The Head And Tail Pointers To Null
// It Will Also Reset The Size To 0
void clear() {

  std::cout << "[SYSTEM] Clearing The List" << std::endl;

  Node<T>* current = this->head; // Create Pointer That Starts At The Head Of The List

  // === While Loop To Traverse The List ===
  // This Loop Will Continue Until The Node Pointer Reaches The End Of The List (nullptr)
  // It Will Delete Each Node In The List
  while (current != nullptr) {
      Node<T>* next = current->next;

      std::cout << "[SYSTEM] Deleting Node With Data: " << current->data << std::endl;

      // === Delete The Current Node ===
      // This Will Delete The Current Node And Free Up Memory
      delete current;
      current = next;
  }

  this->head = nullptr;
  this->tail = nullptr;
  this->size = 0;

  std::cout << "[SYSTEM] Clearing List: Successful" << std::endl;
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
