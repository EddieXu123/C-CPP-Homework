#include "staff.h"
using namespace std;

Staff::Staff(int ID, string name, double salary, string department, string title) :
Employee(ID, name, salary, department) {
    setTitle(title);
}

Staff::Staff() :
Employee() {
    setTitle("");
}

string Staff::getTitle() const {
    return title;
}

void Staff::setTitle(std::string title) {
    this->title = title;
}

string Staff::print() const {
    return "Title: " + getTitle() + ". " + Employee::print();
}