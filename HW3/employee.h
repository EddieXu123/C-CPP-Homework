#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "person.h"
#include <string>
using namespace std;

class Employee : public Person {
private:
    double salary;
    string department;

public:
    Employee(int id, string name, double salary, string department);
    Employee();

    double getSalary() const;
    void setSalary(double salary);

    string getDepartment() const;
    void setDepartment(string department);

    string print() const;
};


#endif // EMPLOYEE_H
