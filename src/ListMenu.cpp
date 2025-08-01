

// === Include Necessary Headers ===
// This Includes Necessary Headers For The ListMenu Class, Which Manages Multiple Menus
#include "ListMenu.hpp" 
#include "Node.h" 
#include "LinkableLists.h" 

// === Namespace Declaration For JRI (Johnston's Robotics Industries) ===
// This Namespace Contains Functions That Is A Part Of The JRI Linkable List Program
namespace JRI_MenuSelection { // Namespace Is For Organizing Code And Avoiding Name Conflicts 

template<typename T1, typename T2, typename T3> // Declare The Template Function
    // This Function Will Run The Menu Wizard, Allowing The User To Interact With The Linkable Lists
    void runMenuWizardInts(LinkableLists<T1>&  ints, LinkableLists<T2>&  chars, LinkableLists<T3>&  doubles) {

        bool quit = false; // This Variable Controls The Main Loop Of The Application, Allowing The User To Exit The Program Gracefully.
        // This Loop Continues Until The User Chooses To Quit By Entering '0'.

        // === While Loop: Keeping The Program Running Until User Chooses To Quit ===
        // This Loop Will Continue Until The User Chooses To Exit The Program By Entering 'Q' Or 'q'
        // It Will Display The Menu Options And Wait For User Input To Perform Actions
        while(!quit) {

            std::cout << "================== JRI Linkable List Program ==================" << std::endl; 
            std::cout << "================== Runtime Menu Wizard: Ints ==================" << std::endl;
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
            std::cout << "[INFO] Option 12 - Bubble Sort (Ascending): Sort Elements In List" << std::endl; 
            std::cout << "[INFO] Option 13 - Bubble Sort (Descending): Sort Elements In List" << std::endl; 
            std::cout << "===============================================================" << std::endl; 

            int userChoice; // Variable To Store User Input For The Selected Option
            while (true) // Loop Until Valid Input Is Received
            {
                std::cout << "[SYSTEM] Waiting For User Inputs: From (1-13)" << std::endl;
                std::cout << "[ACTION] User: Please Make An Input To Console" << std::endl;

                if (std::cin >> userChoice && userChoice >= 0 && userChoice <= 13) 
                break; // Check If The Input Is Valid (An Integer Between 0 And 13)
                // If The Input Is Valid, Break Out Of The Loop      

                std::cin.clear(); // Clear The Error State Of cin
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "[ERROR] Invalid Selection: Try Again." << std::endl;
                std::cout << "[ACTION] INPUT A Number Between (0-13)" << std::endl;
            }

            LinkableLists<int>& myList1 = ints; // Choose The Appropriate LinkableLists Instance Via Users Choice

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

            if (userChoice == 12) { // Sort List In Ascending Order

                std::cout << "[SYSTEM] User Made Selection For Sort List: Ascending Order" << std::endl;
                myList1.sortList(true); // Sort The List In Ascending Order
                continue; 
            }

            if (userChoice == 13) { // Sort List In Descending Order

                std::cout << "[SYSTEM] User Made Selection For Sort List: Descending Order" << std::endl;
                myList1.sortList(false); // Sort The List In Descending Order
                continue; 
            }

            else if (userChoice == 0) { // Returning To Main Menu

                std::cout << "[SYSTEM] Leaving LinkableList Ints Wizard...." << std::endl;
                std::cout << "[SYSTEM] Selection Made: Returning To Starter Menu...." << std::endl;
                break; // Exit The Loop If The User Chooses To Quit
            }
        } // End Of While Loop
    }

