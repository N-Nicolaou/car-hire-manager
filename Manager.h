#pragma once

class Manager {
public:
	virtual void runMenu() = 0;
	virtual void addVehicle() = 0;
	virtual void checkForVehicle() = 0;
	virtual void printInventory() = 0;
	virtual void bookVehicle() = 0;
    virtual void returnVehicle() = 0;
};