// CornerGrocer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <limits>
#include "GroceryTracker.h"

int main() {
    GroceryTracker tracker;
    int choice;
    std::string item;

    do {
        std::cout << "\nCorner Grocer Menu:\n";
        std::cout << "1. Search for item frequency\n";
        std::cout << "2. Display all item frequencies\n";
        std::cout << "3. Display histogram\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";

        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear(); // clear error state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout << "Invalid input. Please enter a number between 1 and 4.\n";
            continue;
        }

        switch (choice) {
        case 1:
            std::cout << "Enter item name: ";
            std::cin >> item;
            std::cout << item << " appears " << tracker.getItemFrequency(item) << " times.\n";
            break;
        case 2:
            tracker.displayAllFrequencies();
            break;
        case 3:
            tracker.displayHistogram();
            break;
        case 4:
            std::cout << "Exiting program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