    template<typename T1, typename T2, typename T3> // Declare The Template Function
    // This Function Will Run The Menu Wizard, Allowing The User To Interact With The Linkable Lists
    void runMenuWizardDoubles(LinkableLists<T1>& ints, LinkableLists<T2>& chars, LinkableLists<T3>& doubles) {

        bool quit = false;
        while(!quit) {
            std::cout << "================== JRI Linkable List Program ==================" << std::endl; 
            std::cout << "================== Runtime Menu Wizard: Doubles ================" << std::endl;
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
            std::cout << "[INFO] Option 12 - Bubble Sort (Ascending): Sort Elements In List" << std::endl; 
            std::cout << "[INFO] Option 13 - Bubble Sort (Descending): Sort Elements In List" << std::endl;
            std::cout << "===============================================================" << std::endl; 

            int userChoice;
            while (true)
            {
                std::cout << "[SYSTEM] Waiting For User Inputs: From (1-13)" << std::endl;
                std::cout << "[ACTION] User: Please Make An Input To Console" << std::endl;

                if (std::cin >> userChoice && userChoice >= 0 && userChoice <= 13)
                break;

                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "[ERROR] Invalid Selection: Try Again." << std::endl;
                std::cout << "[ACTION] INPUT A Number Between (0-13)" << std::endl;
            }

            LinkableLists<double>& myList3 = doubles; // Choose The Appropriate LinkableLists Instance Via Users Choice

            if (userChoice == 1) { // Search
                double inputData;
                std::cout << "[SYSTEM] User Made Selection For Search...." << std::endl;
                std::cin >> inputData;
                myList3.search(inputData);
                continue;
            }

            if (userChoice == 2) { // Traversal
                std::cout << "[SYSTEM] User Made Selection For Traversal...." << std::endl;
                myList3.traversal();
                continue;
            }

            if (userChoice == 3) { // Reversal
                std::cout << "[SYSTEM] User Made Selection For Reversal...." << std::endl;
                myList3.reversal();
                continue;
            }

            if (userChoice == 4) { // Push_Front
                std::cout << "[SYSTEM] User Made Selection For Push_Front...." << std::endl;
                myList3.push_front(3.14);
                continue;
            }

            if (userChoice == 5) { // Push_Back
                std::cout << "[SYSTEM] User Made Selection For Push_Back...." << std::endl;
                myList3.push_back(2.71);
                continue;
            }

            if (userChoice == 6) { // Pop_Front
                std::cout << "[SYSTEM] User Made Selection For Pop_Front...." << std::endl;
                myList3.pop_front();
                continue;
            }

            if (userChoice == 7) { // Pop_Back
                std::cout << "[SYSTEM] User Made Selection For Pop_Back...." << std::endl;
                myList3.pop_back();
                continue;
            }

            if (userChoice == 8) { // Insert
                double inputData;
                int pos;
                std::cout << "[SYSTEM] User Made Selection For Insert...." << std::endl;
                std::cout << "[ACTION] Enter The Position To Insert At: ";
                std::cin >> pos;
                std::cout << "[ACTION] Enter The Value To Insert: ";
                std::cin >> inputData;
                myList3.insert(inputData, pos);
                continue;
            }

            if (userChoice == 9) { // Get
                int pos;
                std::cout << "[SYSTEM] User Made Selection For Get...." << std::endl;
                std::cout << "[ACTION] Enter The Position To Get: ";
                std::cin >> pos;
                myList3.get(pos);
                continue;
            }

            if (userChoice == 10) { // Removal
                double inputData;
                int pos;
                std::cout << "[SYSTEM] User Made Selection For Remove...." << std::endl;
                std::cout << "[ACTION] Enter The Position To Remove At: ";
                std::cin >> pos;
                std::cout << "[ACTION] Enter The Value To Remove: ";
                std::cin >> inputData;
                myList3.remove(1, inputData, pos);
                continue;
            }

            if (userChoice == 11) { // Clear List
                std::cout << "[SYSTEM] User Made Selection For Clear...." << std::endl;
                myList3.clear();
                continue;
            }

            if (userChoice == 12) { // Sort List In Ascending Order

                std::cout << "[SYSTEM] User Made Selection For Sort List: Ascending Order" << std::endl;
                myList3.sortList(true); // Sort The List In Ascending Order
                continue; 
            }

            if (userChoice == 13) { // Sort List In Descending Order

                std::cout << "[SYSTEM] User Made Selection For Sort List: Descending Order" << std::endl;
                myList3.sortList(false); // Sort The List In Descending Order
                continue; 
            }

            else if (userChoice == 0) { // Returning To Main Menu
                std::cout << "[SYSTEM] Leaving LinkableList Doubles Wizard...." << std::endl;
                std::cout << "[SYSTEM] Selection Made: Returning To Starter Menu...." << std::endl;
                break;
            }
        } // End Of While Loop
    } // End Of runMenuWizardDoubles Function

