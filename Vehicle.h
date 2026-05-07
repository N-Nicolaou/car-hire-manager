#pragma once
#include <string>
using namespace std;
// returnVehicle(), which should have void return type
class Vehicle {
private:
    string manufacturer;
    string model;
    int vehicleID;
    double price;        // NEW: price attribute
    bool available;      // NEW: availability flag
    bool vehicleReturn;
  
public:
    // Default constructor
    Vehicle() {
        manufacturer = "";
        model = "";
        vehicleID = -1;
        price = 0.0;
        available = true;
        vehicleReturn = true;
    
    }

    // Parameterized constructor
    Vehicle(string mn, string md, int vid, double pr, bool avail = true) {
        manufacturer = mn;
        model = md;
        vehicleID = vid;
        price = pr;
        available = avail;
        vehicleReturn = ret;
    }

    // Getters
    string getManufacturer() { return manufacturer; }
    string getModel() { return model; }
    int getVehicleID() { return vehicleID; }
    double getPrice() { return price; }
    bool getAvailability() { return available; }
    bool getReturnVehicle() { return vehicleReturn; }
   
    // Setters
    void setManufacturer(string mn) { manufacturer = mn; }
    void setModel(string md) { model = md; }
    void setVehicleID(int vid) { vehicleID = vid; }
    void setPrice(double pr) { price = pr; }
    void setAvailability(bool avail) { available = avail; }
    void setReturnVehicle(bool ret) { return = ret; }
   
    // Pure virtual method to enforce subclass implementation
    virtual void printVehicle() = 0;
};