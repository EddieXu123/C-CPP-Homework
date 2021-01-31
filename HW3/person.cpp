#include "person.h"
using namespace std;

Person::Person(int ID, string name) {
    setID(ID);
    setName(name);
}

Person::Person() {
    setID(-1);
    setName("");
}

int Person::getID() const {
    return ID;
}

void Person::setID(int id) {
    this->ID = id;
}

string Person::getName() const {
    return name;
}

void Person::setName(std::string name) {
    this->name = name;
}

std::string Person::print() const {
    return "Name: " + getName() + ". ID: " + to_string(getID());
}