#include <iostream>
class Animal {
public:
    virtual void eat() {
        std::cout << "Animal is eating something\n";
    }
};

class Herbivore : public Animal {
public:
    void eat() override {
        std::cout << "Herbivore is eating plants\n";
    }
};

class Carnivore : public Animal {
public:
    void eat() override {
        std::cout << "Carnivore is eating meat\n";
    }
};

int main() {
    Animal* animal1 = new Herbivore();
    Animal* animal2 = new Carnivore();

    animal1->eat();
    animal2->eat();

    delete animal1;
    delete animal2;

    return 0;
}