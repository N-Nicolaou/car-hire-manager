#pragma once
#include <string>
#include <list>
#include "Vehicle.h"
using namespace std;

class Inventory {
private:
    list<Vehicle*> vehicles;

public:
    Inventory() {}

    //Add a vehicle to inventory
    void addVehicle(Vehicle* v) {
        vehicles.push_back(v);
    }

    //Get all vehicles
    list<Vehicle*> getVehicles() {
        return vehicles;
    }

    //Find a vehicle by ID
    Vehicle* findVehicle(int vehicleID);

    //Check if vehicle is available
    bool isAvailable(int vehicleID);

    //Delete a vehicle by ID
    bool deleteVehicle(int vehicleID);

    //Update vehicle details
    bool updateVehicle(int vehicleID, string newBrand, string newModel, double newPrice);

    //Display all vehicle details
    void displayAllVehicles();

    //Get total number of vehicles
    int getTotalVehicles();
};