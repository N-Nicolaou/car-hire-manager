#pragma once
#include "Vehicle.h"
using namespace std {
	
    class Electric : public Vehicle {
    private:
        int batteryLife, batteryCharge;   // battery life and battery charge

    public:
        // Default constructor
        ElectricCar() : Vehicle() {
            batteryLife = 0;
            batteryCharge = 40;
        }

        // Parameterized constructor (matches Vehicle’s new constructor)
        ElectricCar(int bl, int bc){
            batteryLife = bl;
            batteryCharge = bc;
        }

};
    