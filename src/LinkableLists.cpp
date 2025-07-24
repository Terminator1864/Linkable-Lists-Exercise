
// === Including Necessary Libraries ===
// This Code Includes The iostream Library For Input/Output Operations
#include <iostream> // Include The Input/Output Stream Library For Console Output

// === Including Necessary Header Files ===
// This Code Includes The Header File For The LinkableLists Class To Use Its Functionality
#include "Node.h" // Include The Header File For The Node Class
#include "LinkableLists.h" // Include The Header File For The LinkableLists Class

// === Constructor To Initialize The Linkable List With An Array ===
// This Constructor Takes An Array And The Count Of Elements In The Array As Arguments
// It Initializes The Linkable List By Creating Nodes For Each Element In The Array
// It Sets The Head Node To Point To The First Element And The Tail Node To Point To The Last Element
// It Also Initializes The Previous And Next Pointers For Each Node To Maintain The Linkable Structure
LinkableLists::LinkableLists(int listArray[], int countElementsArray) {

  head = new Node(); // Create A New Node For The Head
  head -> data = listArray[0]; // Initialize The Data Of The Head Node
  head -> previous = NULL; // The Head Node Has No Previous Node
  head -> next = NULL; // The Head Node Initially Points To NULL
  tail = head; // Initialize The Tail Pointer To Point To The Head Node

  // === For Loop: Iterate Through The Array ===
  // This Loop Will Create New Nodes For Each Element In The Array
  // It Will Set The Data Of Each Node To The Corresponding Element In The Array, It Will Also Initialize 
  // The Previous And Next Pointers, Maintaining The Linkable Structure Of The List. 
  for (int i=1; i<countElementsArray; i++) { // Loop Through The Array Elements Starting From Index 1

    Node* newNode = new Node(); // Create A New Node For Each Element
    newNode -> data = listArray[i]; // Set The Data Of The New Node To The Corresponding Element In The Array
    newNode -> previous = tail; // Set The Previous Pointer Of The New Node To The Current Tail
    tail -> next = newNode; // Set The Next Pointer Of The Current Tail To The New Node
    newNode -> next = NULL; // The New Node Initially Points To NULL
    tail = tail -> next; // Update The Tail Pointer To Point To The New Node
  }
}

// === Traversal Function To Display The List In Forward Order ===
// This Function Will Display The List In Forward Order By Traversing From The Head To The Tail
// It Will Print The Data Of Each Node Until It Reaches The Tail Node.
// It Will Also Print A Message Indicating That The Forward Display Is In Progress

void LinkableLists::traversal() { // Traversal Function To Display The List In Forward Order

  Node *tmp = head; // Initialize A Temporary Pointer To The Head Node
  // Note: The Temporary Pointer Is In Use To Traverse The List Without Modifying The Head Pointer
  std::cout << "[LIST] Forwarding Display...." << std::endl;

  // === While Loop: Traverse The List ===
  // This Loop Will Traverse The List From The Head To The Tail, Printing The Data Of Each Node
  // It Will Continue Until It Reaches The Tail Node, Printing The Data Of Each Node
  while( tmp -> next != NULL ) { // Check If The Next Node Is Not NULL
    std::cout << tmp -> next -> data << std::endl; // Print The Data Of The Next Node
    // Note: The Data Of The Next Node Is Put Up On Display The List In Forward Order
    // The Temporary Pointer Is In Use To Traverse The List Without Modifying The Head Pointer
    tmp = tmp -> next; // Move The Temporary Pointer To The Next Node
  } 
}

// === Reversal Function To Display The List In Reverse Order ===
// This Function Will Display The List In Reverse Order By Traversing From The Tail To The Head
// It Will Print The Data Of Each Node In Reverse Order Until It Reaches The Head Node
// It Will Also Print A Message Indicating That The Reversal Display Is In Progress

void LinkableLists::reversal() {

  Node *tmp = tail; // Initialize A Temporary Pointer To The Tail Node
  // Note: The Temporary Pointer Is In Use To Traverse The List Without Modifying The Tail Pointer
  std::cout << "[LIST] Reversing Display.... " << std::endl; // Print A Message Indicating That The Reversal Display Is In Progress

  // === While Loop: Traverse The List In Reverse Order ===
  // This Loop Will Traverse The List From The Tail To The Head, Printing The Data Of Each Node
  // It Will Continue Until It Reaches The Head Node, Printing The Data Of Each Node
  while( tmp -> previous != NULL ) { // Check If The Previous Node Is Not NULL, This Ensures We Don't Go Past The Head Node
    std::cout << tmp -> data << std::endl; // Print The Data Of The Current Node
    // Note: The Data Of The Current Node Is Put Up On Display The List In Reverse Order
    // The Temporary Pointer Is In Use To Traverse The List Without Modifying The Tail Pointer
    tmp = tmp -> previous; // Move The Temporary Pointer To The Previous Node, Traversing In Reverse Order
  }
}

