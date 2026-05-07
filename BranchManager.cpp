#include "BranchManager.h"
#include "Vehicle.h"
#include "Car.h"
#include <iostream>
using namespace std;

void BranchManager::runMenu() {
    cout << "Starting menu..." << endl;
    bool keepGoing = true;
    while (keepGoing) {
        cout << "\nMenu\n----" << endl;
        cout << "1. Add new vehicle" << endl;
        cout << "2. Check for vehicle" << endl;
        cout << "3. Display all vehicles" << endl;
        cout << "4. Update vehicle" << endl;
        cout << "5. Delete vehicle" << endl;
        cout << "6. Display branch info" << endl;
        cout << "7. Print inventory" << endl;
        cout << "8. Book vehicle" << endle;
        cout << "9. Return vehicle" << endl;
        cout << "10. Quit" << endl;
       
        cout << "Choose option ---> ";
        int opt;
        cin >> opt;
        switch (opt) {
        case 1: addVehicle(); break;
        case 2: checkForVehicle(); break;
        case 3: displayBranchVehicles(); break;
        case 4: updateBranchVehicle(); break;
        case 5: deleteBranchVehicle(); break;
        case 6: displayBranchInfo(); break;
        case 7: printInventory(); break;
        case 8: bookVehicle(); break;
        case 9: returnVehicle(); break;
        case 10: keepGoing = false; break;
        default: cout << "Unrecognised option. Please try again." << endl; break;
        }
    }
    cout << "Exiting..." << endl;
}

void BranchManager::addVehicle() {
    cout << "Add new vehicle..." << endl;
    string manufacturer, model;
    int vehicleID;
    double price;
    bool available;

    cout << "Enter manufacturer (no spaces): ";
    cin >> manufacturer;
    cout << "Enter model (no spaces): ";
    cin >> model;
    cout << "Enter vehicle ID: ";
    cin >> vehicleID;
    cout << "Enter price: ";
    cin >> price;
    cout << "Is the vehicle available? (1 = yes, 0 = no): ";
    cin >> available;

    string vtype;
    cout << "Enter vehicle type (e.g., car): ";
    cin >> vtype;

    Vehicle* vehicle = nullptr;
    if (vtype == "car") {
        int fuelCapacity;
        string fuelType;
        cout << "Fuel capacity in litres: ";
        cin >> fuelCapacity;
        cout << "Fuel type (petrol/diesel): ";
        cin >> fuelType;
        vehicle = new Car(manufacturer, model, vehicleID, price, available, fuelCapacity, fuelType);
        inventory->addVehicle(vehicle);
    }
    else {
        cout << "Unknown vehicle type" << endl;
    }
}

void BranchManager::checkForVehicle() {
    int vehicleID;
    cout << "Enter vehicle ID: ";
    cin >> vehicleID;

    Vehicle* v = inventory->findVehicle(vehicleID);
    if (v != nullptr) {
        v->printVehicle();
    }
    else {
        cout << "No vehicle found with ID " << vehicleID << endl;
    }
}

void BranchManager::displayBranchVehicles() {
    cout << "\nVehicles at this branch:\n";
    inventory->displayAllVehicles();
}

void BranchManager::updateBranchVehicle() {
    int vehicleID;
    string newBrand, newModel;
    double newPrice;
    cout << "Enter vehicle ID to update: ";
    cin >> vehicleID;
    cout << "Enter new manufacturer: ";
    cin >> newBrand;
    cout << "Enter new model: ";
    cin >> newModel;
    cout << "Enter new price: ";
    cin >> newPrice;

    

    if (inventory->updateVehicle(vehicleID, newBrand, newModel, newPrice, Vehicle)) {
        cout << "Vehicle updated successfully.\n";
    }
    else {
        cout << "Vehicle not found.\n";
    }
}

void BranchManager::deleteBranchVehicle() {
    int vehicleID;
    cout << "Enter vehicle ID to delete: ";
    cin >> vehicleID;

    if (inventory->deleteVehicle(vehicleID)) {
        cout << "Vehicle deleted successfully.\n";
    }
    else {
        cout << "Vehicle not found.\n";
    }
}

void BranchManager::displayBranchInfo() {
    cout << "\nBranch Information:\n";

    location->printLocation();


}


void BranchManager::printInventory() { //(iii) if electric, range and battery life (4 marks),
    int vehicleID, passengerCapacity;
    string manufacturer, newModel, fuelType;
    cout << "Enter vehicle ID to update: ";
    cin >> vehicleID;
    cout << "Enter new manufacturer: ";
    cin >> manufacturer;
    cout << "Enter new model: ";
    cin >> newModel;
    cout << "Enter fuel type: ";
    cin >> fuelType;
    cout << "Enter passenger capacity: ";
    cin >> passengerCapacity;

    if (inventory-> Electric(fuelType)) {
        cout << "Enter range and battery life";
        cin >> fuelType
  
           
            