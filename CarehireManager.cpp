/*
* Full Name:
* Student ID:
*/

#include <iostream>
#include "Manager.h"
#include "BranchManager.h"


int main()
{
    Location* l = new Location("Acton Branch", "Acton High Street");
    Manager* manager = new BranchManager(l);
    manager->runMenu();
}