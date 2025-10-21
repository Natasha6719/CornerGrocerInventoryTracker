#include "GroceryTracker.h"
#include <fstream>
#include <iostream>
#include <iomanip>

GroceryTracker::GroceryTracker() {
    loadItemsFromFile("CS210_Project_Three_Input_File.txt");
    writeBackupFile("frequency.dat");
}

void GroceryTracker::loadItemsFromFile(const std::string& filename) {
    std::ifstream inputFile(filename);
    std::string item;

    if (inputFile.is_open()) {
        while (inputFile >> item) {
            ++itemFrequency[item];
        }
        inputFile.close();
    }
    else {
        std::cerr << "Error opening input file.\n";
    }
}

void GroceryTracker::writeBackupFile(const std::string& filename) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const auto& pair : itemFrequency) {
            outFile << pair.first << " " << pair.second << "\n";
        }
        outFile.close();
    }
    else {
        std::cerr << "Error writing backup file.\n";
    }
}

int GroceryTracker::getItemFrequency(const std::string& item) {
    return itemFrequency[item];
}

void GroceryTracker::displayAllFrequencies() {
    for (const auto& pair : itemFrequency) {
        std::cout << std::setw(12) << std::left << pair.first << " " << pair.second << "\n";
    }
}

void GroceryTracker::displayHistogram() {
    for (const auto& pair : itemFrequency) {
        std::cout << std::setw(12) << std::left << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}