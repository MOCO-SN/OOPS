#include <iostream>
using namespace std;

// when we inheritate multiple time. it's konwn as hybrid inheritance

// Base class 1
class Vehicle {
public:
    void showVehicle() {
        cout << "This is a Vehicle." << endl;
    }
};

// Base class 2
class Engine {
public:
    void showEngine() {
        cout << "This Vehicle has an Engine." << endl;
    }
};

// Derived class 1 (single inheritance)
class Car : public Vehicle {
public:
    void showCar() {
        cout << "This is a Car." << endl;
    }
};

// Derived class 2 (multiple inheritance)
class SportsCar : public Car, public Engine {
public:
    void showSportsCar() {
        cout << "This is a Sports Car." << endl;
    }
};

int main() {
    SportsCar obj;

    obj.showVehicle();      // Inherited from Vehicle
    obj.showEngine();       // Inherited from Engine
    obj.showCar();          // Inherited from Car
    obj.showSportsCar();    // Method of SportsCar

    return 0;
}   