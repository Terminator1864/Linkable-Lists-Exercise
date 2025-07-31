
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
    int listArray1[] = {4, 8, 12, 16, 20}; // Initialize An Array With 5 Elements8
    // Note: The Array Contains 5 Elements, Which Will Be In Use To Initialize The Linkable List
    // Note: The Count Of Elements In The Array Is Set To 0 Initially, But It Will Receive Updates Later
    int countElementsArray1 = 5; // Update The Count Of Elements In The Array To 5, As There Are 5 Elements In The Array

    // === Create An Array And Initialize The LinkableLists Class ===
    // This Array Contains The Initial Elements To Populate The Linkable List
    char listArray2[] = {'A', 'B', 'C', 'D', 'E'}; // Initialize An Array With 5 Elements
    // Note: The Array Contains 5 Elements, Which Will Be In Use To Initialize The Linkable List
    // Note: The Count Of Elements In The Array Is Set To 0 Initially, But It Will Receive Updates Later
    int countElementsArray2 = 5; // Update The Count Of Elements In The Array To 5, As There Are 5 Elements In The Array

    std::cout << "========================================================================" << std::endl; 
    std::cout << "JRI (Johnston's Robotics Industries) Experimental Linkable-List Program)" << std::endl; 
    std::cout << "Experimentally Testing: Futuristic Next Generation C++ Code/Logic" << std::endl; 
    std::cout << "========================================================================" << std::endl; 

    std::cout << "[SYSTEM] Initializing Linkable-List(s) Control Interface..." << std::endl;
    std::cout << "[SYSTEM] Initializing Control Interface's Input Wizard..." << std::endl;
    std::cout << "[ACTION] Please Stand By: WAIT - LOADING User Interface..." << std::endl;

    // === Create An Instance Of The LinkableLists Class ===
    // This Instance Will Have A Linkable List, With The Array And The Count Of Elements In The Array
    // We Are Using The LinkableLists Class To Create A Linkable List, Passing The Array And The Count Of Elements
    // This Will Initialize The Linkable List With The Elements From The Array
    LinkableLists<int> myList1(listArray1, countElementsArray1); 
    // Passing The Array And The Count Of Elements To Initialize The Linkable List

    // === Create An Instance Of The LinkableLists Class ===
    // This Instance Will Have A Linkable List, With The Array And The Count Of Elements In The Array
    // We Are Using The LinkableLists Class To Create A Linkable List, Passing The Array And The Count Of Elements
    // This Will Initialize The Linkable List With The Elements From The Array
    LinkableLists<char> myList2(listArray2, countElementsArray2);

    bool quit = false; // This Variable Controls The Main Loop Of The Application, Allowing The User To Exit The Program Gracefully.
      // This Loop Continues Until The User Chooses To Quit By Entering '0'.

    // === While Loop: Keeping The Program Running Until User Chooses To Quit ===
    // This Loop Will Continue Until The User Chooses To Exit The Program By Entering 'Q' Or 'q'
    // It Will Display The Menu Options And Wait For User Input To Perform Actions
    while(!quit) {

      std::cout << "================== JRI Linkable List Program ==================" << std::endl; 
      std::cout << "===============================================================" << std::endl; 
      std::cout << "[SYSTEM] Please Select From Any Of The Following Options Below" << std::endl;
      std::cout << "[INFO] Option 0 - Quit Program: Terminate All Operations" << std::endl;  
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

      int userChoice; // Variable To Store User Input For The Selected Option
      while (true) // Loop Until Valid Input Is Received
      {
          std::cout << "[SYSTEM] Waiting For User Inputs: From (1-11)" << std::endl;
          std::cout << "[ACTION] User: Please Make An Input To Console" << std::endl;
          
          if (std::cin >> userChoice && userChoice >= 0 && userChoice <= 11) 
          break; // Check If The Input Is Valid (An Integer Between 0 And 11)
          // If The Input Is Valid, Break Out Of The Loop      

          std::cin.clear(); // Clear The Error State Of cin
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
          std::cout << "[ERROR] Invalid Selection: Try Again." << std::endl;
          std::cout << "[ACTION] INPUT A Number Between (0-11)" << std::endl;
      }

      if (userChoice == 1) { // Search
        int inputData; // Search Function Should Receive User Input To Search Linkable List myList1  
        std::cout << "[SYSTEM] User Made Selection For Search...." << std::endl;
        std::cin >> inputData; 
        myList1.search(inputData); // Call The Search Function To Search For An Element In The List
        continue; // End Of Case 1: Search
      }

      if (userChoice == 2) { // Traversal
        std::cout << "[SYSTEM] User Made Selection For Traversal...." << std::endl;
        myList1.traversal(); // Call The Traversal Function To Display The List In Forward Order
        continue; // End Of Case 2: Traversal
      }

      if (userChoice == 3) { // Reversal
        std::cout << "[SYSTEM] User Made Selection For Reversal...." << std::endl;
        myList1.reversal(); // Call The Reversal Function To Display The List In Reverse Order
        continue; // End Of Case 3: Reversal
      }

      if (userChoice == 4) { // Push_Front
        std::cout << "[SYSTEM] User Made Selection For Push_Front...." << std::endl;
        myList1.push_front(50); // Add A New Element (50) To The Front Of The List
        continue; // End Of Case 4: Push_Front
      }

      if (userChoice == 5) { // Push_Back
        std::cout << "[SYSTEM] User Made Selection For Push_Back...." << std::endl;
        myList1.push_back(15); // Add A New Element (15) To The End Of The List
        continue; // End Of Case 5: Push_Back
      }

      if (userChoice == 6) { // Pop_Front
        std::cout << "[SYSTEM] User Made Selection For Pop_Front...." << std::endl;
        myList1.pop_front(); // Remove The First Element From The List
        continue; // End Of Case 6: Pop_Front
      }

      if (userChoice == 7) { // Pop_Back
        std::cout << "[SYSTEM] User Made Selection For Pop_Back...." << std::endl;
        myList1.pop_back(); // Remove The Last Element From The List
        continue; // End Of Case 7: Pop_Back

      }

      if (userChoice == 8) { // Insert
        int inputData; // Insert Function Should Receive User Input To Insert Into Linkable List myList1
        int pos; // Variable To Store User Input For Position To Insert At

        std::cout << "[SYSTEM] User Made Selection For Insert...." << std::endl;
        std::cout << "[ACTION] Enter The Position To Insert At: ";
        std::cin >> pos; // Get User Input For The Position To Insert At

        std::cout << "[ACTION] Enter The Value To Insert: ";
        std::cin >> inputData; // Get User Input For The Value To Insert

        // Call The Insert Function To Insert A New Element At The Specific Position
        myList1.insert(inputData, pos); // Insert The User Input At Position 'pos'
        continue;
      }

      if (userChoice == 9) { // Get
        int inputData; // Get Function Should Receive User Input To Get Data From Linkable List myList1
        int pos; // Variable To Store User Input For Position To Get At

        std::cout << "[SYSTEM] User Made Selection For Get...." << std::endl;

        std::cout << "[ACTION] Enter The Position To Get: ";
        std::cin >> pos; // Get User Input For The Position To Get

        myList1.get(pos); // Get The Element At Position 'pos'
        continue;
      }

      if (userChoice == 10) { // Removal

        std::cout << "[SYSTEM] User Made Selection For Remove...." << std::endl;

        int inputData; // Remove Function Should Receive User Input To Remove From Linkable List myList1
        int pos; // Variable To Store User Input For Position To Remove At

        std::cout << "[ACTION] Enter The Position To Remove At: ";
        std::cin >> pos; // Get User Input For The Position To Remove At

        std::cout << "[ACTION] Enter The Value To Remove: ";
        std::cin >> inputData; // Get User Input For The Value To Remove

        myList1.remove(1, inputData, pos); // Remove The Element With The Given Data From The List
        // Note: This Will Remove The First Occurrence Of The Element With The Given Data

        continue;
      }

      if (userChoice == 11) { // Clear List

        std::cout << "[SYSTEM] User Made Selection For Clear...." << std::endl;
        myList1.clear(); // Clear The List By Removing All Elements
        continue; 
      }

      else if (userChoice == 0) { // Quit

        std::cout << "[SYSTEM] User Made Selection For Quit...." << std::endl;
        break; // Exit The Loop If The User Chooses To Quit
      }
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