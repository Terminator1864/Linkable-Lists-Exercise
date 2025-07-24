
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

  // === Check If The Input Array Is Valid ===
  // This Check Ensures That The Input Array Is Not NULL And The Count Of Elements Is Greater Than Zero
  // If The Input Array Is Invalid, It Will Print An Error Message And Initialize The Head And Tail Pointers To NULL
  // This Prevents The Program From Crashing Due To Invalid Input, Allowing For Graceful Handling Of Errors
  if (listArray == nullptr || countElementsArray <= 0) {
    std::cout << "[ERROR] Invalid Input Array Or Zero Count" << std::endl;
    head = nullptr;
    tail = nullptr;
    return;
  }

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

  // === Check If The List Is Empty ===
  // This Check Ensures That The List Is Not Empty Before Attempting To Traverse It 
  // If The List Is Empty, It Will Print An Error Message And Return Without Performing Any Traversal
  // This Prevents The Program From Crashing Due To Attempting To Access NULL Pointers
  if (head == nullptr) {
    std::cout << "[ERROR] List Is Empty – Nothing To Traverse" << std::endl;
    return;
  }

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

  // === Check If The List Is Empty ===
  // This Check Ensures That The List Is Not Empty Before Attempting To Reverse It
  // If The List Is Empty, It Will Print An Error Message And Return Without Performing Any Reversal
  // This Prevents The Program From Crashing Due To Attempting To Access NULL Pointers
  if (tail == nullptr) {
    std::cout << "[ERROR] List Is Empty – Nothing To Reverse" << std::endl;
    return;
  }

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

  // === Check If The Tail Pointer Is NULL ===
  // This Check Ensures That The Tail Pointer Is Not NULL Before Attempting To Add A New Element
  // If The Tail Pointer Is NULL, It Indicates That The List Is Empty
  if (tail == nullptr) {
    std::cout << "[RECOVERY] Tail Was Null: Reinitializing List With First Node" << std::endl;
    tail = new Node();
    tail->data = newData;
    tail->previous = nullptr;
    tail->next = nullptr;
    head = tail;
    return newData;
  }

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

  // === Check If The Head Pointer Is NULL ===
  // This Check Ensures That The Head Pointer Is Not NULL Before Attempting To Add A New Element
  // If The Head Pointer Is NULL, It Indicates That The List Is Empty, So We Initialize It
  if (head == nullptr) {
    std::cout << "[RECOVERY] Head Was Null – Reinitializing List With First Node" << std::endl;
    head = new Node();
    head->data = newData;
    head->next = nullptr;
    head->previous = nullptr;
    tail = head;
    return newData;
  }

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

  // === Check If The Tail Pointer Is NULL ===
  // This Check Ensures That The Tail Pointer Is Not NULL Before Attempting To Remove The Last Element
  // If The Tail Pointer Is NULL, It Indicates That The List Is Empty
  if (tail == nullptr) {
    std::cout << "[ERROR] List Is Empty – Cannot Pop" << std::endl;
    return -1;
  }

  // === Check If The Tail Pointer Is The Only Node In The List ===
  // This Check Ensures That The Tail Pointer Is Not The Only Node In The List Before Attempting To Remove It
  // If The Tail Pointer Is The Only Node, It Will Print A Warning Message And Set The Head And Tail Pointers To NULL
  // This Prevents The Program From Crashing Due To Attempting To Access NULL Pointers
  if (tail->previous == nullptr) {
    std::cout << "[WARNING] Only One Node – List Will Now Become Empty" << std::endl;
    int tmp = tail->data;
    delete tail;
    tail = nullptr;
    head = nullptr;
    return tmp;
  }

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

  // === Check If The Tail Pointer Is NULL ===
  // This Check Ensures That The Tail Pointer Is Not NULL Before Attempting To Peek At The Last Element
  // If The Tail Pointer Is NULL, It Indicates That The List Is Empty
  if (tail == nullptr) {
    std::cout << "[ERROR] List Is Empty – Nothing To Peek" << std::endl;
    return -1;
  }

  std::cout << "[PEEK] Current Node's Status: " << tail -> data << std::endl; // Print The Data Of The Current Node
  return tail -> data; // Return The Data Of The Last Node In The List
}
