#pragma once

#include "Manager.h"
#include "Inventory.h"
#include "Location.h"
using namespace std;

class BranchManager : public Manager {
private:
    Inventory* inventory;
    Location* location;

public:

    BranchManager(Location* l) {
        inventory = new Inventory();
        location = l;
    }

    // Core menu logic
    void runMenu();

    // Add a vehicle to this branch
    void addVehicle();

    // Search for a vehicle by ID
    void checkForVehicle();

    // Display all vehicles at this branch
    void displayBranchVehicles();

    // Update vehicle details
    void updateBranchVehicle();

    // Delete a vehicle
    void deleteBranchVehicle();

    // Optional: Display branch location info
    void displayBranchInfo();
};