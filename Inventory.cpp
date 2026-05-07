#include "Inventory.h"
#include <iostream>
using namespace std;

// Delete a vehicle by ID
bool Inventory::deleteVehicle(int vehicleID) {
    for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
        if ((*it)->getVehicleID() == vehicleID) {
            delete* it; // free memory
            vehicles.erase(it);
            return true;
        }
    }
    return false;
}

// Update vehicle details
bool Inventory::updateVehicle(int vehicleID, string newBrand, string newModel, double newPrice) {
    Vehicle* v = findVehicle(vehicleID);
    if (v != nullptr) {
        v->setManufacturer(newBrand);
        v->setModel(newModel);
        v->setPrice(newPrice);
        return true;
    }
    return false;
}

// Check if vehicle is available
bool Inventory::isAvailable(int vehicleID) {
    Vehicle* v = findVehicle(vehicleID);
    if (v != nullptr) {
        return v->getAvailability();
    }
    return false;
}

// Find a vehicle by ID
Vehicle* Inventory::findVehicle(int vehicleID) {
    for (Vehicle* v : vehicles) {
        if (v->getVehicleID() == vehicleID) {
            return v;
        }
    }
    return nullptr;
}

// Display all vehicle details
void Inventory::displayAllVehicles() {
    for (Vehicle* v : vehicles) {
        v->printVehicle(); // calls overridden method in Car
    }
}

// Get total number of vehicles
int Inventory::getTotalVehicles() {
    return vehicles.size();
}