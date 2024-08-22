#include <iostream>
#include <string>

// Base class
class Person {
public:
    Person(std::string name) : name(name) {}

    virtual void greet() = 0; // Pure virtual function

    std::string getName() { return name; }

protected:
    std::string name;
};

// Derived class 1
class Student : public Person {
public:
    Student(std::string name, std::string major) : Person(name), major(major) {}

    void greet() override {
        std::cout << "Hello, my name is " << getName() << " and I'm a " << major << " major." << std::endl;
    }

private:
    std::string major;
};

// Derived class 2
class Teacher : public Person {
public:
    Teacher(std::string name, std::string subject) : Person(name), subject(subject) {}

    void greet() override {
        std::cout << "Hello, my name is " << getName() << " and I teach " << subject << "." << std::endl;
    }

private:
    std::string subject;
};

int main() {
    Student student("John Doe", "Computer Science");
    Teacher teacher("Jane Smith", "Math");

    student.greet();
    teacher.greet();

    return 0;
}
