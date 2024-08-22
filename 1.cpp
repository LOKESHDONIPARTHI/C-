#include <iostream>
#include <string>
// Base class
class Person {
public:
    Person(std::string name) : name(name) {} 
    virtual void work() = 0; // Pure virtual function
    std::string getName() { return name; }
private:
    std::string name;
};
// Derived class 1
class Employee : public Person {
public:
    Employee(std::string name, std::string department) 
        : Person(name), department(department) {}
    void work() override {
        std::cout << getName() << " is working in the " << department << " department." << std::endl;
    }
private:
    std::string department;
};
// Derived class 2
class Manager : public Person {
public:
    Manager(std::string name, std::string team) 
   : Person(name), team(team) {}
    void work() override {
        std::cout << getName() << " is managing the " << team << " team." << std::endl;
    }
private:
    std::string team;
};
int main() {
    Employee emp("John Doe", "Sales");
    Manager mgr("Jane Doe", "Marketing");
    emp.work();
    mgr.work();
    return 0;
}

