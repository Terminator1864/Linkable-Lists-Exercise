// ============================================================================
//  One‑Time Load‑out Wizard (Once Time Call At Program Start)
//  This Function Initializes The Menu Selection Wizard: User Selects.
//  It Ensures At Least One User Menu Is Present, Allows The User To: 
//  Add, Select, Or Delete Elements As Need Be According To Their Circumstances.
// ============================================================================

// === Header Guard ===
// This Prevents Multiple Inclusions Of The Header File, Ensuring The Compiler Only Processes It
#ifndef LISTMENU_HPP
#define LISTMENU_HPP

// === Include Necessary Headers ===
// This Includes Necessary Headers For The MagazineManager Class, Which Manages Multiple Magazines
#include <iostream>
#include <limits>
#include "LinkableLists.h" // Include The LinkableLists Class Header File To Use The LinkableLists Class In This Program

// === Template Class Declaration ===
// This Class Represents A Menu For Managing Linkable Lists
template <typename ListT>

// === ListMenu Class Declaration ===
// This Class Represents A Menu For Managing Linkable Lists
// It Contains Methods For Displaying The Menu, Handling User Input, And Performing Actions On The Linkable Lists
class ListMenu {

// === Publicly Accessible interface ===
// The Public Access Specifier Allows These Members To Be Accessible From Outside The Class
// This Is Useful For Traversing The List And Manipulating Nodes, Such As Adding Or Removing Elements
public:

    // === Publicly Accessible Constructor ===
    // This Constructor Initializes The ListMenu With Three LinkableLists
    // It Takes Three LinkableLists As Arguments, Allowing The Menu To Interact With Them
    explicit ListMenu(ListT& list, ListT& list2, ListT& list3) : myList1(list), myList2(list2), myList3(list3) {}

// === Privately Inaccessible Interface ===
// The Private Access Specifier Restricts Access To These Members From Outside The Class
// This Is Useful For Encapsulating The Internal Structure Of The Linkable Lists
private:

    ListT& myList1; // Reference To The List Object, This Allows The Menu To Interact With The List
    // It Will Be In Use To Call Functions Like Search, Traversal, Reversal, Push_Front, Push_Back, Pop_Front, Pop_Back, Insert, Get, Remove, And Clear

    ListT& myList2; // Reference To The List Object, This Allows The Menu To Interact With The List
    // It Will Be In Use To Call Functions Like Search, Traversal, Reversal, Push_Front, Push_Back, Pop_Front, Pop_Back, Insert, Get, Remove, And Clear

    ListT& myList3; // Reference To The List Object, This Allows The Menu To Interact With The List
    // It Will Be In Use To Call Functions Like Search, Traversal, Reversal, Push_Front, Push_Back, Pop_Front, Pop_Back, Insert, Get, Remove, And Clear
};

// === Namespace Declaration For JRI (Johnston's Robotics Industries) ===
// This Namespace Contains Functions That Is A Part Of The JRI Linkable List Program
namespace JRI_MenuSelection { // Namespace Declaration For JRI (Johnston's Robotics Industries)

    // Note: The Namespace Is For Organizing Code And Avoiding Name Conflicts
    // It Allows The Code To Be Grouped Logically And Makes It Easier To Understand

    // === Run The Menu ===
    // This Function Displays The Menu Options And Handles User Input To Perform Actions
    // It Will Continue To Run Until The User Chooses To Quit, Allowing The User To Interact With The Linkable Lists
    template<typename T1, typename T2, typename T3> // Function Template Declaration

    // === runMenuWizard Function ===
    // This Function Will Run The Menu Wizard, Allowing The User To Interact With The Linkable Lists
    void runMenuWizardInts(LinkableLists<T1>& ints, LinkableLists<T2>& chars, LinkableLists<T3>& doubles);

    // === Run The Menu ===
    // This Function Displays The Menu Options And Handles User Input To Perform Actions
    // It Will Continue To Run Until The User Chooses To Quit, Allowing The User To Interact With The Linkable Lists
    template<typename T1, typename T2, typename T3> // Function Template Declaration

    // === runMenuWizard Function ===
    // This Function Will Run The Menu Wizard, Allowing The User To Interact With The Linkable Lists
    void runMenuWizardChars(LinkableLists<T1>& ints, LinkableLists<T2>& chars, LinkableLists<T3>& doubles);

    // === Run The Menu ===
    // This Function Displays The Menu Options And Handles User Input To Perform Actions
    // It Will Continue To Run Until The User Chooses To Quit, Allowing The User To Interact With The Linkable Lists
    template<typename T1, typename T2, typename T3> // Function Template Declaration

    // === runMenuWizard Function ===
    // This Function Will Run The Menu Wizard, Allowing The User To Interact With The Linkable Lists
    void runMenuWizardDoubles(LinkableLists<T1>& ints, LinkableLists<T2>& chars, LinkableLists<T3>& doubles);

    // === Run The Menu ===
    // This Function Displays The Menu Options And Handles User Input To Perform Actions
    // It Will Continue To Run Until The User Chooses To Quit, Allowing The User To Interact With The Linkable Lists
    template<typename T1, typename T2, typename T3>

    // === startMenu Function ===
    // This Function Will Start The Menu, Allowing The User To Interact With The Linkable Lists
    // It Will Display The Menu Options And Wait For User Input To Perform Actions
    void startMenu(LinkableLists<T1>&, LinkableLists<T2>&, LinkableLists<T3>&);
}

#endif // End Of LISTMENU_HPP
// This Ends The Header Guard, Preventing Multiple Inclusions Of This Header File

