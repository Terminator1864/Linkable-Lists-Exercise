
// === Include Necessary Libraries ===
// This Code Includes The iostream Library For Input/Output Operations
// It Also Includes The string Library For String Manipulation
#include <iostream>
#include <string>

// === Include Necessary Header Files ===
// This Code Includes The Header File For The Node Class To Use Its Functionality
#include "Node.h" // Include The Node Class Header File To Use The Node Class In This Program
#include "LinkableLists.h" // Include The LinkableLists Class Header File To Use The LinkableLists Class In This Program

// === Main Function To Test The LinkableLists Class ===
// This Function Will Create An Instance Of The LinkableLists Class, And Be Able To 
// Initialize It With An Array, And Perform Various Operations Like Traversal And Reversal
// It Will Also Demonstrate The Functionality Of The Push, Pop, And Peek Methods
int main() {
  
  // === Create An Array And Initialize The LinkableLists Class ===
  // This Array Contains The Initial Elements To Populate The Linkable List
  int listArray[] = {0, 1, 2, 3, 4}; // Initialize An Array With 5 Elements
  // Note: The Array Contains 5 Elements, Which Will Be In Use To Initialize The Linkable List
  int countElementsArray = 0; // Count Of Elements In The Array
  // Note: The Count Of Elements In The Array Is Set To 0 Initially, But It Will Receive Updates Later
  countElementsArray = 5; // Update The Count Of Elements In The Array To 5, As There Are 5 Elements In The Array

  // === Create An Instance Of The LinkableLists Class ===
  // This Instance Will Be Initialized With The Array And The Count Of Elements In The Array
  LinkableLists myList(listArray, countElementsArray);

  myList.traversal(); // Call The Traversal Function To Display The List In Forward Order

  myList.reversal(); // Call The Reversal Function To Display The List In Reverse Order

  myList.push_back(15); // Add A New Element (15) To The End Of The List
  myList.traversal(); // Call The Traversal Function Again To Display The Latest Instance Of The List

  myList.push_front(50); // Add A New Element (50) To The Front Of The List
  myList.traversal(); // Call The Traversal Function Again To Display The Latest Instance Of The List

  myList.pop(); // Remove The Last Element From The List
  myList.traversal(); // Call The Traversal Function Again To Display The Latest Instance Of The List

  myList.peek(); // Peek At The Last Element In The List Without Removing It
  myList.traversal(); // Call The Traversal Function Again To Display The Latest Instance Of The List

  return 0; // Return 0 To Indicate Successful Execution Of The Program
}