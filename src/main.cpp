
// === Include Necessary Libraries ===
// This Code Includes The iostream Library For Input/Output Operations
// It Also Includes The string Library For String Manipulation
#include <iostream>
#include <string>
#include <limits> 

// === Include Necessary Header Files ===
// This Code Includes The Header File For The Node Class To Use Its Functionality
#include "Node.h" // Include The Node Class Header File To Use The Node Class In This Program
#include "LinkableLists.h"

// === Main Function To Test The LinkableLists Class ===
// This Function Will Create An Instance Of The LinkableLists Class, And Be Able To 
// Initialize It With An Array, And Perform Various Operations Like Traversal And Reversal
// It Will Also Demonstrate The Functionality Of The Push, Pop, And Peek Methods
int main() {

  try {
  
    // === Create An Array And Initialize The LinkableLists Class ===
    // This Array Contains The Initial Elements To Populate The Linkable List
    int listArray1[] = {0, 1, 2, 3, 4}; // Initialize An Array With 5 Elements
    // Note: The Array Contains 5 Elements, Which Will Be In Use To Initialize The Linkable List
    int countElementsArray1 = 0; // Count Of Elements In The Array
    // Note: The Count Of Elements In The Array Is Set To 0 Initially, But It Will Receive Updates Later
    countElementsArray1 = 5; // Update The Count Of Elements In The Array To 5, As There Are 5 Elements In The Array

    // === Create An Array And Initialize The LinkableLists Class ===
    // This Array Contains The Initial Elements To Populate The Linkable List
    char listArray2[] = {'A', 'B', 'C', 'D', 'E'}; // Initialize An Array With 5 Elements
    // Note: The Array Contains 5 Elements, Which Will Be In Use To Initialize The Linkable List
    int countElementsArray2 = 0; // Count Of Elements In The Array
    // Note: The Count Of Elements In The Array Is Set To 0 Initially, But It Will Receive Updates Later
    countElementsArray2 = 5; // Update The Count Of Elements In The Array To 5, As There Are 5 Elements In The Array

    std::cout << "========================================================================" << std::endl; 
    std::cout << "JRI (Johnston's Robotics Industries) Experimental Linkable-List Program)" << std::endl; 
    std::cout << "Experimentally Testing: Futuristic Next Generation C++ Code/Logic" << std::endl; 
    std::cout << "========================================================================" << std::endl; 

    std::cout << "[SYSTEM] Initializing Linkable-List(s) Control Interface..." << std::endl;
    std::cout << "[SYSTEM] Initializing Control Interface's Input Wizard..." << std::endl;
    std::cout << "[ACTION] Please Stand By: WAIT - LOADING User Interface..." << std::endl;

    // === Create An Instance Of The LinkableLists Class ===
    // This Instance Will Be Initialized With The Array And The Count Of Elements In The Array
    LinkableLists<int> myList1 = LinkableLists<int>();

    // === Create An Instance Of The LinkableLists Class ===
    // This Instance Will Be Initialized With The Array And The Count Of Elements In The Array
    LinkableLists<char> myList2 = LinkableLists<char>();

    bool quit = false; // This Variable Controls The Main Loop Of The Application, Allowing The User To Exit The Program Gracefully.
      // This Loop Continues Until The User Chooses To Quit By Entering '0'.

    // === While Loop: Keeping The Program Running Until User Chooses To Quit ===
    // This Loop Will Continue Until The User Chooses To Exit The Program By Entering 'Q' Or 'q'
    // It Will Display The Menu Options And Wait For User Input To Perform Actions
    while(!quit) {

      std::cout << "================== JRI Linkable List Program ==================" << std::endl; 
      std::cout << "===============================================================" << std::endl; 
      std::cout << "[SYSTEM] Please Select From Any Of The Following Options Below" << std::endl; 
      std::cout << "[INFO] Option 1 - Search: Meaning To Look For Element In List" << std::endl; 
      std::cout << "[INFO] Option 2 - Traversal: Move Forward Through The List" << std::endl; 
      std::cout << "[INFO] Option 3 - Reversal: Move In Reverse Through The List" << std::endl; 
      std::cout << "[INFO] Option 4 - Push_Front: Add New Element In Front Of List" << std::endl; 
      std::cout << "[INFO] Option 5 - Push_Back: Add New Element In Back Of List" << std::endl; 
      std::cout << "[INFO] Option 6 - Pop_Front: Remove The First Element From The List" << std::endl; 
      std::cout << "[INFO] Option 7 - Pop_Back: Remove The Last Element From The List" << std::endl; 
      std::cout << "[INFO] Option 8 - Insert: Insert New Element At Specific Position" << std::endl; 
      std::cout << "[INFO] Option 9 - Get: Look At Current Element In The List" << std::endl; 
      std::cout << "[INFO] Option 10 - Removal: Eliminate Only That Element In List" << std::endl; 
      std::cout << "[INFO] Option 11 - Clear List: Eliminate All Elements In List" << std::endl; 
      std::cout << "===============================================================" << std::endl; 

      
      int userInput = 0; // Variable To Store User Input For Program Continuation
      std::cin >> userInput; // Wait For User Input To Proceed With The Program

      // === Guard Clause To Check If User Input Is Valid ===
      // If The User Input Is Not A Valid Number, It Will Print An Error Message
      // If The User Input Is Less Than Or Equal To 0 Or Greater Than 10
      if (userInput <= 0 || userInput > 10) {                            
        
        std::cout << "[ATTENTION] Invalid Input: Try Again" << std::endl;
        std::cout << "[ERROR] Please Enter A Number...." << std::endl;
        std::cout << "[ACTION] User: INPUT Number Between (1-10)" << std::endl;
        continue; // Continue To The Next Iteration Of The Loop If The Input Is Invalid
      }
    
      // === Switch Case To Handle User Input ===
      // This Switch Case Will Execute Different Actions Based On The User's Choice
      // It Will Call The Appropriate Function From The LinkableLists Class Based On The User's Input
      // Each Case Corresponds To A Different Option In The Menu Displayed Above
      switch(userInput) {

        case 1: { // Search

          std::cout << "[SYSTEM] User Made Selection For Search...." << std::endl;
          myList1.search(); // Call The Search Function To Search For An Element In The List
          break; // End Of Case 1: Search
        }

        case 2: { // Traversal
          std::cout << "[SYSTEM] User Made Selection For Traversal...." << std::endl;
          myList1.traversal(); // Call The Traversal Function To Display The List In Forward Order
          break; // End Of Case 2: Traversal
        }

        case 3: { // Traversal
          std::cout << "[SYSTEM] User Made Selection For Reversal...." << std::endl;
          myList1.reversal(); // Call The Reversal Function To Display The List In Reverse Order
          break; // End Of Case 3: Traversal
        }

        case 4: { // Reversal
          std::cout << "[SYSTEM] User Made Selection For Push_Front...." << std::endl;
          myList1.push_front(50); // Add A New Element (50) To The Front Of The List
          break; // End Of Case 4: Reversal
        }

        case 5: { // Push_Front
          std::cout << "[SYSTEM] User Made Selection For Push_Back...." << std::endl;
          myList1.push_back(15); // Add A New Element (15) To The End Of The List
          break; // End Of Case 5: Push_Front
        }

        case 6: { // Push_Back
          std::cout << "[SYSTEM] User Made Selection For Pop_Front...." << std::endl;
          myList1.pop_front(); // Remove The First Element From The List
          break; // End Of Case 6: Push_Back
        }

        case 7: { // Pop_Front
          std::cout << "[SYSTEM] User Made Selection For Pop_Back...." << std::endl;
          myList1.pop_back(); // Remove The Last Element From The List
          break; // End Of Case 7: Pop_Front

        }

        case 8: { // Pop_Back        
          std::cout << "[SYSTEM] User Made Selection For Insert...." << std::endl;
          myList1.insert(1, 25); // Insert A New Element (25) At Position 1
          break;
        }

        case 9: {
          std::cout << "[SYSTEM] User Made Selection For Get...." << std::endl;
          myList1.get(2); // Get The Element At Position 2
          break;
        }

        case 10: {

          std::cout << "[SYSTEM] User Made Selection For Remove...." << std::endl;

          myList1.remove(1, 1); // Remove A Element (1) At Position 1
          break;
        }

        case 11: {

          std::cout << "[SYSTEM] User Made Selection For Clear...." << std::endl;

          myList1.clear(); // Clear The List By Removing All Elements
          break;
        }

        default: {

          std::cout << "[SYSTEM] Waiting For User Inputs: From (1-10)" << std::endl;
          std::cout << "[ACTION] User: Please Make An Input To Console" << std::endl;
        }
      } // End Of Switch Case 
    } // End Of While Loop

    return 0; // Return 0 To Indicate Successful Execution Of The Program
    } catch(...) { // Catch Any Unknown Exceptions
    // This Will Catch Any Unhandleble Exceptions That May Occur
    std::cout << "==========================================================" << std::endl; 
    std::cout << "[FATAL] Unknown Fatal Unrecoverable Exception: Did Occur" << std::endl;
    std::cout << "[FATAL] System Was Caught In An Invalid/Unknown State" << std::endl;
    std::cout << "[IMMEDIATE ATTENTION] Needing Manual Debugging/Maintenance " << std::endl; 
    std::cout << "[ATTENTION] System Is In Unusable State: Cannot Function" << std::endl; 
    std::cout << "[ATTENTION] Please Refer To Documentation: Troubleshooting" << std::endl; 
    std::cout << "==========================================================" << std::endl; 
  }
}