// === Add A New Element To The End Of The List And Return Its Value ===
// This Function Will Add A New Element To The End Of The List And Return Its Value
// It Will Also Update The Tail Pointer To Point To The New Last Element
// If The List Is Empty, It Will Initialize The Tail Pointer To Point To The New Element
int LinkableLists::push_back(int newData) {

  Node *q = new Node(); // Create A New Node For The New Element
  q -> data = newData; // Set The Data Of The New Node To The Latest Value
  q -> next = NULL; // The New Node Initially Points To NULL
  q -> previous = tail; // Set The Previous Pointer Of The New Node To The Current Tail
  tail -> next = q; // Set The Next Pointer Of The Current Tail To The New Node
  tail = q; // Update The Tail Pointer To Point To The New Last Element
  std::cout << "[PUSH BACK] Current Node's Data: " << q -> data << std::endl; // Print The Data Of The Current Node
  return newData; // Return The Data Of The New Node
}

// === Add A New Element To The Front Of The List And Return Its Value ===
// This Function Will Add A New Element To The Front Of The List And Return Its Value
// It Will Also Update The Head Pointer To Point To The New First Element
// If The List Is Empty, It Will Initialize The Head Pointer To Point To The New Element
int LinkableLists::push_front(int newData) {

  Node *p = new Node(); // Create A New Node For The New Element
  p -> data = newData; // Set The Data Of The New Node To The Latest Value
  p -> previous = NULL; // The New Node Initially Points To NULL
  p -> next = head; // Set The Next Pointer Of The New Node To The Current Head
  head -> data = newData; // Set The Data Of The Current Head Node To The New Data
  head -> previous = p; // Set The Previous Pointer Of The Current Head Node To The New Node
  // Note: The Head Node Gets An Update To Point To The New Node, Making It The First Element In The List
  // The New Node Is Now The First Element In The List, And The Head Pointer Receives An Update
  head = p; // Update The Head Pointer To Point To The New First Element
  // Note: The Head Pointer Receives An Update To Point To The New Node, Making It The First Element In The List
  std::cout << "[PUSH FRONT] Current Node's Data: " << p -> data << std::endl; // Print The Data Of The Current Node
  return newData; // Return The Data Of The New Node, Indicating That It Has Been Successful In Adding The New Element
}

// === Remove The Last Element From The List And Return Its Value ===
// This Function Will Remove The Last Element From The List And Return Its Value
// It Will Also Update The Tail Pointer To Point To The New Last Element
// If The List Is Empty, It Will Return -1 Or An Appropriate Error Value
int LinkableLists::pop() {

  Node *L = tail; // Create A Temporary Pointer To The Tail Node
  int tmp = tail -> data; // Store The Data Of The Tail Node To Return Later
  // Note: The Temporary Pointer Is In Use To Traverse The List Without Modifying The Tail Pointer
  tail -> previous -> next = NULL; // Update The Next Pointer Of The Previous Node To NULL
  tail = tail -> previous; // Move The Tail Pointer To The Previous Node
  std::cout << "[POP] Removing Current Node's Data: " << L -> data << std::endl; // Print The Data Of The Current Node
  // Note: The Data Of The Current Node Is Put Up On Display, Indicating That The Last Element Has Been Taken Down

  delete L; // Delete The Old Tail Node To Free Up Memory
  return tmp; // Return The Data Of The Nodes Destruction, Indicating Successful In Removing The Last Element
  // Note: The Tail Pointer Receives An Update To Point To The New Last Element In The List
  // The Previous Node Becomes The New Tail, And The Next Pointer Of The New Tail Is Set To NULL
}

// === Peek Function To Return The Last Element In The List Without Removing It ===
// This Function Will Return The Last Element In The List Without Removing It
// It Will Also Update The Tail Pointer To Point To The New Last Element
// If The List Is Empty, It Will Return -1 Or An Appropriate Error Value

int LinkableLists::peek() {

  std::cout << "[PEEK] Current Node's Status: " << tail -> data << std::endl; // Print The Data Of The Current Node
  return tail -> data; // Return The Data Of The Last Node In The List
}
