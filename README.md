# Car Hire Management System 🚗

**Module:** Object Oriented Programming — University of Westminster  
**Language:** C++

A command-line car hire management system built using core **Object Oriented Programming** principles — inheritance, polymorphism, and encapsulation. Models a multi-branch car hire business with vehicles, inventory management, and branch operations.

---

## Class Hierarchy

```
Vehicle (abstract base class)
    │
    ├── Car
    │     └── ElectricCar
    │
    └── (extensible for other vehicle types)

Manager
Location
Inventory
BranchManager
```

---

## Key OOP Concepts Demonstrated

| Concept | Where |
|---------|-------|
| **Abstraction** | `Vehicle` is abstract with a pure virtual `printVehicle()` method |
| **Inheritance** | `Car` extends `Vehicle`; `ElectricCar` extends `Car` |
| **Polymorphism** | `printVehicle()` overridden in each subclass |
| **Encapsulation** | All attributes private with getters/setters |

---

## Classes

### `Vehicle` (Abstract Base)
Stores core vehicle data: manufacturer, model, vehicle ID, price, and availability. Declares `printVehicle()` as a pure virtual method, forcing all subclasses to implement their own display logic.

### `Car`
Extends `Vehicle` with car-specific attributes. Implements `printVehicle()`.

### `ElectricCar`
Extends `Car` with electric-specific attributes (e.g. battery range). Overrides `printVehicle()`.

### `Inventory`
Manages a collection of vehicles for a branch — tracks availability, handles hire and return operations.

### `BranchManager`
Manages a branch location, its inventory, and branch-level operations.

### `Manager`
Top-level system manager — oversees multiple branches.

### `Location`
Stores location data for branches.

---

## File Structure

```
├── Vehicle.h
├── Car.h
├── ElectricCar.h
├── Inventory.h / Inventory.cpp
├── BranchManager.h / BranchManager.cpp
├── Manager.h
├── Location.h
└── CarehireManager.cpp     # Entry point
```

---

## Built With
- C++
- Object Oriented Design Principles