    template<typename T1, typename T2, typename T3> // Declare The Template Function
    // This Function Will Run The Menu Wizard, Allowing The User To Interact With The Linkable Lists
    void runMenuWizardChars(LinkableLists<T1>&  ints, LinkableLists<T2>&  chars, LinkableLists<T3>&  doubles) {

        bool quit = false; // This Variable Controls The Main Loop Of The Application, Allowing The User To Exit The Program Gracefully.
        // This Loop Continues Until The User Chooses To Quit By Entering '0'.

        // === While Loop: Keeping The Program Running Until User Chooses To Quit ===
        // This Loop Will Continue Until The User Chooses To Exit The Program By Entering 'Q' Or 'q'
        // It Will Display The Menu Options And Wait For User Input To Perform Actions
        while(!quit) {

            std::cout << "================== JRI Linkable List Program ==================" << std::endl; 
            std::cout << "================== Runtime Menu Wizard: Chars ==================" << std::endl;
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
            std::cout << "[INFO] Option 12 - Bubble Sort (Ascending): Sort Elements In List" << std::endl; 
            std::cout << "[INFO] Option 13 - Bubble Sort (Descending): Sort Elements In List" << std::endl;
            std::cout << "===============================================================" << std::endl; 

            int userChoice; // Variable To Store User Input For The Selected Option
            while (true) // Loop Until Valid Input Is Received
            {
                std::cout << "[SYSTEM] Waiting For User Inputs: From (1-13)" << std::endl;
                std::cout << "[ACTION] User: Please Make An Input To Console" << std::endl;

                if (std::cin >> userChoice && userChoice >= 0 && userChoice <= 13) 
                break; // Check If The Input Is Valid (An Integer Between 0 And 13)
                // If The Input Is Valid, Break Out Of The Loop      

                std::cin.clear(); // Clear The Error State Of cin
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "[ERROR] Invalid Selection: Try Again." << std::endl;
                std::cout << "[ACTION] INPUT A Number Between (0-13)" << std::endl;
            }

            LinkableLists<char>& myList2 = chars; // Choose The Appropriate LinkableLists Instance Via Users Choice

            if (userChoice == 1) { // Search
                char inputData; // Search Function Should Receive User Input To Search Linkable List myList2
                std::cout << "[SYSTEM] User Made Selection For Search...." << std::endl;
                std::cin >> inputData; 
                myList2.search(inputData); // Call The Search Function To Search For An Element In The List
                continue; // End Of Case 1: Search
            }

            if (userChoice == 2) { // Traversal
                std::cout << "[SYSTEM] User Made Selection For Traversal...." << std::endl;
                myList2.traversal(); // Call The Traversal Function To Display The List In Forward Order
                continue; // End Of Case 2: Traversal
            }

            if (userChoice == 3) { // Reversal
                std::cout << "[SYSTEM] User Made Selection For Reversal...." << std::endl;
                myList2.reversal(); // Call The Reversal Function To Display The List In Reverse Order
                continue; // End Of Case 3: Reversal
            }

            if (userChoice == 4) { // Push_Front
                std::cout << "[SYSTEM] User Made Selection For Push_Front...." << std::endl;
                myList2.push_front('Z'); // Add A New Element ('Z') To The Front Of The List
                continue; // End Of Case 4: Push_Front
            }

            if (userChoice == 5) { // Push_Back
                std::cout << "[SYSTEM] User Made Selection For Push_Back...." << std::endl;
                myList2.push_back('F'); // Add A New Element ('F') To The End Of The List
                continue; // End Of Case 5: Push_Back
            }

            if (userChoice == 6) { // Pop_Front
                std::cout << "[SYSTEM] User Made Selection For Pop_Front...." << std::endl;
                myList2.pop_front(); // Remove The First Element From The List
                continue; // End Of Case 6: Pop_Front
            }

            if (userChoice == 7) { // Pop_Back
                std::cout << "[SYSTEM] User Made Selection For Pop_Back...." << std::endl;
                myList2.pop_back(); // Remove The Last Element From The List
                continue; // End Of Case 7: Pop_Back

            }

            if (userChoice == 8) { // Insert
                char inputData; // Insert Function Should Receive User Input To Insert Into Linkable List myList1
                int pos; // Variable To Store User Input For Position To Insert At

                std::cout << "[SYSTEM] User Made Selection For Insert...." << std::endl;
                std::cout << "[ACTION] Enter The Position To Insert At: ";
                std::cin >> pos; // Get User Input For The Position To Insert At

                std::cout << "[ACTION] Enter The Value To Insert: ";
                std::cin >> inputData; // Get User Input For The Character To Insert

                // Call The Insert Function To Insert A New Element At The Specific Position
                myList2.insert(inputData, pos); // Insert The User Input At Position 'pos'
                continue;
            }

            if (userChoice == 9) { // Get
                char inputData; // Get Function Should Receive User Input To Get Data From Linkable List myList2
                int pos; // Variable To Store User Input For Position To Get At

                std::cout << "[SYSTEM] User Made Selection For Get...." << std::endl;

                std::cout << "[ACTION] Enter The Position To Get: ";
                std::cin >> pos; // Get User Input For The Position To Get

                myList2.get(pos); // Get The Element At Position 'pos'
                continue;
            }

            if (userChoice == 10) { // Removal

                std::cout << "[SYSTEM] User Made Selection For Remove...." << std::endl;

                char inputData; // Remove Function Should Receive User Input To Remove From Linkable List myList2
                int pos; // Variable To Store User Input For Position To Remove At

                std::cout << "[ACTION] Enter The Position To Remove At: ";
                std::cin >> pos; // Get User Input For The Position To Remove At

                std::cout << "[ACTION] Enter The Value To Remove: ";
                std::cin >> inputData; // Get User Input For The Character To Remove

                myList2.remove(1, inputData, pos); // Remove The Element With The Given Data From The List
                // Note: This Will Remove The First Occurrence Of The Element With The Given Data

                continue;
            }

            if (userChoice == 11) { // Clear List

                std::cout << "[SYSTEM] User Made Selection For Clear...." << std::endl;
                myList2.clear(); // Clear The List By Removing All Elements
                continue;
            }

            if (userChoice == 12) { // Sort List In Ascending Order

                std::cout << "[SYSTEM] User Made Selection For Sort List: Ascending Order" << std::endl;
                myList2.sortList(true); // Sort The List In Ascending Order
                continue; 
            }

            if (userChoice == 13) { // Sort List In Descending Order

                std::cout << "[SYSTEM] User Made Selection For Sort List: Descending Order" << std::endl;
                myList2.sortList(false); // Sort The List In Descending Order
                continue; 
            }

            else if (userChoice == 0) { // Returning To Main Menu

                std::cout << "[SYSTEM] Leaving LinkableList Chars Wizard...." << std::endl;
                std::cout << "[SYSTEM] Selection Made: Returning To Starter Menu...." << std::endl;
                break; // Exit The Loop If The User Chooses To Quit
            }
        } // End Of While Loop
    } // End Of runMenuWizardChars Function

template<typename T1, typename T2, typename T3>
void startMenu(LinkableLists<T1>& ints, LinkableLists<T2>& chars, LinkableLists<T3>& doubles) {

        bool quit=false;
        while(!quit) {

        std::cout << "=========================================================================" << std::endl; 
        std::cout << "=========== JRI (Johnston's Robotics Industries) STARTER MENU ===========" << std::endl; 
        std::cout << "=========================================================================" << std::endl; 
        std::cout << "================== [1]  Operate on INT list.............................." << std::endl; 
        std::cout << "================== [2]  Operate on CHAR list............................." << std::endl;
        std::cout << "================== [3]  Operate on DOUBLE list..........................." << std::endl;
        std::cout << "================== [0]  Quit program....................................." << std::endl;
        std::cout << "=========================================================================" << std::endl;
         
            int userChoice; // Variable To Store User Input For The Selected Option
            while (true) // Loop Until Valid Input Is Received
            {
                std::cout << "[SYSTEM] Awaiting User's Selection: Please Enter A Number From (0-3)......" << std::endl;
                std::cout << "[ACTION] User: Please Make An Input To Console" << std::endl;

                if (std::cin >> userChoice && userChoice >= 0 && userChoice <= 3) 
                break; // Check If The Input Is Valid (An Integer Between 0 And 3)
                // If The Input Is Valid, Break Out Of The Loop      

                std::cin.clear(); // Clear The Error State Of cin
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "[ERROR] Invalid Selection: Try Again." << std::endl;
                std::cout << "[ACTION] INPUT A Number Between (0-3)" << std::endl;
            }

            if (userChoice == 1) {
                std::cout << "[SYSTEM] User Made Selection For INT List...." << std::endl;
                runMenuWizardInts (ints,  chars, doubles);
                continue; // Exit The Function After Running The INT Menu
            }  
            
            if (userChoice == 2) {
                std::cout << "[SYSTEM] User Made Selection For CHAR List...." << std::endl;
                runMenuWizardChars(ints,  chars, doubles);
                continue; // Exit The Function After Running The CHAR Menu
            }  
            
            if (userChoice == 3) {
                std::cout << "[SYSTEM] User Made Selection For DOUBLE List...." << std::endl;
                runMenuWizardDoubles(ints, chars, doubles);
                continue; // Exit The Function After Running The DOUBLE Menu
            }  
            
            if (userChoice == 0) {
                std::cout << "[SYSTEM] User Made Selection For Quit...." << std::endl;
                std::cout << "[SYSTEM] Exiting Program: Terminating...." << std::endl;
                std::cout << "[SYSTEM] Shutting Down... Goodbye!" << std::endl;
                quit = true;
            } else {
                std::cout << "[ERROR] Invalid Selection: Try Again." << std::endl;
                std::cout << "[ACTION] INPUT A Number Between (0-3)" << std::endl;
                continue;; // Return To The Start Of The Function To Display The Menu Again
            }
        }
    }

    // === Explicit Template Instantiation ===
    // This Will Instantiate The Template Function For Specific Types
    // This Is Very Useful For Ensuring That The Function Is Available For These Types
    // Allowing Function To Be In Use With These Types Without Instantiating Each Time
    template void runMenuWizardInts<int,char,double>(LinkableLists<int>&, LinkableLists<char>&, LinkableLists<double>&);
    template void runMenuWizardChars<int,char,double>(LinkableLists<int>&, LinkableLists<char>&, LinkableLists<double>&);
    template void runMenuWizardDoubles<int,char,double>(LinkableLists<int>&, LinkableLists<char>&, LinkableLists<double>&);
    template void startMenu<int,char,double>(LinkableLists<int>&, LinkableLists<char>&, LinkableLists<double>&);

} // End Of Namespace JRI_MenuSelection
// This Namespace Contains The Menu Selection Logic For The Linkable Lists Program