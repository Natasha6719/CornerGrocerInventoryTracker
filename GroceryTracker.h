#ifndef GROCERYTRACKER_H
#define GROCERYTRACKER_H

#include <string>
#include <map>

class GroceryTracker {
public:
    GroceryTracker();
    int getItemFrequency(const std::string& item);
    void displayAllFrequencies();
    void displayHistogram();

private:
    std::map<std::string, int> itemFrequency;
    void loadItemsFromFile(const std::string& filename);
    void writeBackupFile(const std::string& filename);
};

#endif
