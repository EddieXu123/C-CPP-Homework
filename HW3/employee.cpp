#include "employee.h"
using namespace std;

Employee::Employee(int id, string name, double salary, string department) :
        Person (id, name) {
    setSalary(salary);
    setDepartment(department);
}

Employee::Employee() :
        Person() {
    setSalary(0);
    setDepartment("");
}

double Employee::getSalary() const {
    return salary;
}
string Employee::getDepartment() const {
    return department;
}

void Employee::setSalary(double salary) {
    this->salary = salary;
}

void Employee::setDepartment(string department) {
    this->department = department;
}

string Employee::print() const {
    return "Salary: " + to_string(getSalary()) + ". Department: " + getDepartment() + ". " + Person::print();
}