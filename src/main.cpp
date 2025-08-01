
// === Include Necessary Libraries ===
// This Code Includes The iostream Library For Input/Output Operations
// It Also Includes The string Library For String Manipulation
#include <iostream>
#include <string>
#include <limits> 

// === Include Necessary Header Files ===
// This Code Includes The Header File For The Node Class To Use Its Functionality
#include "ListMenu.hpp"
#include "Node.h" // Include The Node Class Header File To Use The Node Class In This Program
#include "LinkableLists.h"

// Declare the runMenuWizard function if not already declared elsewhere
template<typename T1, typename T2, typename T3>
void runMenuWizardInts(LinkableLists<T1>& ints, LinkableLists<T2>& chars, LinkableLists<T3>& doubles);

template<typename T1, typename T2, typename T3>
void runMenuWizardChars(LinkableLists<T1>& ints, LinkableLists<T2>& chars, LinkableLists<T3>& doubles);

template<typename T1, typename T2, typename T3>
void runMenuWizardDoubles(LinkableLists<T1>& ints, LinkableLists<T2>& chars, LinkableLists<T3>& doubles);

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

    // === Create An Array And Initialize The LinkableLists Class ===
    // This Array Contains The Initial Elements To Populate The Linkable List
    double listArray3[] = {5.6, 10.00, 5.56, 7.62, 12.7}; // Initialize An Array With 5 Elements
    // Note: The Array Contains 5 Elements, Which Will Be In Use To Initialize The Linkable List
    // Note: The Count Of Elements In The Array Is Set To 0 Initially, But It Will Receive Updates Later
    int countElementsArray3 = 5; // Update The Count Of Elements In The Array To 5, As There Are 5 Elements In The Array

    std::cout << "========================================================================" << std::endl; 
    std::cout << "JRI (Johnston's Robotics Industries) Experimental Linkable-List Program)" << std::endl; 
    std::cout << "Experimentally Testing: Futuristic Next Generation C++ Code/Logic" << std::endl; 
    std::cout << "========================================================================" << std::endl; 

    std::cout << "[SYSTEM] Initializing Linkable-List(s) Control Interface..." << std::endl;
    std::cout << "[SYSTEM] Initializing Control Interface's Input Wizard..." << std::endl;
    std::cout << "[ACTION] Please Stand By: WAIT - LOADING User Interface..." << std::endl;

    // === Creating Instance Of LinkableList For Data Type Int ===
    // This Will Create An Instance Of The LinkableLists Class For Integer Data Type
    // It Will Initialize The Linkable List With The Given Array And Count Of Elements
    LinkableLists<int> ints (listArray1, countElementsArray1);

    // === Creating Instance Of LinkableList For Data Type Char ===
    // This Will Create An Instance Of The LinkableLists Class For Character Data Type
    // It Will Initialize The Linkable List With The Given Array And Count Of Elements
    LinkableLists<char> chars(listArray2, countElementsArray2);

    // === Creating Instance Of LinkableList For Data Type Double ===
    // This Will Create An Instance Of The LinkableLists Class For Double Data Type
    // It Will Initialize The Linkable List With The Given Array And Count Of Elements
    LinkableLists<double> doubles(listArray3, countElementsArray3);

    JRI_MenuSelection::startMenu(ints, chars, doubles); // Start The Menu Interface For User Interaction

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
