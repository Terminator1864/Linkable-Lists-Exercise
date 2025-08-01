
#include "ListMenu.hpp"
#include "Node.h" // Include The Node Class Header File To Use The Node Class In This Program
#include "LinkableLists.h"

template<typename T1, typename T2, typename T3> // Declare The Template Function
// This Function Will Run The Menu Wizard, Allowing The User To Interact With The Linkable Lists
void runMenuWizard(LinkableLists<T1>&  ints, LinkableLists<T2>&  chars, LinkableLists<T3>&  doubles) {

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

       // Choose The Appropriate LinkableLists Instance Via Users Choice
        LinkableLists<int>& myList1 = ints;

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
}

// === Explicit Template Instantiation ===
// This Will Instantiate The Template Function For Specific Types
// This Is Very Useful For Ensuring That The Function Is Available For These Types
// Allowing Function To Be In Use With These Types Without Instantiating Each Time
template void runMenuWizard<int,char,double>(LinkableLists<int>&, LinkableLists<char>&, LinkableLists<double>&);
