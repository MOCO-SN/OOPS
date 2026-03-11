#include <iostream>
using namespace std;

// it is class when from two or more than two class are created from 
// them we can access the values of the created class is known as multiple inheritance.

// Base class 1
class Vehicle {
public:
    void drive() {
        cout << "Driving on land" << endl;
    }
};

// Base class 2
class Boat {
public:
    void sail() {
        cout << "Sailing on water" << endl;
    }
};

// Derived class inheriting from both Vehicle and Boat
class AmphibiousVehicle : public Vehicle, public Boat {
public:
    void use() {
        drive(); // Calls drive() from Vehicle
        sail();  // Calls sail() from Boat
    }
};

int main() {
    AmphibiousVehicle myVehicle;
    myVehicle.use();
    return 0;
}   