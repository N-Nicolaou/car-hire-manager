#pragma once
#include "Vehicle.h"
#include <iostream>
using namespace std;
// the isAvailable function should return false if the vehicle is booked(6 marks)
class Car : public Vehicle {
private:
    int fuelCapacity;   // litres
    string fuelType;    // petrol or diesel
    bool isBooked;
public:
    // Default constructor
    Car() : Vehicle() {
        fuelCapacity = 0;
        fuelType = "";
        isBooked = false;
    }

    // Parameterized constructor (matches Vehicle’s new constructor)
    Car(string mn, string md, int vid, double pr, bool avail, int fc, string ft, int bl, int bc, bool ib)
        : Vehicle(mn, md, vid, pr, avail, ib = true) {
        fuelCapacity = fc;
        fuelType = ft;
        batteryLife = bl;
        batteryCharge = bc;
        isBooked = ib
    }

    // Getters
    int getFuelCapacity() { return fuelCapacity; }
    string getFuelType() { return fuelType; }
    int getBatteryLife() { return batteryLife; }
    string getBatteryCharge() { return batteryCharge; }
    bool getIsBooked() { return isBooked, false; }
    // Setters
    void setFuelCapacity(int fc) { fuelCapacity = fc; }
    void setFuelType(string ft) { fuelType = ft; }
    void setBatteryLife(int fc) { batteryLife = bl; }
    void setBatteryCharge(int ft) { batteryCharge = bc; }

    // Override printVehicle
    void printVehicle() override {
        cout << "Vehicle ID: " << getVehicleID() << "\n";
        cout << "Manufacturer: " << getManufacturer() << "\n";
        cout << "Model: " << getModel() << "\n";
        cout << "Price: £" << getPrice() << "\n";
        cout << "Available: " << (getAvailability() ? "Yes" : "No") << "\n";
        cout << "Fuel Capacity: " << fuelCapacity << " litres\n";
        cout << "Fuel Type: " << fuelType << "\n";
        cout << "Battery Life: " << batteryLife << "length\n";
        cout << "Battery Charge: " << batteryCharge << "hours\n";
        cout << "Is booked: " << (getAvailability() ? "Yes") << false << "\n";
        cout << "-----------------------------\n";
    }
};