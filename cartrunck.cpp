#include <iostream>
class Vehicle {
public:
    virtual void drive() const = 0;
    virtual ~Vehicle() {}
};
class Car : public Vehicle {
public:
    void drive() const override {
        std::cout << "Car is driving smoothly on the road." << std::endl;
    }
};
class Truck : public Vehicle {
public:
    void drive() const override {
        std::cout << "Truck is driving heavily on the highway." << std::endl;
    }
};

int main() {
    Vehicle* myCar = new Car();
    Vehicle* myTruck = new Truck();
    myCar->drive();   
    myTruck->drive();
    delete myCar;
    delete myTruck;

    return 0;
}
